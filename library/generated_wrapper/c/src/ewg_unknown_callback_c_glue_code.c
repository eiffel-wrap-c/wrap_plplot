#include <ewg_eiffel.h>
#include <ewg_unknown_callback_c_glue_code.h>

#ifdef _MSC_VER
#pragma warning (disable:4715) // Not all control paths return a value
#endif
struct core_crt_secure_search_sort_compare_function_entry_struct core_crt_secure_search_sort_compare_function_entry = {NULL, NULL};

int core_crt_secure_search_sort_compare_function_stub (void *anonymous_1, void const *anonymous_2, void const *anonymous_3)
{
	if (core_crt_secure_search_sort_compare_function_entry.a_class != NULL && core_crt_secure_search_sort_compare_function_entry.feature != NULL)
	{
		return core_crt_secure_search_sort_compare_function_entry.feature (eif_access(core_crt_secure_search_sort_compare_function_entry.a_class), anonymous_1, anonymous_2, anonymous_3);
	}
}

void set_core_crt_secure_search_sort_compare_function_entry (void* a_class, void* a_feature)
{
	core_crt_secure_search_sort_compare_function_entry.a_class = eif_adopt(a_class);
	core_crt_secure_search_sort_compare_function_entry.feature = (core_crt_secure_search_sort_compare_function_eiffel_feature) a_feature;
}

void* get_core_crt_secure_search_sort_compare_function_stub ()
{
	return (void*) core_crt_secure_search_sort_compare_function_stub;
}

int call_core_crt_secure_search_sort_compare_function (void *a_function, void *anonymous_1, void const *anonymous_2, void const *anonymous_3)
{
	return ((int (*) (void *anonymous_1, void const *anonymous_2, void const *anonymous_3))a_function) (anonymous_1, anonymous_2, anonymous_3);
}

struct core_crt_non_secure_search_sort_compare_function_entry_struct core_crt_non_secure_search_sort_compare_function_entry = {NULL, NULL};

int core_crt_non_secure_search_sort_compare_function_stub (void const *anonymous_1, void const *anonymous_2)
{
	if (core_crt_non_secure_search_sort_compare_function_entry.a_class != NULL && core_crt_non_secure_search_sort_compare_function_entry.feature != NULL)
	{
		return core_crt_non_secure_search_sort_compare_function_entry.feature (eif_access(core_crt_non_secure_search_sort_compare_function_entry.a_class), anonymous_1, anonymous_2);
	}
}

void set_core_crt_non_secure_search_sort_compare_function_entry (void* a_class, void* a_feature)
{
	core_crt_non_secure_search_sort_compare_function_entry.a_class = eif_adopt(a_class);
	core_crt_non_secure_search_sort_compare_function_entry.feature = (core_crt_non_secure_search_sort_compare_function_eiffel_feature) a_feature;
}

void* get_core_crt_non_secure_search_sort_compare_function_stub ()
{
	return (void*) core_crt_non_secure_search_sort_compare_function_stub;
}

int call_core_crt_non_secure_search_sort_compare_function (void *a_function, void const *anonymous_1, void const *anonymous_2)
{
	return ((int (*) (void const *anonymous_1, void const *anonymous_2))a_function) (anonymous_1, anonymous_2);
}

struct purecall_handler_entry_struct purecall_handler_entry = {NULL, NULL};

void purecall_handler_stub (void)
{
	if (purecall_handler_entry.a_class != NULL && purecall_handler_entry.feature != NULL)
	{
		purecall_handler_entry.feature (eif_access(purecall_handler_entry.a_class));
	}
}

void set_purecall_handler_entry (void* a_class, void* a_feature)
{
	purecall_handler_entry.a_class = eif_adopt(a_class);
	purecall_handler_entry.feature = (purecall_handler_eiffel_feature) a_feature;
}

void* get_purecall_handler_stub ()
{
	return (void*) purecall_handler_stub;
}

void call_purecall_handler (void *a_function)
{
	((void (*) (void))a_function) ();
}

