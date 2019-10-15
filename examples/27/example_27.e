note
	description: "Multi-lingual version of the first page of example 5."
	date: "$Date$"
	revision: "$Revision$"
	eis: "name=example 27", "src=http://plplot.sourceforge.net/examples.php?demo=26","protocol=uri"
class
	EXAMPLE_27

inherit

	PLPLOT_API

create
	make

feature --Initialization

	make
			-- Illustration of logarithmic axes, and redefinition of window.
		do
			-- Parse and process command line arguments
			-- Initialize plplot

		    initialize
    		c_plfont( 2 )

			-- Make log plots using two different styles.
			across x_labels as ic loop
				  plot1( 0, x_labels[ic.cursor_index], y_labels[ic.cursor_index], alty_labels[ic.cursor_index], legend_texts[ic.cursor_index], title_labels[ic.cursor_index], line_labels[ic.cursor_index])
    		end
--			plot1( 0, x_labels[2], y_labels[2], alty_labels[2], legend_texts[2], title_labels[2], line_labels[2])
			finalize
		end

feature -- Plotting


	plot1 (a_type: INTEGER; x_label: STRING_32; y_label: STRING_32; alty_label: STRING_32; legend_text: ARRAY [STRING_32]; title_label: STRING_32; line_label: STRING_32)
			-- Log-linear plot.
		local
			freq1: ARRAY [REAL_64]
			ampl: ARRAY [REAL_64]
			phase: ARRAY [REAL_64]
			i: INTEGER
			f0, freq: REAL_64
			nlegend: INTEGER
			text: ARRAY [STRING]
			symbols: ARRAY [STRING_32]
			opt_array: ARRAY [INTEGER]
			text_colors: ARRAY [INTEGER]
			line_colors: ARRAY [INTEGER]
			line_styles: ARRAY [INTEGER]
			line_widths: ARRAY [REAL_64]
			symbol_numbers, symbol_colors: ARRAY [INTEGER]
			symbol_scales: ARRAY [REAL_64]
			legend_width, legend_height: REAL_64

		do
			create freq1.make_filled (0.0, 1, 101)
			create ampl.make_filled (0.0, 1, 101)
			create phase.make_filled (0.0, 1, 101)

			c_pladv( 0 );

				-- Set up data for log plot
			f0 := 1.0
			across 0 |..| 100 as ic  loop
				freq1 [ic.item + 1] := -2.0 + ic.item / 20.0
				freq := (10.0^ freq1[ic.item + 1] )
				ampl[ic.item + 1]  := 20.0 * {DOUBLE_MATH}.log10( 1.0 / {DOUBLE_MATH}.sqrt( 1.0 + ( freq / f0 )^ 2.0 ) )
				phase[ic.item + 1] := -( 180.0 / {DOUBLE_MATH}.pi ) * {DOUBLE_MATH}.arc_tangent( freq / f0 )
			end

			c_plvpor( 0.15, 0.85, 0.1, 0.9 );
			c_plwind( -2.0, 3.0, -80.0, 0.0 );

				-- Try different axis and labelling styles.

    		c_plcol0( 1 )
    		inspect a_type
    		when 0 then
    			c_plbox( "bclnst", 0.0, 0, "bnstv", 0.0, 0 )
    		when 1 then
    			c_plbox( "bcfghlnst", 0.0, 0, "bcghnstv", 0.0, 0 )
    		end

				-- Plot ampl vs freq

    		c_plcol0( 2 )
    		plline (freq1, ampl )
    		c_plcol0( 2 )
    		c_plptex_32( 1.6, -30.0, 1.0, -20.0, 0.5, line_label )

				-- Put labels on
		    c_plcol0( 1 )
		    c_plmtex_32( "b", 3.2, 0.5, 0.5, x_label )
		    c_plmtex_32( "t", 2.0, 0.5, 0.5, title_label )
		    c_plcol0( 2 )
		    c_plmtex_32( "l", 5.0, 0.5, 0.5, y_label )
		    nlegend := 1

				-- For the gridless case, put phase vs freq on same plot

		    if  a_type = 0 then
				c_plcol0( 1 )
		        c_plwind( -2.0, 3.0, -100.0, 0.0 )
		        c_plbox( "", 0.0, 0, "cmstv", 30.0, 3 )
		        c_plcol0( 3 )
		        plline( freq1, phase );
		        plstring(freq1, phase, "#(728)" )
		        c_plcol0( 3 )
		        c_plmtex_32( "r", 5.0, 0.5, 0.5, alty_label )
		        nlegend := 2
		    end

			create opt_array.make_filled (0, 1, 2)
			create text_colors.make_filled (0, 1, 2)
			create text.make_filled ("", 1, 2)
			create line_styles.make_filled (0, 1, 2)
			create line_widths.make_filled (0.0, 1, 2)
			create line_colors.make_filled (0, 1, 2)
			create symbols.make_filled ("", 1, 2)
			create symbol_colors.make_filled (0, 1, 2)
			create symbol_numbers.make_filled (0, 1, 2)
			create symbol_scales.make_filled (0, 1, 2)

				-- Draw a legend
				-- First legend entry.

			opt_array [1] := {PLPLOT_CONSTANTS}.PL_LEGEND_LINE
			text_colors [1] := 2
			--text [1] := "Amplitude"
			line_colors [1] := 2
			line_styles [1] := 1
			line_widths [1] := 1.0

				-- note from the above opt_array the first symbol (and box) indices
				-- do not have to be specified, at least in C. For Fortran we need
				-- to set the symbols to be something, since the string is always
				-- copied as part of the bindings.

				--    Second legend entry.
			opt_array[2] := {PLPLOT_CONSTANTS}.PL_LEGEND_LINE | {PLPLOT_CONSTANTS}.PL_LEGEND_SYMBOL
			text_colors[2] := 3
			--text[2] := "Phase shift"
			line_colors[2] := 3
			line_styles[2] := 1
			line_widths[2] := 1.0
			symbol_colors[2] := 3
			symbol_scales[2]  := 1.0
			symbol_numbers[2] := 4
			symbols[2] := "#(728)"

				-- from the above opt_arrays we can completely ignore everything
				-- to do with boxes.

			c_plscol0a( 15, 32, 32, 32, 0.70 )
		    pllegend_32 ( $legend_width,
		    			$legend_height,
		    			{PLPLOT_CONSTANTS}.PL_LEGEND_BACKGROUND | {PLPLOT_CONSTANTS}.PL_LEGEND_BOUNDING_BOX,
		    			0,
		    			0.0,
		    			0.0,
		    			0.1,
		    			15,
		    			1,
		    			1,
		    			0,
		    			0,
		    			nlegend,
		    			opt_array,
		    			1.0,
		    			1.0,
		    			2.0,
		    			1.0,
		    			text_colors,
		    			legend_text,
		    			default_pointer,
		    			default_pointer,
		    			default_pointer,
		    			default_pointer,
		    			line_colors,
		    			line_styles,
		    			line_widths,
		        		symbol_colors,
		        		symbol_scales,
		        		symbol_numbers,
		        		symbols )

		end


	x_labels: ARRAY [STRING_32]
		do
			Result := <<{STRING_32}"Frequency",{STRING_32}"Частота">>
		end

	y_labels: ARRAY [STRING_32]
		do
			Result := << {STRING_32}"Amplitude (dB)",{STRING_32}"Амплитуда (dB)">>
		end

	alty_labels: ARRAY [STRING_32]
		do
			Result := <<{STRING_32}"Phase shift (degrees)",{STRING_32}"Фазовый сдвиг (градусы)">>
		end


		-- Short rearranged versions of y_label and alty_label.

	legend_texts : ARRAY [ARRAY [STRING_32]]
		do
			Result := <<
				<<{STRING_32}"Amplitude", {STRING_32}"Phase shift">>,
				<<{STRING_32}"Амплитуда", {STRING_32}"Фазовый сдвиг">>
				>>
		end

	title_labels: ARRAY [STRING_32]
		do
			Result := <<{STRING_32}"Single Pole Low-Pass Filter", {STRING_32}"Однополюсный Низко-Частотный Фильтр">>
		end

	line_labels: ARRAY [STRING_32]
		do
			Result := <<{STRING_32}"-20 dB/decade", {STRING_32}"-20 dB/десяток">>
		end
end
