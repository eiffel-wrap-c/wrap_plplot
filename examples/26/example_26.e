note
	description: "[
		Filling and clipping polygons.
	]"
	date: "$Date$"
	revision: "$Revision$"
	eis: "name=example_26", "src=http://plplot.sourceforge.net/examples.php?demo=25&lbind=C", "protocol=uri"

class
	EXAMPLE_26

inherit

	PLPLOT_API

create
	make

feature {NONE} --Initialization

	make
			--  Test program for filling polygons and proper clipping
		local
			l_py: ARRAY [REAL_64]
			npts: INTEGER
			xextreme: ARRAY2 [REAL_64]
			yextreme: ARRAY2 [REAL_64]
			x0: ARRAY [REAL_64]
			y0: ARRAY [REAL_64]
		do
			npts := 0

			create xextreme.make_filled (0.0, 10, 2)
			create yextreme.make_filled (0.0, 10, 2)

			create x0.make_filled (0.0,1, 10)
			create y0.make_filled (0.0,1, 10)

				-- Select svg option on windows.
			c_plssub( 3, 3 )
			initialize

			xextreme[1,1] := -120.0; xextreme[1,2] := 120.0;  yextreme[1,1] := -120.0; yextreme[1,2] := 120.0;
 			xextreme[2,1] := -120.0; xextreme[2,2] := 120.0;  yextreme[2,1] := 20.0;   yextreme[2,2] := 120.0;
    		xextreme[3,1] := -120.0; xextreme[3,2] := 120.0;  yextreme[3,1] := -20.0;  yextreme[3,2] := 120.0;
		    xextreme[4,1] := -80.0;  xextreme[4,2] := 80.0;   yextreme[4,1] := -20.0;  yextreme[4,2] := 120.0;
		    xextreme[5,1] := -220.0; xextreme[5,2] := -120.0; yextreme[5,1] := -120.0; yextreme[5,2] := 120.0;
		    xextreme[6,1] := -20.0;  xextreme[6,2] := 20.0;   yextreme[6,1] := -120.0; yextreme[6,2] := 120.0;
		    xextreme[7,1] := -20.0;  xextreme[7,2] := 20.0;   yextreme[7,1] := -20.0;  yextreme[7,2] := 20.0;
		    xextreme[8,1] := -80.0;  xextreme[8,2] := 80.0;   yextreme[8,1] := -80.0;  yextreme[8,2] := 80.0;
		    xextreme[9,1] := 20.0;   xextreme[9,2] := 120.0;  yextreme[9,1] := -120.0; yextreme[9,2] := 120.0;

			across 1 |..| 2 as k  loop
				across 1 |..| 4 as j loop
					if j.item = 1 then
							-- Polygon 1: a diamond
		                x0[1] := 0;    y0[1] := -100;
		                x0[2] := -100; y0[2] := 0;
		                x0[3] := 0;    y0[3] := 100;
		                x0[4] := 100;  y0[4] := 0;
		                npts  := 4;
					end
					if j.item = 2 then
							-- Polygon 1: a diamond - reverse direction
		                x0[4] := 0;    y0[4] := -100;
		                x0[3] := -100; y0[3] := 0;
		                x0[2] := 0;    y0[2] := 100;
		                x0[1] := 100;  y0[1] := 0;
		                npts  := 4;
					end

					if j.item = 3 then
							-- Polygon 2: a square with punctures
		                x0[1] := -100;  y0[1] := -100;
		                x0[2] := -100;  y0[2] := -80;
		                x0[3] := 80;    y0[3] := 0;
		                x0[4] := -100;  y0[4] := 80;
		                x0[5] := -100;  y0[5] := 100;
		                x0[6] := -80;   y0[6] := 100;
		                x0[7] := 0;     y0[7] := 80;
		                x0[8] := 80;    y0[8] := 100;
		                x0[9] := 100;   y0[9] := 100;
		                x0[10] := 100;  y0[10] := -100;
		                npts  := 10;
					end

					if j.item = 4 then
							-- Polygon 2: a square with punctures - reversed direction
		                x0[10]:= -100; y0[10] := -100;
		                x0[9] := -100; y0[9] := -80;
		                x0[8] := 80;   y0[8] := 0;
		                x0[7] := -100; y0[7] := 80;
		                x0[6] := -100; y0[6] := 100;
		                x0[5] := -80;  y0[5] := 100;
		                x0[4] := 0;    y0[4] := 80;
		                x0[3] := 80;   y0[3] := 100;
		                x0[2] := 100;  y0[2] := 100;
		                x0[1] := 100;  y0[1] := -100;
		                npts  := 10;

					end
					across 1 |..| 9 as i loop
		                c_pladv( 0 )
		                c_plvsta
		                c_plwind( xextreme[i.item,1], xextreme[i.item,2], yextreme[i.item,1], yextreme[i.item,2] );

		                c_plcol0( 2 )
		                c_plbox( "bc", 1.0, 0, "bcnv", 10.0, 0 )
		                c_plcol0( 1 )
		                c_plpsty( 0 )
		                if ( k.item = 1 ) then
		                    c_plfill(npts, x0.area.base_address, y0.area.base_address )
		                else
		                    c_plgradient( npts, x0.area.base_address, y0.area.base_address, 45.0 )
		                end
		                c_plcol0( 2 )
		                c_pllsty( 1 )
		                c_plline(npts, x0.area.base_address, y0.area.base_address )
					end
				end
			end
			finalize
		end


end