struct onexit_t_entry_struct onexit_t_entry = {NULL, NULL};

int onexit_t_stub (void)
{
	if (onexit_t_entry.a_class != NULL && onexit_t_entry.feature != NULL)
	{
		return onexit_t_entry.feature (eif_access(onexit_t_entry.a_class));
	}
}

void set_onexit_t_entry (void* a_class, void* a_feature)
{
	onexit_t_entry.a_class = eif_adopt(a_class);
	onexit_t_entry.feature = (onexit_t_eiffel_feature) a_feature;
}

void* get_onexit_t_stub ()
{
	return (void*) onexit_t_stub;
}

int call_onexit_t (void *a_function)
{
	return ((int (*) (void))a_function) ();
}

struct invalid_parameter_handler_entry_struct invalid_parameter_handler_entry = {NULL, NULL};

void invalid_parameter_handler_stub (wchar_t const *anonymous_1, wchar_t const *anonymous_2, wchar_t const *anonymous_3, unsigned int anonymous_4, uintptr_t anonymous_5)
{
	if (invalid_parameter_handler_entry.a_class != NULL && invalid_parameter_handler_entry.feature != NULL)
	{
		invalid_parameter_handler_entry.feature (eif_access(invalid_parameter_handler_entry.a_class), anonymous_1, anonymous_2, anonymous_3, anonymous_4, anonymous_5);
	}
}

void set_invalid_parameter_handler_entry (void* a_class, void* a_feature)
{
	invalid_parameter_handler_entry.a_class = eif_adopt(a_class);
	invalid_parameter_handler_entry.feature = (invalid_parameter_handler_eiffel_feature) a_feature;
}

void* get_invalid_parameter_handler_stub ()
{
	return (void*) invalid_parameter_handler_stub;
}

void call_invalid_parameter_handler (void *a_function, wchar_t const *anonymous_1, wchar_t const *anonymous_2, wchar_t const *anonymous_3, unsigned int anonymous_4, uintptr_t anonymous_5)
{
	((void (*) (wchar_t const *anonymous_1, wchar_t const *anonymous_2, wchar_t const *anonymous_3, unsigned int anonymous_4, uintptr_t anonymous_5))a_function) (anonymous_1, anonymous_2, anonymous_3, anonymous_4, anonymous_5);
}

struct pltransform_callback_entry_struct pltransform_callback_entry = {NULL, NULL};

void pltransform_callback_stub (PLFLT x, PLFLT y, PLFLT_NC_SCALAR xp, PLFLT_NC_SCALAR yp, PLPointer data)
{
	if (pltransform_callback_entry.a_class != NULL && pltransform_callback_entry.feature != NULL)
	{
		pltransform_callback_entry.feature (eif_access(pltransform_callback_entry.a_class), x, y, xp, yp, data);
	}
}

void set_pltransform_callback_entry (void* a_class, void* a_feature)
{
	pltransform_callback_entry.a_class = eif_adopt(a_class);
	pltransform_callback_entry.feature = (pltransform_callback_eiffel_feature) a_feature;
}

void* get_pltransform_callback_stub ()
{
	return (void*) pltransform_callback_stub;
}

void call_pltransform_callback (void *a_function, PLFLT x, PLFLT y, PLFLT_NC_SCALAR xp, PLFLT_NC_SCALAR yp, PLPointer data)
{
	((void (*) (PLFLT x, PLFLT y, PLFLT_NC_SCALAR xp, PLFLT_NC_SCALAR yp, PLPointer data))a_function) (x, y, xp, yp, data);
}

struct plf2eval_callback_entry_struct plf2eval_callback_entry = {NULL, NULL};

PLFLT plf2eval_callback_stub (PLINT ix, PLINT iy, PLPointer data)
{
	if (plf2eval_callback_entry.a_class != NULL && plf2eval_callback_entry.feature != NULL)
	{
		return plf2eval_callback_entry.feature (eif_access(plf2eval_callback_entry.a_class), ix, iy, data);
	}
}

