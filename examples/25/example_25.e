note
	description: "[
		Unicode Pace Flag
	]"
	date: "$Date$"
	revision: "$Revision$"
	eis: "name=example_25", "src=http://plplot.sourceforge.net/examples.php?demo=24&lbind=C", "protocol=uri"

class
	EXAMPLE_25

inherit

	PLPLOT_API

create
	make

feature {NONE} --Initialization

	make
		local
			l_py: ARRAY [REAL_64]
		do
				-- Select svg option on windows.
			initialize
			c_pladv (0)
			c_plvpor( 0.0, 1.0, 0.0, 1.0 )
			c_plwind( 0.0, 1.0, 0.0, 1.0 )
			c_plcol0( 0 )
			c_plbox( "", 1.0, 0, "", 1.0, 0 )
			plscmap0( red, green, blue, 7 )
			c_plschr( 0.0, 4.0 )
			c_plfont( 1 )

			create l_py.make_from_array (py)
			across 1 |..| 4 as i loop
				c_plcol0( i.item )
				plfill( px, l_py )
				across 1 |..| 4 as j loop
					l_py [j.item] := l_py [j.item ] + 1.0 / 4.0
				end
			end
			c_plcol0( 0 )

			across 1 |..| 12 as i loop
				c_plptex_32( sx [i.item], sy [i.item], 1.0, 0.0, 0.5, peace [i.item] );
			end
			finalize
		end

feature -- Options data structure definition.

	red: ARRAY [INTEGER]
		do
			Result := <<240, 204, 204, 204, 0, 39, 125>>
		ensure
			is_class: class
		end

	green: ARRAY [INTEGER]
		do
			Result := <<240, 0, 125, 204, 204, 80, 0>>
		ensure
			is_class: class
		end

	blue: ARRAY [INTEGER]
		do
			Result := <<240, 0, 0, 0, 0, 204, 125>>
		ensure
			is_class: class
		end

	px: ARRAY [REAL_64]
		do
			Result := <<0.0, 0.0, 1.0, 1.0>>
		ensure
			is_class: class
		end

	py: ARRAY [REAL_64]
		do
			Result := <<0.0, 0.25, 0.25, 0.0>>
		ensure
			is_class: class
		end

	sx: ARRAY [REAL_64]
		do
			Result := <<0.16374, 0.15844, 0.15255, 0.17332, 0.50436, 0.51721, 0.49520, 0.48713, 0.83976, 0.81688, 0.82231, 0.82647>>
		ensure
			is_class: class
		end

	sy: ARRAY [REAL_64]
		do
			Result := <<0.125, 0.375, 0.625, 0.875, 0.125, 0.375, 0.625, 0.875, 0.125, 0.375, 0.625, 0.875>>
		ensure
			is_class: class
		end

	peace: ARRAY [STRING_32]
		note
			eis: "name=Pace", "src=http://www.columbia.edu/~fdc/pace/", "protocol=uri"
		do
			Result := <<
				-- Mandarin
			{STRING_32} "#<0x00>和平",
				-- Hindi
			{STRING_32} "#<0x20>शांति",
				-- English
			{STRING_32} "#<0x10>Peace",
				-- Hebrew
			{STRING_32} "#<0x10>שלום",
				-- Russian
			{STRING_32} "#<0x10>Мир",
				-- German
			{STRING_32} "#<0x10>Friede",
				-- Korean
			{STRING_32} "#<0x30>평화",
				-- French
			{STRING_32} "#<0x10>Paix",
				-- Spanish
			{STRING_32}  "#<0x10>Paz",
				-- Arabic
			{STRING_32} "#<0x10>ﺳﻼم",
				-- Turkish
			{STRING_32} "#<0x10>Barış",
				-- Kurdish
			{STRING_32} "#<0x10>Hasîtî">>
		ensure
			is_class: class
		end

end
