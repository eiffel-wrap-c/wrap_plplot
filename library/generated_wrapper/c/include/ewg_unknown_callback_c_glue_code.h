#ifndef EWG_CALLBACK_UNKNOWN___
#define EWG_CALLBACK_UNKNOWN___

#include <plplot.h>

typedef int (*core_crt_secure_search_sort_compare_function_eiffel_feature) (void *a_class, void *anonymous_1, void const *anonymous_2, void const *anonymous_3);

void* get_core_crt_secure_search_sort_compare_function_stub ();

struct core_crt_secure_search_sort_compare_function_entry_struct
{
	void* a_class;
	core_crt_secure_search_sort_compare_function_eiffel_feature feature;
};

void set_core_crt_secure_search_sort_compare_function_entry (void* a_class, void* a_feature);

int call_core_crt_secure_search_sort_compare_function (void *a_function, void *anonymous_1, void const *anonymous_2, void const *anonymous_3);


#include <plplot.h>

typedef int (*core_crt_non_secure_search_sort_compare_function_eiffel_feature) (void *a_class, void const *anonymous_1, void const *anonymous_2);

void* get_core_crt_non_secure_search_sort_compare_function_stub ();

struct core_crt_non_secure_search_sort_compare_function_entry_struct
{
	void* a_class;
	core_crt_non_secure_search_sort_compare_function_eiffel_feature feature;
};

void set_core_crt_non_secure_search_sort_compare_function_entry (void* a_class, void* a_feature);

int call_core_crt_non_secure_search_sort_compare_function (void *a_function, void const *anonymous_1, void const *anonymous_2);


#include <plplot.h>

typedef void (*purecall_handler_eiffel_feature) (void *a_class);

void* get_purecall_handler_stub ();

struct purecall_handler_entry_struct
{
	void* a_class;
	purecall_handler_eiffel_feature feature;
};

void set_purecall_handler_entry (void* a_class, void* a_feature);

void call_purecall_handler (void *a_function);


#include <plplot.h>

typedef int (*onexit_t_eiffel_feature) (void *a_class);

void* get_onexit_t_stub ();

struct onexit_t_entry_struct
{
	void* a_class;
	onexit_t_eiffel_feature feature;
};

void set_onexit_t_entry (void* a_class, void* a_feature);

int call_onexit_t (void *a_function);


#include <plplot.h>

typedef void (*invalid_parameter_handler_eiffel_feature) (void *a_class, wchar_t const *anonymous_1, wchar_t const *anonymous_2, wchar_t const *anonymous_3, unsigned int anonymous_4, uintptr_t anonymous_5);

void* get_invalid_parameter_handler_stub ();

struct invalid_parameter_handler_entry_struct
{
	void* a_class;
	invalid_parameter_handler_eiffel_feature feature;
};

void set_invalid_parameter_handler_entry (void* a_class, void* a_feature);

void call_invalid_parameter_handler (void *a_function, wchar_t const *anonymous_1, wchar_t const *anonymous_2, wchar_t const *anonymous_3, unsigned int anonymous_4, uintptr_t anonymous_5);


#include <plplot.h>

typedef void (*pltransform_callback_eiffel_feature) (void *a_class, PLFLT x, PLFLT y, PLFLT_NC_SCALAR xp, PLFLT_NC_SCALAR yp, PLPointer data);

void* get_pltransform_callback_stub ();

struct pltransform_callback_entry_struct
{
	void* a_class;
	pltransform_callback_eiffel_feature feature;
};

void set_pltransform_callback_entry (void* a_class, void* a_feature);

void call_pltransform_callback (void *a_function, PLFLT x, PLFLT y, PLFLT_NC_SCALAR xp, PLFLT_NC_SCALAR yp, PLPointer data);


#include <plplot.h>

typedef PLFLT (*plf2eval_callback_eiffel_feature) (void *a_class, PLINT ix, PLINT iy, PLPointer data);

void* get_plf2eval_callback_stub ();

struct plf2eval_callback_entry_struct
{
	void* a_class;
	plf2eval_callback_eiffel_feature feature;
};

void set_plf2eval_callback_entry (void* a_class, void* a_feature);

PLFLT call_plf2eval_callback (void *a_function, PLINT ix, PLINT iy, PLPointer data);


#include <plplot.h>

typedef void (*plmapform_callback_eiffel_feature) (void *a_class, PLINT n, PLFLT_NC_VECTOR x, PLFLT_NC_VECTOR y);

void* get_plmapform_callback_stub ();

struct plmapform_callback_entry_struct
{
	void* a_class;
	plmapform_callback_eiffel_feature feature;
};