void set_plf2eval_callback_entry (void* a_class, void* a_feature)
{
	plf2eval_callback_entry.a_class = eif_adopt(a_class);
	plf2eval_callback_entry.feature = (plf2eval_callback_eiffel_feature) a_feature;
}

void* get_plf2eval_callback_stub ()
{
	return (void*) plf2eval_callback_stub;
}

PLFLT call_plf2eval_callback (void *a_function, PLINT ix, PLINT iy, PLPointer data)
{
	return ((PLFLT (*) (PLINT ix, PLINT iy, PLPointer data))a_function) (ix, iy, data);
}

struct plmapform_callback_entry_struct plmapform_callback_entry = {NULL, NULL};

void plmapform_callback_stub (PLINT n, PLFLT_NC_VECTOR x, PLFLT_NC_VECTOR y)
{
	if (plmapform_callback_entry.a_class != NULL && plmapform_callback_entry.feature != NULL)
	{
		plmapform_callback_entry.feature (eif_access(plmapform_callback_entry.a_class), n, x, y);
	}
}

void set_plmapform_callback_entry (void* a_class, void* a_feature)
{
	plmapform_callback_entry.a_class = eif_adopt(a_class);
	plmapform_callback_entry.feature = (plmapform_callback_eiffel_feature) a_feature;
}

void* get_plmapform_callback_stub ()
{
	return (void*) plmapform_callback_stub;
}

void call_plmapform_callback (void *a_function, PLINT n, PLFLT_NC_VECTOR x, PLFLT_NC_VECTOR y)
{
	((void (*) (PLINT n, PLFLT_NC_VECTOR x, PLFLT_NC_VECTOR y))a_function) (n, x, y);
}

struct pldefined_callback_entry_struct pldefined_callback_entry = {NULL, NULL};

PLINT pldefined_callback_stub (PLFLT x, PLFLT y)
{
	if (pldefined_callback_entry.a_class != NULL && pldefined_callback_entry.feature != NULL)
	{
		return pldefined_callback_entry.feature (eif_access(pldefined_callback_entry.a_class), x, y);
	}
}

void set_pldefined_callback_entry (void* a_class, void* a_feature)
{
	pldefined_callback_entry.a_class = eif_adopt(a_class);
	pldefined_callback_entry.feature = (pldefined_callback_eiffel_feature) a_feature;
}

void* get_pldefined_callback_stub ()
{
	return (void*) pldefined_callback_stub;
}

PLINT call_pldefined_callback (void *a_function, PLFLT x, PLFLT y)
{
	return ((PLINT (*) (PLFLT x, PLFLT y))a_function) (x, y);
}

struct plfill_callback_entry_struct plfill_callback_entry = {NULL, NULL};

void plfill_callback_stub (PLINT n, PLFLT_VECTOR x, PLFLT_VECTOR y)
{
	if (plfill_callback_entry.a_class != NULL && plfill_callback_entry.feature != NULL)
	{
		plfill_callback_entry.feature (eif_access(plfill_callback_entry.a_class), n, x, y);
	}
}

void set_plfill_callback_entry (void* a_class, void* a_feature)
{
	plfill_callback_entry.a_class = eif_adopt(a_class);
	plfill_callback_entry.feature = (plfill_callback_eiffel_feature) a_feature;
}

void* get_plfill_callback_stub ()
{
	return (void*) plfill_callback_stub;
}

void call_plfill_callback (void *a_function, PLINT n, PLFLT_VECTOR x, PLFLT_VECTOR y)
{
	((void (*) (PLINT n, PLFLT_VECTOR x, PLFLT_VECTOR y))a_function) (n, x, y);
}

struct pllabel_func_callback_entry_struct pllabel_func_callback_entry = {NULL, NULL};

void pllabel_func_callback_stub (PLINT axis, PLFLT value, PLCHAR_NC_VECTOR label, PLINT length, PLPointer data)
{
	if (pllabel_func_callback_entry.a_class != NULL && pllabel_func_callback_entry.feature != NULL)
	{
		pllabel_func_callback_entry.feature (eif_access(pllabel_func_callback_entry.a_class), axis, value, label, length, data);
	}
}

