note
	description: "[
		Grid data demo.
	]"
	date: "$Date$"
	revision: "$Revision$"
	eis: "name=example_22", "src=http://plplot.sourceforge.net/examples.php?demo=21&lbind=C", "protocol=uri"

class
	EXAMPLE_22

inherit

	PLPLOT_API

create
	make

feature {NONE} --Initialization

	make
		do


			initialize
		end


	cmap1_init
		local
			i,h,l,s: ARRAY [REAL_64]
		do
			i := {ARRAY [REAL_64]}<<0.0, 1.0>> -- left and right boundary
			h := {ARRAY [REAL_64]}<<240, 0>>   -- blue -> green -> yellow -> and red
			l := {ARRAY [REAL_64]}<<0.6, 0.6>>
			s := {ARRAY [REAL_64]}<<0.8, 0.8>>
			c_plscmap1n (256)
			c_c_plscmap1l (0, 2, i.area.base_address, h.area.base_address, l.area.base_address, s.area.base_address, default_pointer)
		end


feature -- Options data structure definition.

	pts: INTEGER       = 500
	xp: INTEGER        = 25
	yp: INTEGER        = 20
	nl: INTEGER		   = 16
	knn_order: INTEGER = 20
	threshold: REAL_64 = 1.001
	wmin: REAL_64	= -1000.0
	randn: INTEGER     = 0
	rosen: INTEGER     = 0


end
