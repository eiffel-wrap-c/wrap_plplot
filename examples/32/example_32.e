note
	description: "Diagnostic demo to exercise all our set/get functions. The result should be a properly-formatted empty plot with black background."
	date: "$Date$"
	revision: "$Revision$"
	eis: "name=example 32", "src=http://plplot.sourceforge.net/examples.php?demo=31&lbind=C", "protocol=uri"

class
	EXAMPLE_32

inherit

	PLPLOT_API

create
	make

feature --Initialization

	make
		local
			xmin0, xmax0, ymin0, ymax0, zxmin0, zxmax0, zymin0, zymax0: REAL_64
			xmin, xmax, ymin, ymax, zxmin, zxmax, zymin, zymax: REAL_64
			xmid, ymid, wx, wy: REAL_64
			mar0, aspect0, jx0, jy0, ori0: REAL_64
			mar, aspect, jx, jy, ori: REAL_64
			fam0, num0, bmax0: INTEGER
			fam1, num1, bmax1: INTEGER
			fam2, num2, bmax2: INTEGER
			xp0, yp0: REAL_64
			xleng0, yleng0, xoff0, yoff0: INTEGER
			xp1, yp1: REAL_64
			xleng1, yleng1, xoff1, yoff1: INTEGER
			xp2, yp2: REAL_64
			xleng2, yleng2, xoff2, yoff2: INTEGER
			win, level2, digmax, digits, compression1, compression2: INTEGER
			r0, g0, b0: INTEGER
			a0: REAL_64
			r, g, b: INTEGER
			a: REAL_64
			r1: ARRAY [INTEGER]
			g1: ARRAY [INTEGER]
			b1: ARRAY [INTEGER]
			a1: ARRAY [REAL_64]
			fnam: STRING -- 256

		do
				-- / Test setting / getting familying parameters before plinit
			c_plgfam ($fam0, $num0, $bmax0)
			fam1 := 0
			num1 := 10
			bmax1 := 1000
			c_plsfam (fam1, num1, bmax1)

				-- Retrieve the same values?
			c_plgfam ($fam2, $num2, $bmax2)
			print ("%Nfamily parameters: fam, num, bmax = " + fam2.out + " " + num2.out + " " + bmax2.out)
			if fam2 /= fam1 or num2 /= num1 or bmax2 /= bmax1 then
				print ("%N plgfam test failed")
			end
				-- Restore values set initially by plparseopts.
			c_plsfam (fam0, num0, bmax0)

				-- Test setting / getting page parameters before plinit
				-- Save values set by plparseopts to be restored later.
			c_plgpage ($xp0, $yp0, $xleng0, $yleng0, $xoff0, $yoff0)
			xp1 := 200.0
			yp1 := 200.0
			xleng1 := 400
			yleng1 := 200
			xoff1 := 10
			yoff1 := 20
			c_plspage (xp1, yp1, xleng1, yleng1, xoff1, yoff1)

				--Retrieve the same values?
			c_plgpage ($xp2, $yp2, $xleng2, $yleng2, $xoff2, $yoff2)
			print ("%NPage parameters xp, yp, xleng, yleng, xoff, yoff = " + xp2.out + " " + yp2.out + " " + xleng2.out + " " + yleng2.out + " " + xoff2.out + " " + yoff2.out)
			if xp2 /= xp1 or yp2 /= yp1 or xleng2 /= xleng1 or yleng2 /= yleng1 or xoff2 /= xoff1 or yoff2 /= yoff1 then
				print ("%Nplgpage test failed")
			end
				-- Restore values set initially by plparseopts.
			c_plspage (xp0, yp0, xleng0, yleng0, xoff0, yoff0)

				-- Test setting / getting compression parameter across plinit.
			compression1 := 95
			c_plscompression (compression1)

				-- Initialize plplot
			initialize

				-- Test if device initialization screwed around with the preset
				-- compression parameter.
			c_plgcompression ($compression2)
			print ("%NOutput various PLplot parameters")
			print ("%Ncompression parameter = " + compression2.out)
			if compression2 /= compression1 then
				print ("%Nplgcompression test failed")
			end

				-- Exercise plscolor, plscol0, plscmap1, and plscmap1a to make sure
				-- they work without any obvious error messages.
			r1 := <<0, 255>>
			g1 := <<255, 0>>
			b1 := <<0, 0>>
			a1 := <<1.0, 1.0>>
			c_plscolor (1)
			c_plscol0 (1, 255, 0, 0)
			plscmap1 (r1, g1, b1)
			plscmap1a (r1, g1, b1, a1)
			c_plglevel ($level2)
			print ("%NLevel parameter = " + level2.out)
			if level2 /= 1 then
				print ("%Nplglevel test failed")
			end
			c_pladv (0)
			xmin0 := 0.01
			xmax0 := 0.99
			ymin0 := 0.02
			ymax0 := 0.49
			c_plvpor (xmin0, xmax0, ymin0, ymax0);
			c_plgvpd ($xmin, $xmax, $ymin, $ymax);
			print ("%Nplvpor: xmin, xmax, ymin, ymax = " + xmin.out + " " + xmax.out + " " + ymin.out + " " + ymax.out)
			if xmin /= xmin0 or xmax /= xmax0 or ymin /= ymin0 or ymax /= ymax0 then
				print ("%Nplgvpd test failed\n")
			end
			xmid := 0.5 * (xmin + xmax)
			ymid := 0.5 * (ymin + ymax)
			xmin0 := 0.2
			xmax0 := 0.3
			ymin0 := 0.4
			ymax0 := 0.5
			c_plwind (xmin0, xmax0, ymin0, ymax0)
			c_plgvpw ($xmin, $xmax, $ymin, $ymax)
			print ("%Nplwind: xmin, xmax, ymin, ymax = " + xmin.out + " " + xmax.out + " " + ymin.out + " " + ymax.out)
			if xmin /= xmin0 or xmax /= xmax0 or ymin /= ymin0 or ymax /= ymax0 then
				print ("%Nplgvpw test failed")
			end

				--Get world coordinates for middle of viewport
			c_plcalc_world (xmid, ymid, $wx, $wy, $win)
			print ("%Nworld parameters: wx, wy, win = " + wx.out + " " + wy.out + " " + win.out)
			if {DOUBLE_MATH}.dabs (wx - 0.5 * (xmin + xmax)) > 1.0E-5 or {DOUBLE_MATH}.dabs (wy - 0.5 * (ymin + ymax)) > 1.0E-5 then
				print ("%Nplcalc_world test failed")
			end

				-- Retrieve and print the name of the output file (if any).
				-- This goes to stderr not stdout since it will vary between tests and
				-- we want stdout to be identical for compare test.

			create fnam.make (256)
			plgfnam (fnam)
			if  fnam.is_empty then
				print( "%NNo output file name is set" );
			else
				print( "%NOutput file name read:" + fnam );
			end


			-- Set and get the number of digits used to display axis labels
	    	-- Note digits is currently ignored in pls[xyz]ax and
	    	-- therefore it does not make sense to test the returned
	    	-- value
    		c_plsxax( 3, 0 )
    		c_plgxax( $digmax, $digits )
   			print( "%Nx axis parameters: digmax, digits = " + digmax.out + " " + digits.out )
		    if digmax /= 3 then
		        print( "%Nplgxax test failed\n")
		 	end

			c_plsyax( 4, 0 )
		    c_plgyax( $digmax, $digits )
		    print( "%Ny axis parameters: digmax, digits = " + digmax.out + " " + digits.out )
		    if  digmax /= 4 then
		        print( "%Nplgyax test failed\")
		 	end

	   		c_plszax( 5, 0 )
    		c_plgzax( $digmax, $digits )
    		print( "%Nz axis parameters: digmax, digits = " + digmax.out + " " + digits.out );
  			if  digmax /= 5 then
  		      print( "%Nplgzax test failed")
       		end

		  	mar0    := 0.05
		    aspect0 := {PLPLOT_CONSTANTS}.PL_NOTSET
		    jx0     := 0.1
		    jy0     := 0.2
		    c_plsdidev( mar0, aspect0, jx0, jy0 )
		    c_plgdidev( $mar, $aspect, $jx, $jy )
		    print( "%Ndevice-space window parameters: mar, aspect, jx, jy = " + mar.out + " "+ aspect.out + " " + jx.out + " " + jy.out )
		    if  mar /= mar0 or jx /= jx0 or jy /= jy0 then
		        print ( "%Nplgdidev test failed")
			end

			ori0 := 1.0
		    c_plsdiori( ori0 )
		    c_plgdiori( $ori )
		    print( "%Nori parameter = " + ori.out )
		    if  ori /= ori0 then
		        print( "%Nplgdiori test failed")
			end

		    xmin0 := 0.1
		    ymin0 := 0.2
		    xmax0 := 0.9
		    ymax0 := 0.8
		    c_plsdiplt( xmin0, ymin0, xmax0, ymax0 )
		    c_plgdiplt( $xmin, $ymin, $xmax, $ymax )
		    print( "%Nplot-space window parameters: xmin, ymin, xmax, ymax = " + xmin.out + " " + ymin.out + " " + xmax.out + " " + ymax.out )
		    if  xmin /= xmin0 or ymin /= ymin0 or xmax /= xmax0 or ymax /= ymax0  then
		        print( "%Nplgdiplt test failed")
		   	end

			zxmin0 := 0.1
		    zymin0 := 0.1
		    zxmax0 := 0.9
		    zymax0 := 0.9
		    c_plsdiplz( zxmin0, zymin0, zxmax0, zymax0 )
		    c_plgdiplt( $zxmin, $zymin, $zxmax, $zymax )
		    print( "%Nzoomed plot-space window parameters: xmin, ymin, xmax, ymax = " + zxmin.out + " " + zymin.out + " " + zxmax.out + " " + zymax.out  )
		    if 	 {DOUBLE_MATH}.dabs ( zxmin - ( xmin + ( xmax - xmin ) * zxmin0 ) ) > 1.0E-5 or
		         {DOUBLE_MATH}.dabs ( zymin - ( ymin + ( ymax - ymin ) * zymin0 ) ) > 1.0E-5 or
		         {DOUBLE_MATH}.dabs ( zxmax - ( xmin + ( xmax - xmin ) * zxmax0 ) ) > 1.0E-5 or
		         {DOUBLE_MATH}.dabs ( zymax - ( ymin + ( ymax - ymin ) * zymax0 ) ) > 1.0E-5 then
		        print( "%Nplsdiplz test failed")
		    end

			r0 := 10
		    g0 := 20
		    b0 := 30
		    c_plscolbg( r0, g0, b0 )
		    c_plgcolbg( $r, $g, $b )
		    print ( "%Nbackground colour parameters: r, g, b = " + r.out + " " + g.out + " " + b.out )
		    if  r /= r0 or g /= g0 or b /= b0 then
		        print( "%Nplgcolbg test failed")
			end

		    r0 := 20
		    g0 := 30
		    b0 := 40
		    a0 := 0.5
		    c_plscolbga( r0, g0, b0, a0 )
		    c_plgcolbga( $r, $g, $b, $a )
		    print( "%Nbackground/transparency colour parameters: r, g, b, a = " + r.out + " " + g.out + " " + b.out + " " + a.out )
		    if  r /= r0 or g /= g0 or b /= b0 or a /= a0 then
		        print ( "%Nplgcolbga test failed")
		    end
			finalize
		end

end