void set_pllabel_func_callback_entry (void* a_class, void* a_feature)
{
	pllabel_func_callback_entry.a_class = eif_adopt(a_class);
	pllabel_func_callback_entry.feature = (pllabel_func_callback_eiffel_feature) a_feature;
}

void* get_pllabel_func_callback_stub ()
{
	return (void*) pllabel_func_callback_stub;
}

void call_pllabel_func_callback (void *a_function, PLINT axis, PLFLT value, PLCHAR_NC_VECTOR label, PLINT length, PLPointer data)
{
	((void (*) (PLINT axis, PLFLT value, PLCHAR_NC_VECTOR label, PLINT length, PLPointer data))a_function) (axis, value, label, length, data);
}

struct void_plgraphicsinp_plpointer_intp_anonymous_callback_entry_struct void_plgraphicsinp_plpointer_intp_anonymous_callback_entry = {NULL, NULL};

void void_plgraphicsinp_plpointer_intp_anonymous_callback_stub (PLGraphicsIn *anonymous_1, PLPointer anonymous_2, int *anonymous_3)
{
	if (void_plgraphicsinp_plpointer_intp_anonymous_callback_entry.a_class != NULL && void_plgraphicsinp_plpointer_intp_anonymous_callback_entry.feature != NULL)
	{
		void_plgraphicsinp_plpointer_intp_anonymous_callback_entry.feature (eif_access(void_plgraphicsinp_plpointer_intp_anonymous_callback_entry.a_class), anonymous_1, anonymous_2, anonymous_3);
	}
}

void set_void_plgraphicsinp_plpointer_intp_anonymous_callback_entry (void* a_class, void* a_feature)
{
	void_plgraphicsinp_plpointer_intp_anonymous_callback_entry.a_class = eif_adopt(a_class);
	void_plgraphicsinp_plpointer_intp_anonymous_callback_entry.feature = (void_plgraphicsinp_plpointer_intp_anonymous_callback_eiffel_feature) a_feature;
}

void* get_void_plgraphicsinp_plpointer_intp_anonymous_callback_stub ()
{
	return (void*) void_plgraphicsinp_plpointer_intp_anonymous_callback_stub;
}

void call_void_plgraphicsinp_plpointer_intp_anonymous_callback (void *a_function, PLGraphicsIn *anonymous_1, PLPointer anonymous_2, int *anonymous_3)
{
	((void (*) (PLGraphicsIn *anonymous_1, PLPointer anonymous_2, int *anonymous_3))a_function) (anonymous_1, anonymous_2, anonymous_3);
}

struct void_plpointer_intp_anonymous_callback_entry_struct void_plpointer_intp_anonymous_callback_entry = {NULL, NULL};

void void_plpointer_intp_anonymous_callback_stub (PLPointer anonymous_1, int *anonymous_2)
{
	if (void_plpointer_intp_anonymous_callback_entry.a_class != NULL && void_plpointer_intp_anonymous_callback_entry.feature != NULL)
	{
		void_plpointer_intp_anonymous_callback_entry.feature (eif_access(void_plpointer_intp_anonymous_callback_entry.a_class), anonymous_1, anonymous_2);
	}
}

void set_void_plpointer_intp_anonymous_callback_entry (void* a_class, void* a_feature)
{
	void_plpointer_intp_anonymous_callback_entry.a_class = eif_adopt(a_class);
	void_plpointer_intp_anonymous_callback_entry.feature = (void_plpointer_intp_anonymous_callback_eiffel_feature) a_feature;
}

void* get_void_plpointer_intp_anonymous_callback_stub ()
{
	return (void*) void_plpointer_intp_anonymous_callback_stub;
}

void call_void_plpointer_intp_anonymous_callback (void *a_function, PLPointer anonymous_1, int *anonymous_2)
{
	((void (*) (PLPointer anonymous_1, int *anonymous_2))a_function) (anonymous_1, anonymous_2);
}