void set_plmapform_callback_entry (void* a_class, void* a_feature);

void call_plmapform_callback (void *a_function, PLINT n, PLFLT_NC_VECTOR x, PLFLT_NC_VECTOR y);


#include <plplot.h>

typedef PLINT (*pldefined_callback_eiffel_feature) (void *a_class, PLFLT x, PLFLT y);

void* get_pldefined_callback_stub ();

struct pldefined_callback_entry_struct
{
	void* a_class;
	pldefined_callback_eiffel_feature feature;
};

void set_pldefined_callback_entry (void* a_class, void* a_feature);

PLINT call_pldefined_callback (void *a_function, PLFLT x, PLFLT y);


#include <plplot.h>

typedef void (*plfill_callback_eiffel_feature) (void *a_class, PLINT n, PLFLT_VECTOR x, PLFLT_VECTOR y);

void* get_plfill_callback_stub ();

struct plfill_callback_entry_struct
{
	void* a_class;
	plfill_callback_eiffel_feature feature;
};

void set_plfill_callback_entry (void* a_class, void* a_feature);

void call_plfill_callback (void *a_function, PLINT n, PLFLT_VECTOR x, PLFLT_VECTOR y);


#include <plplot.h>

typedef void (*pllabel_func_callback_eiffel_feature) (void *a_class, PLINT axis, PLFLT value, PLCHAR_NC_VECTOR label, PLINT length, PLPointer data);

void* get_pllabel_func_callback_stub ();

struct pllabel_func_callback_entry_struct
{
	void* a_class;
	pllabel_func_callback_eiffel_feature feature;
};

void set_pllabel_func_callback_entry (void* a_class, void* a_feature);

void call_pllabel_func_callback (void *a_function, PLINT axis, PLFLT value, PLCHAR_NC_VECTOR label, PLINT length, PLPointer data);


#include <plplot.h>

typedef void (*void_plgraphicsinp_plpointer_intp_anonymous_callback_eiffel_feature) (void *a_class, PLGraphicsIn *anonymous_1, PLPointer anonymous_2, int *anonymous_3);

void* get_void_plgraphicsinp_plpointer_intp_anonymous_callback_stub ();

struct void_plgraphicsinp_plpointer_intp_anonymous_callback_entry_struct
{
	void* a_class;
	void_plgraphicsinp_plpointer_intp_anonymous_callback_eiffel_feature feature;
};

void set_void_plgraphicsinp_plpointer_intp_anonymous_callback_entry (void* a_class, void* a_feature);

void call_void_plgraphicsinp_plpointer_intp_anonymous_callback (void *a_function, PLGraphicsIn *anonymous_1, PLPointer anonymous_2, int *anonymous_3);


#include <plplot.h>

typedef void (*void_plpointer_intp_anonymous_callback_eiffel_feature) (void *a_class, PLPointer anonymous_1, int *anonymous_2);

void* get_void_plpointer_intp_anonymous_callback_stub ();

struct void_plpointer_intp_anonymous_callback_entry_struct
{
	void* a_class;
	void_plpointer_intp_anonymous_callback_eiffel_feature feature;
};

void set_void_plpointer_intp_anonymous_callback_entry (void* a_class, void* a_feature);

void call_void_plpointer_intp_anonymous_callback (void *a_function, PLPointer anonymous_1, int *anonymous_2);


#include <plplot.h>

typedef int (*int_plchar_vector_anonymous_callback_eiffel_feature) (void *a_class, PLCHAR_VECTOR anonymous_1);

void* get_int_plchar_vector_anonymous_callback_stub ();

struct int_plchar_vector_anonymous_callback_entry_struct
{
	void* a_class;
	int_plchar_vector_anonymous_callback_eiffel_feature feature;
};

void set_int_plchar_vector_anonymous_callback_entry (void* a_class, void* a_feature);

int call_int_plchar_vector_anonymous_callback (void *a_function, PLCHAR_VECTOR anonymous_1);


#include <plplot.h>

typedef void (*void_plchar_vector_anonymous_callback_eiffel_feature) (void *a_class, PLCHAR_VECTOR anonymous_1);

void* get_void_plchar_vector_anonymous_callback_stub ();

struct void_plchar_vector_anonymous_callback_entry_struct
{
	void* a_class;
	void_plchar_vector_anonymous_callback_eiffel_feature feature;
};

void set_void_plchar_vector_anonymous_callback_entry (void* a_class, void* a_feature);

void call_void_plchar_vector_anonymous_callback (void *a_function, PLCHAR_VECTOR anonymous_1);


#include <plplot.h>

