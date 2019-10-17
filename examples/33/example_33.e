note
	description: "Box plot demo."
	date: "$Date$"
	revision: "$Revision$"
	eis: "name=example 33", "src=http://plplot.sourceforge.net/examples.php?demo=32&lbind=C", "protocol=uri"

class
	EXAMPLE_33

inherit

	PLPLOT_API

create
	make

feature --Initialization

	make
			-- Does a box plot.
			-- Demo of how to draw box-whisker / candlestick plots using PLplot. These are commonly used for financial data.
		local
			string: STRING
			x0: REAL_64
			y25: ARRAY [REAL_64]
			Y50: ARRAY [REAL_64]
			Y75: ARRAY [REAL_64]
			lw: ARRAY [REAL_64]
			uw: ARRAY [REAL_64]
			outx: ARRAY [REAL_64]
			outy: ARRAY [REAL_64]
		do

				-- quartiles
			y25 := <<0.984, 0.980, 0.976, 0.975, 0.973, 0.967, 0.974, 0.954, 0.987, 0.991>>
			y50 := <<0.994, 0.999, 1.035, 0.995, 1.002, 0.997, 1.034, 0.984, 1.007, 1.017>>
			y75 := <<1.054, 1.040, 1.066, 1.025, 1.043, 1.017, 1.054, 1.004, 1.047, 1.031>>

				-- Lower and upper whisker

			lw := <<0.964, 0.950, 0.926, 0.955, 0.963, 0.937, 0.944, 0.924, 0.967, 0.941>>
			uw := <<1.071, 1.062, 1.093, 1.045, 1.072, 1.067, 1.085, 1.024, 1.057, 1.071>>

				-- outliers
			outx := <<3.5, 6.5>>
			outy := <<0.89, 1.09>>

				--//  static PLFLT pos[] = {0.0, 0.25, 0.5, 0.75, 1.0};
				--//  static PLFLT red[] = {0.0, 0.25, 0.5, 1.0, 1.0};
				--//  static PLFLT green[] = {1.0, 0.5, 0.5, 0.5, 1.0};
				--//  static PLFLT blue[] = {1.0, 1.0, 0.5, 0.25, 0.0};\

				-- Initialize plplot
			initialize
			c_pladv (0)
			c_plvsta
			x0 := 1.0
			c_plwind (x0, x0 + 10, 0.85, 1.15)
			c_plcol0 (1)
			c_plbox ("bc", 1.0, 0, "bcgnst", 0, 0)
			c_pllab ("Group", "Value", "#frPLplot Example 32")

				--    // plscmap1l(1,5,pos,red,green,blue,NULL);

			across
				0 |..| 9 as i
			loop
				c_plcol1 (i.item / 9.0)
				plfbox ((x0 + i.item), y25 [i.item + 1], y50 [i.item + 1], y75 [i.item + 1], lw [i.item + 1], uw [i.item + 1])
				string := (x0.truncated_to_integer_64 + i.item).out
				c_plmtex ("b", 1.0, ((i.item + 1) * .1 - .05), 0.5, string)
			end

				-- for ( i = 0; i < 10; i++ )
				--    {
				--        plcol1( i / 9.0 );
				--        plfbox( ( x0 + i ), y25[i], y50[i], y75[i], lw[i], uw[i] );

				--        sprintf( string, "%d", (int) x0 + i );
				--        plmtex( "b", 1.0, ( ( i + 1 ) * .1 - .05 ), 0.5, string );
				--    }

				-- some outliers plotted with intermediate-sized circles, see PLplot
				-- example 07 for other possibilities.
			plpoin (outx, outy, 22);
			finalize
		end

	plfbox (x: REAL_64; y25: REAL_64; y50: REAL_64; y75: REAL_64; lw: REAL_64; uw: REAL_64)
		local
			px, py, mx, my, wx, wy, barx, bary: ARRAY [REAL_64]
			spacing: REAL_64
			xmin, xmax: REAL_64
			xmid, xwidth: REAL_64
		do
			spacing := 0.4 -- in x axis units

			xmin := x + spacing / 2.0
			xmax := x + 1. - spacing / 2.0

			create px.make_filled (0.0, 1, 5)
			create py.make_filled (0.0, 1, 5)
			create mx.make_filled (0.0, 1, 2)
			create my.make_filled (0.0, 1, 2)
			create wx.make_filled (0.0, 1, 2)
			create wy.make_filled (0.0, 1, 2)
			create barx.make_filled (0.0, 1, 2)
			create bary.make_filled (0.0, 1, 2)

		    px[1] := xmin
		    py[1] := y25
		    px[2] := xmin
		    py[2] := y75
		    px[3] := xmax
		    py[3] := y75
		    px[4] := xmax
		    py[4] := y25
		    px[5] := xmin
		    py[5] := y25

		    c_plpsty( 0 )
		    plfill(px, py )
		    c_plcol0( 1 )
		    c_pllsty( 1 )
		    plline(px, py )

		       -- median
		    mx[1] := xmin
		    my[1] := y50
		    mx[2] := xmax
		    my[2] := y50

		    c_pllsty( 1 )
		    plline(mx, my )


			 -- lower whisker
		    xmid   := ( xmin + xmax ) / 2.0
		    xwidth := xmax - xmin
		    wx[1]  := xmid
		    wy[1]  := lw
		    wx[2]  := xmid
		    wy[2]  := y25

		    c_pllsty( 2 ) -- short dashes and gaps
		    plline( wx, wy )

		    barx[1] := xmid - xwidth / 4.0
		    bary[1] := lw
		    barx[2] := xmid + xwidth / 4.0
		    bary[2] := lw

		    c_pllsty( 1 )
		    plline(  barx, bary )

		     -- upper whisker

		    xmid   := ( xmin + xmax ) / 2.0
		    xwidth := xmax - xmin
		    wy[1]  := y75
		    wy[2]  := uw

		    c_pllsty( 2 )  -- short dashes and gaps
		    plline( wx, wy )

		    bary[1] := uw
		    bary[2] := uw

		    c_pllsty( 1 )
		    plline( barx, bary )


		end







end