struct int_plchar_vector_anonymous_callback_entry_struct int_plchar_vector_anonymous_callback_entry = {NULL, NULL};

int int_plchar_vector_anonymous_callback_stub (PLCHAR_VECTOR anonymous_1)
{
	if (int_plchar_vector_anonymous_callback_entry.a_class != NULL && int_plchar_vector_anonymous_callback_entry.feature != NULL)
	{
		return int_plchar_vector_anonymous_callback_entry.feature (eif_access(int_plchar_vector_anonymous_callback_entry.a_class), anonymous_1);
	}
}

void set_int_plchar_vector_anonymous_callback_entry (void* a_class, void* a_feature)
{
	int_plchar_vector_anonymous_callback_entry.a_class = eif_adopt(a_class);
	int_plchar_vector_anonymous_callback_entry.feature = (int_plchar_vector_anonymous_callback_eiffel_feature) a_feature;
}

void* get_int_plchar_vector_anonymous_callback_stub ()
{
	return (void*) int_plchar_vector_anonymous_callback_stub;
}

int call_int_plchar_vector_anonymous_callback (void *a_function, PLCHAR_VECTOR anonymous_1)
{
	return ((int (*) (PLCHAR_VECTOR anonymous_1))a_function) (anonymous_1);
}

struct void_plchar_vector_anonymous_callback_entry_struct void_plchar_vector_anonymous_callback_entry = {NULL, NULL};

void void_plchar_vector_anonymous_callback_stub (PLCHAR_VECTOR anonymous_1)
{
	if (void_plchar_vector_anonymous_callback_entry.a_class != NULL && void_plchar_vector_anonymous_callback_entry.feature != NULL)
	{
		void_plchar_vector_anonymous_callback_entry.feature (eif_access(void_plchar_vector_anonymous_callback_entry.a_class), anonymous_1);
	}
}

void set_void_plchar_vector_anonymous_callback_entry (void* a_class, void* a_feature)
{
	void_plchar_vector_anonymous_callback_entry.a_class = eif_adopt(a_class);
	void_plchar_vector_anonymous_callback_entry.feature = (void_plchar_vector_anonymous_callback_eiffel_feature) a_feature;
}

void* get_void_plchar_vector_anonymous_callback_stub ()
{
	return (void*) void_plchar_vector_anonymous_callback_stub;
}

void call_void_plchar_vector_anonymous_callback (void *a_function, PLCHAR_VECTOR anonymous_1)
{
	((void (*) (PLCHAR_VECTOR anonymous_1))a_function) (anonymous_1);
}

struct int_plchar_vector_plchar_vector_plpointer_anonymous_callback_entry_struct int_plchar_vector_plchar_vector_plpointer_anonymous_callback_entry = {NULL, NULL};

int int_plchar_vector_plchar_vector_plpointer_anonymous_callback_stub (PLCHAR_VECTOR anonymous_1, PLCHAR_VECTOR anonymous_2, PLPointer anonymous_3)
{
	if (int_plchar_vector_plchar_vector_plpointer_anonymous_callback_entry.a_class != NULL && int_plchar_vector_plchar_vector_plpointer_anonymous_callback_entry.feature != NULL)
	{
		return int_plchar_vector_plchar_vector_plpointer_anonymous_callback_entry.feature (eif_access(int_plchar_vector_plchar_vector_plpointer_anonymous_callback_entry.a_class), anonymous_1, anonymous_2, anonymous_3);
	}
}

void set_int_plchar_vector_plchar_vector_plpointer_anonymous_callback_entry (void* a_class, void* a_feature)
{
	int_plchar_vector_plchar_vector_plpointer_anonymous_callback_entry.a_class = eif_adopt(a_class);
	int_plchar_vector_plchar_vector_plpointer_anonymous_callback_entry.feature = (int_plchar_vector_plchar_vector_plpointer_anonymous_callback_eiffel_feature) a_feature;
}

