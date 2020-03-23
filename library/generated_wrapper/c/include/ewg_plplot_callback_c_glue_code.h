#ifndef EWG_CALLBACK_PLPLOT___
#define EWG_CALLBACK_PLPLOT___

#include <plplot.h>

typedef void (*pltransform_callback_eiffel_feature) (void *a_class, PLFLT x, PLFLT y, PLFLT_NC_SCALAR xp, PLFLT_NC_SCALAR yp, PLPointer data);

void* pltransform_callback_object;
pltransform_callback_eiffel_feature pltransform_callback_address_1;
pltransform_callback_eiffel_feature pltransform_callback_address_2;
pltransform_callback_eiffel_feature pltransform_callback_address_3;

void set_pltransform_callback_object (void* a_class);

void release_pltransform_callback_object (void);

void* get_pltransform_callback_stub_1 ();
void* get_pltransform_callback_stub_2 ();
void* get_pltransform_callback_stub_3 ();

void set_pltransform_callback_entry_1 (void* a_feature);
void set_pltransform_callback_entry_2 (void* a_feature);
void set_pltransform_callback_entry_3 (void* a_feature);

void call_pltransform_callback (void *a_function, PLFLT x, PLFLT y, PLFLT_NC_SCALAR xp, PLFLT_NC_SCALAR yp, PLPointer data);


#include <plplot.h>

typedef void (*plmapform_callback_eiffel_feature) (void *a_class, PLINT n, PLFLT_NC_VECTOR x, PLFLT_NC_VECTOR y);

void* plmapform_callback_object;
plmapform_callback_eiffel_feature plmapform_callback_address_1;
plmapform_callback_eiffel_feature plmapform_callback_address_2;
plmapform_callback_eiffel_feature plmapform_callback_address_3;

void set_plmapform_callback_object (void* a_class);

void release_plmapform_callback_object (void);

void* get_plmapform_callback_stub_1 ();
void* get_plmapform_callback_stub_2 ();
void* get_plmapform_callback_stub_3 ();

void set_plmapform_callback_entry_1 (void* a_feature);
void set_plmapform_callback_entry_2 (void* a_feature);
void set_plmapform_callback_entry_3 (void* a_feature);

void call_plmapform_callback (void *a_function, PLINT n, PLFLT_NC_VECTOR x, PLFLT_NC_VECTOR y);


#include <plplot.h>

typedef PLINT (*pldefined_callback_eiffel_feature) (void *a_class, PLFLT x, PLFLT y);

void* pldefined_callback_object;
pldefined_callback_eiffel_feature pldefined_callback_address_1;
pldefined_callback_eiffel_feature pldefined_callback_address_2;
pldefined_callback_eiffel_feature pldefined_callback_address_3;

void set_pldefined_callback_object (void* a_class);

void release_pldefined_callback_object (void);

void* get_pldefined_callback_stub_1 ();
void* get_pldefined_callback_stub_2 ();
void* get_pldefined_callback_stub_3 ();

void set_pldefined_callback_entry_1 (void* a_feature);
void set_pldefined_callback_entry_2 (void* a_feature);
void set_pldefined_callback_entry_3 (void* a_feature);

PLINT call_pldefined_callback (void *a_function, PLFLT x, PLFLT y);


#include <plplot.h>

typedef void (*plfill_callback_eiffel_feature) (void *a_class, PLINT n, PLFLT_VECTOR x, PLFLT_VECTOR y);

void* plfill_callback_object;
plfill_callback_eiffel_feature plfill_callback_address_1;
plfill_callback_eiffel_feature plfill_callback_address_2;
plfill_callback_eiffel_feature plfill_callback_address_3;

void set_plfill_callback_object (void* a_class);

void release_plfill_callback_object (void);

void* get_plfill_callback_stub_1 ();
void* get_plfill_callback_stub_2 ();
void* get_plfill_callback_stub_3 ();

void set_plfill_callback_entry_1 (void* a_feature);
void set_plfill_callback_entry_2 (void* a_feature);
void set_plfill_callback_entry_3 (void* a_feature);

void call_plfill_callback (void *a_function, PLINT n, PLFLT_VECTOR x, PLFLT_VECTOR y);


#include <plplot.h>

typedef void (*pllabel_func_callback_eiffel_feature) (void *a_class, PLINT axis, PLFLT value, PLCHAR_NC_VECTOR label, PLINT length, PLPointer data);

void* pllabel_func_callback_object;
pllabel_func_callback_eiffel_feature pllabel_func_callback_address_1;
pllabel_func_callback_eiffel_feature pllabel_func_callback_address_2;
pllabel_func_callback_eiffel_feature pllabel_func_callback_address_3;

void set_pllabel_func_callback_object (void* a_class);

void release_pllabel_func_callback_object (void);

void* get_pllabel_func_callback_stub_1 ();
void* get_pllabel_func_callback_stub_2 ();
void* get_pllabel_func_callback_stub_3 ();

void set_pllabel_func_callback_entry_1 (void* a_feature);
void set_pllabel_func_callback_entry_2 (void* a_feature);
void set_pllabel_func_callback_entry_3 (void* a_feature);

void call_pllabel_func_callback (void *a_function, PLINT axis, PLFLT value, PLCHAR_NC_VECTOR label, PLINT length, PLPointer data);


#include <plplot.h>

typedef PLFLT (*plf2eval_callback_eiffel_feature) (void *a_class, PLINT ix, PLINT iy, PLPointer data);

void* plf2eval_callback_object;
plf2eval_callback_eiffel_feature plf2eval_callback_address_1;
plf2eval_callback_eiffel_feature plf2eval_callback_address_2;
plf2eval_callback_eiffel_feature plf2eval_callback_address_3;

void set_plf2eval_callback_object (void* a_class);

void release_plf2eval_callback_object (void);

void* get_plf2eval_callback_stub_1 ();
void* get_plf2eval_callback_stub_2 ();
void* get_plf2eval_callback_stub_3 ();

void set_plf2eval_callback_entry_1 (void* a_feature);
void set_plf2eval_callback_entry_2 (void* a_feature);
void set_plf2eval_callback_entry_3 (void* a_feature);

PLFLT call_plf2eval_callback (void *a_function, PLINT ix, PLINT iy, PLPointer data);


#endif