typedef int (*int_plchar_vector_plchar_vector_plpointer_anonymous_callback_eiffel_feature) (void *a_class, PLCHAR_VECTOR anonymous_1, PLCHAR_VECTOR anonymous_2, PLPointer anonymous_3);

void* get_int_plchar_vector_plchar_vector_plpointer_anonymous_callback_stub ();

struct int_plchar_vector_plchar_vector_plpointer_anonymous_callback_entry_struct
{
	void* a_class;
	int_plchar_vector_plchar_vector_plpointer_anonymous_callback_eiffel_feature feature;
};

void set_int_plchar_vector_plchar_vector_plpointer_anonymous_callback_entry (void* a_class, void* a_feature);

int call_int_plchar_vector_plchar_vector_plpointer_anonymous_callback (void *a_function, PLCHAR_VECTOR anonymous_1, PLCHAR_VECTOR anonymous_2, PLPointer anonymous_3);


#include <plplot.h>

typedef PLFLT (*plflt_plpointer_plint_plint_anonymous_callback_eiffel_feature) (void *a_class, PLPointer p, PLINT ix, PLINT iy);

void* get_plflt_plpointer_plint_plint_anonymous_callback_stub ();

struct plflt_plpointer_plint_plint_anonymous_callback_entry_struct
{
	void* a_class;
	plflt_plpointer_plint_plint_anonymous_callback_eiffel_feature feature;
};

void set_plflt_plpointer_plint_plint_anonymous_callback_entry (void* a_class, void* a_feature);

PLFLT call_plflt_plpointer_plint_plint_anonymous_callback (void *a_function, PLPointer p, PLINT ix, PLINT iy);


#include <plplot.h>

typedef PLFLT (*plflt_plpointer_plint_plint_plflt_anonymous_callback_eiffel_feature) (void *a_class, PLPointer p, PLINT ix, PLINT iy, PLFLT z);

void* get_plflt_plpointer_plint_plint_plflt_anonymous_callback_stub ();

struct plflt_plpointer_plint_plint_plflt_anonymous_callback_entry_struct
{
	void* a_class;
	plflt_plpointer_plint_plint_plflt_anonymous_callback_eiffel_feature feature;
};

void set_plflt_plpointer_plint_plint_plflt_anonymous_callback_entry (void* a_class, void* a_feature);

PLFLT call_plflt_plpointer_plint_plint_plflt_anonymous_callback (void *a_function, PLPointer p, PLINT ix, PLINT iy, PLFLT z);


#include <plplot.h>

typedef PLINT (*plint_plpointer_plint_plint_anonymous_callback_eiffel_feature) (void *a_class, PLPointer p, PLINT ix, PLINT iy);

void* get_plint_plpointer_plint_plint_anonymous_callback_stub ();

struct plint_plpointer_plint_plint_anonymous_callback_entry_struct
{
	void* a_class;
	plint_plpointer_plint_plint_anonymous_callback_eiffel_feature feature;
};

void set_plint_plpointer_plint_plint_anonymous_callback_entry (void* a_class, void* a_feature);

PLINT call_plint_plpointer_plint_plint_anonymous_callback (void *a_function, PLPointer p, PLINT ix, PLINT iy);


#include <plplot.h>

typedef void (*void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_eiffel_feature) (void *a_class, PLPointer p, PLINT nx, PLINT ny, PLFLT_NC_SCALAR zmin, PLFLT_NC_SCALAR zmax);

void* get_void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_stub ();

struct void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_entry_struct
{
	void* a_class;
	void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_eiffel_feature feature;
};

void set_void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback_entry (void* a_class, void* a_feature);

void call_void_plpointer_plint_plint_plflt_nc_scalar_plflt_nc_scalar_anonymous_callback (void *a_function, PLPointer p, PLINT nx, PLINT ny, PLFLT_NC_SCALAR zmin, PLFLT_NC_SCALAR zmax);


#include <plplot.h>

typedef PLFLT (*plflt_plint_plint_plpointer_anonymous_callback_eiffel_feature) (void *a_class, PLINT ix, PLINT iy, PLPointer p);

void* get_plflt_plint_plint_plpointer_anonymous_callback_stub ();

struct plflt_plint_plint_plpointer_anonymous_callback_entry_struct
{
	void* a_class;
	plflt_plint_plint_plpointer_anonymous_callback_eiffel_feature feature;
};

void set_plflt_plint_plint_plpointer_anonymous_callback_entry (void* a_class, void* a_feature);

PLFLT call_plflt_plint_plint_plpointer_anonymous_callback (void *a_function, PLINT ix, PLINT iy, PLPointer p);


#endif