void* get_int_plchar_vector_plchar_vector_plpointer_anonymous_callback_stub ()
{
	return (void*) int_plchar_vector_plchar_vector_plpointer_anonymous_callback_stub;
}

int call_int_plchar_vector_plchar_vector_plpointer_anonymous_callback (void *a_function, PLCHAR_VECTOR anonymous_1, PLCHAR_VECTOR anonymous_2, PLPointer anonymous_3)
{
	return ((int (*) (PLCHAR_VECTOR anonymous_1, PLCHAR_VECTOR anonymous_2, PLPointer anonymous_3))a_function) (anonymous_1, anonymous_2, anonymous_3);
}

struct plflt_plpointer_plint_plint_anonymous_callback_entry_struct plflt_plpointer_plint_plint_anonymous_callback_entry = {NULL, NULL};

PLFLT plflt_plpointer_plint_plint_anonymous_callback_stub (PLPointer p, PLINT ix, PLINT iy)
{
	if (plflt_plpointer_plint_plint_anonymous_callback_entry.a_class != NULL && plflt_plpointer_plint_plint_anonymous_callback_entry.feature != NULL)
	{
		return plflt_plpointer_plint_plint_anonymous_callback_entry.feature (eif_access(plflt_plpointer_plint_plint_anonymous_callback_entry.a_class), p, ix, iy);
	}
}

void set_plflt_plpointer_plint_plint_anonymous_callback_entry (void* a_class, void* a_feature)
{
	plflt_plpointer_plint_plint_anonymous_callback_entry.a_class = eif_adopt(a_class);
	plflt_plpointer_plint_plint_anonymous_callback_entry.feature = (plflt_plpointer_plint_plint_anonymous_callback_eiffel_feature) a_feature;
}

void* get_plflt_plpointer_plint_plint_anonymous_callback_stub ()
{
	return (void*) plflt_plpointer_plint_plint_anonymous_callback_stub;
}

PLFLT call_plflt_plpointer_plint_plint_anonymous_callback (void *a_function, PLPointer p, PLINT ix, PLINT iy)
{
	return ((PLFLT (*) (PLPointer p, PLINT ix, PLINT iy))a_function) (p, ix, iy);
}

struct plflt_plpointer_plint_plint_plflt_anonymous_callback_entry_struct plflt_plpointer_plint_plint_plflt_anonymous_callback_entry = {NULL, NULL};

PLFLT plflt_plpointer_plint_plint_plflt_anonymous_callback_stub (PLPointer p, PLINT ix, PLINT iy, PLFLT z)
{
	if (plflt_plpointer_plint_plint_plflt_anonymous_callback_entry.a_class != NULL && plflt_plpointer_plint_plint_plflt_anonymous_callback_entry.feature != NULL)
	{
		return plflt_plpointer_plint_plint_plflt_anonymous_callback_entry.feature (eif_access(plflt_plpointer_plint_plint_plflt_anonymous_callback_entry.a_class), p, ix, iy, z);
	}
}

void set_plflt_plpointer_plint_plint_plflt_anonymous_callback_entry (void* a_class, void* a_feature)
{
	plflt_plpointer_plint_plint_plflt_anonymous_callback_entry.a_class = eif_adopt(a_class);
	plflt_plpointer_plint_plint_plflt_anonymous_callback_entry.feature = (plflt_plpointer_plint_plint_plflt_anonymous_callback_eiffel_feature) a_feature;
}

void* get_plflt_plpointer_plint_plint_plflt_anonymous_callback_stub ()
{
	return (void*) plflt_plpointer_plint_plint_plflt_anonymous_callback_stub;
}

PLFLT call_plflt_plpointer_plint_plint_plflt_anonymous_callback (void *a_function, PLPointer p, PLINT ix, PLINT iy, PLFLT z)
{
	return ((PLFLT (*) (PLPointer p, PLINT ix, PLINT iy, PLFLT z))a_function) (p, ix, iy, z);
}

struct plint_plpointer_plint_plint_anonymous_callback_entry_struct plint_plpointer_plint_plint_anonymous_callback_entry = {NULL, NULL};

