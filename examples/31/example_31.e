note
	description: " Alpha color values demonstration."
	date: "$Date$"
	revision: "$Revision$"
	eis: "name=example 31", "src=http://plplot.sourceforge.net/examples.php?demo=30&lbind=C", "protocol=uri"

class
	EXAMPLE_31

inherit

	PLPLOT_API

create
	make

feature --Initialization

	make
			-- Demo of opacity/ transparency (or alpha channel).
		local
			icol, r, g, b: INTEGER
    		a: REAL_64
    		l_px: ARRAY [REAL_64]
    		l_py: ARRAY [REAL_64]
		do

				-- Initialize plplot
			initialize

			c_plscmap0n( 4 )
		    plscmap0a( red, green, blue, alpha )

		    --
		    -- Page 1:
		    --
		    -- This is a series of red, green and blue rectangles overlaid
		    -- on each other with gradually increasing transparency.
		    --

		    	-- Set up the window
		    c_pladv( 0 )
		    c_plvpor( 0.0, 1.0, 0.0, 1.0 )
		    c_plwind( 0.0, 1.0, 0.0, 1.0 )
		    c_plcol0( 0 )
		    c_plbox( "", 1.0, 0, "", 1.0, 0 )

    			-- Draw the boxes
			create l_px.make_from_array (px)
			create l_py.make_from_array (py)
    		across 0 |..| 8 as i loop
    			icol := i.item \\ 3 + 1
					-- Get a color, change its transparency and
					-- set it as the current color.
				c_plgcol0a( icol, $r, $g, $b, $a )
				c_plscol0a( icol, r, g, b, 1.0 -  (i.item).to_double / 9.0 )
				c_plcol0( icol )


		        	-- Draw the rectangle
		        plfill( l_px, l_py )

		        across 0 |..| 3 as j  loop
			       l_px[j.item + 1] := l_px[j.item + 1] + 0.5 / 9.0
			       l_py[j.item + 1] := l_py[j.item + 1] + 0.5 / 9.0
		        end
    		end

		 		-- Page 2:
		    	--
			    -- This is a bunch of boxes colored red, green or blue with a single
			    -- large (red) box of linearly varying transparency overlaid. The
			    -- overlaid box is completely transparent at the bottom and completely
			    -- opaque at the top.

		    	-- Set up the window
		    c_pladv( 0 );
		    c_plvpor( 0.1, 0.9, 0.1, 0.9 );
		    c_plwind( 0.0, 1.0, 0.0, 1.0 );

    			-- Draw the boxes. There are 25 of them drawn on a 5 x 5 grid.

    		across 0 |..| 4 as i loop
        		-- Set box X position
		        l_px[1] := 0.05 + 0.2 * i.item
		        l_px[2] := l_px[1] + 0.1
		        l_px[3] := l_px[2]
		        l_px[4] := l_px[1]

		        -- We don't want the boxes to be transparent, so since we changed
		        -- the colors transparencies in the first example we have to change
		        -- the transparencies back to completely opaque.
		        icol := i.item \\ 3 + 1
		        c_plgcol0a( icol, $r, $g, $b, $a )
		        c_plscol0a( icol, r, g, b, 1.0 )
		        c_plcol0( icol )
		        across 0 |..| 4 as j loop
			        	-- Set box y position and draw the box.
		            l_py[1] := 0.05 + 0.2 * j.item
		            l_py[2] := l_py[1]
		            l_py[3] := l_py[1] + 0.1
		            l_py[4] := l_py[3]
		            plfill( l_px, l_py )
				end
			end




			 	-- Create the color map with 128 colors and use plscmap1la to initialize
    			-- the color values with a linearly varying red transparency (or alpha)
		    c_plscmap1n( 128 );
		    plscmap1la( 1, pos, rcoord, gcoord, bcoord, acoord, rev );

			    -- Use that cmap1 to create a transparent red gradient for the whole
			    -- window.
		    l_px[1] := 0.0
		    l_px[2] := 1.0
		    l_px[3] := 1.0
		    l_px[4] := 0.0

		    l_py[1] := 0.0
		    l_py[2] := 0.0
		    l_py[3] := 1.0
		    l_py[4] := 1.0


			plgradient( l_px, l_py, 90.0 );
			finalize
		end



feature -- Access

	red: ARRAY [INTEGER]
		do
			Result := << 0, 255, 0, 0 >>
		end

	green: ARRAY [INTEGER]
		do
			Result := << 0, 0, 255, 0 >>
		end

	blue: ARRAY [INTEGER]
		do
			Result := << 0, 0, 0, 255 >>
		end

	alpha: ARRAY [REAL_64]
		do
			Result := << 1.0, 1.0, 1.0, 1.0 >>
		end

	px: ARRAY [REAL_64]
		do
			Result := << 0.1, 0.5, 0.5, 0.1 >>
		end

	py: ARRAY [REAL_64]
		do
			Result := << 0.1, 0.1, 0.5, 0.5 >>
		end

	pos: ARRAY [REAL_64]
		do
			Result := << 0.0, 1.0 >>
		end

	rcoord: ARRAY [REAL_64]
		do
			Result := << 1.0, 1.0 >>
		end

	gcoord: ARRAY [REAL_64]
		do
			Result := << 0.0, 0.0 >>
		end

	bcoord: ARRAY [REAL_64]
		do
			Result := << 0.0, 0.0 >>
		end

	acoord: ARRAY [REAL_64]
		do
			Result := << 0.0, 1.0 >>
		end

	rev: ARRAY [BOOLEAN]
		do
			Result := << False, False >>
		end

end