PLINT plint_plpointer_plint_plint_anonymous_callback_stub (PLPointer p, PLINT ix, PLINT iy)
{
	if (plint_plpointer_plint_plint_anonymous_callback_entry.a_class != NULL && plint_plpointer_plint_plint_anonymous_callback_entry.feature != NULL)
	{
		return plint_plpointer_plint_plint_anonymous_callback_entry.feature (eif_access(plint_plpointer_plint_plint_anonymous_callback_entry.a_class), p, ix, iy);
	}
}

void set_plint_plpointer_plint_plint_anonymous_callback_entry (void* a_class, void* a_feature)
{
	plint_plpointer_plint_plint_anonymous_callback_entry.a_class = eif_adopt(a_class);
	plint_plpointer_plint_plint_anonymous_callback_entry.feature = (plint_plpointer_plint_plint_anonymous_callback_eiffel_feature) a_feature;
}

void* get_plint_plpointer_plint_plint_anonymous_callback_stub ()
{
	return (void*) plint_plpointer_plint_plint_anonymous_callback_stub;
}

PLINT call_plint_plpointer_plint_plint_anonymous_callback (void *a_function, PLPointer p, PLINT ix, PLINT iy)
{
	return ((PLINT (*) (PLPointer p, PLINT ix, PLINT iy))a_function) (p, ix, iy);
}

struct void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_entry_struct void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_entry = {NULL, NULL};

void void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_stub (PLPointer p, PLINT nx, PLINT ny, PLFLT_NC_SCALAR zmin, PLFLT_NC_SCALAR zmax)
{
	if (void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_entry.a_class != NULL && void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_entry.feature != NULL)
	{
		void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_entry.feature (eif_access(void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_entry.a_class), p, nx, ny, zmin, zmax);
	}
}

void set_void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_entry (void* a_class, void* a_feature)
{
	void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_entry.a_class = eif_adopt(a_class);
	void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_entry.feature = (void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_eiffel_feature) a_feature;
}

void* get_void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_stub ()
{
	return (void*) void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_stub;
}

void call_void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback (void *a_function, PLPointer p, PLINT nx, PLINT ny, PLFLT_NC_SCALAR zmin, PLFLT_NC_SCALAR zmax)
{
	((void (*) (PLPointer p, PLINT nx, PLINT ny, PLFLT_NC_SCALAR zmin, PLFLT_NC_SCALAR zmax))a_function) (p, nx, ny, zmin, zmax);
}

struct plflt_plint_plint_plpointer_anonymous_callback_entry_struct plflt_plint_plint_plpointer_anonymous_callback_entry = {NULL, NULL};

PLFLT plflt_plint_plint_plpointer_anonymous_callback_stub (PLINT ix, PLINT iy, PLPointer p)
{
	if (plflt_plint_plint_plpointer_anonymous_callback_entry.a_class != NULL && plflt_plint_plint_plpointer_anonymous_callback_entry.feature != NULL)
	{
		return plflt_plint_plint_plpointer_anonymous_callback_entry.feature (eif_access(plflt_plint_plint_plpointer_anonymous_callback_entry.a_class), ix, iy, p);
	}
}

void set_plflt_plint_plint_plpointer_anonymous_callback_entry (void* a_class, void* a_feature)
{
	plflt_plint_plint_plpointer_anonymous_callback_entry.a_class = eif_adopt(a_class);
	plflt_plint_plint_plpointer_anonymous_callback_entry.feature = (plflt_plint_plint_plpointer_anonymous_callback_eiffel_feature) a_feature;
}

void* get_plflt_plint_plint_plpointer_anonymous_callback_stub ()
{
	return (void*) plflt_plint_plint_plpointer_anonymous_callback_stub;
}

PLFLT call_plflt_plint_plint_plpointer_anonymous_callback (void *a_function, PLINT ix, PLINT iy, PLPointer p)
{
	return ((PLFLT (*) (PLINT ix, PLINT iy, PLPointer p))a_function) (ix, iy, p);
}

