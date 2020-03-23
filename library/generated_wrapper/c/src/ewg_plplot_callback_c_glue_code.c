#include <ewg_eiffel.h>
#include <ewg_plplot_callback_c_glue_code.h>

#ifdef _MSC_VER
#pragma warning (disable:4715) // Not all control paths return a value
#endif
void* pltransform_callback_object =  NULL;
pltransform_callback_eiffel_feature pltransform_callback_address_1 = NULL;
pltransform_callback_eiffel_feature pltransform_callback_address_2 = NULL;
pltransform_callback_eiffel_feature pltransform_callback_address_3 = NULL;

void set_pltransform_callback_object (void* a_object)
{
	if (a_object) {
		pltransform_callback_object = eif_protect(a_object);
	} else { 
		pltransform_callback_object = NULL;
	}
}

void release_pltransform_callback_object ()
{
	eif_wean (pltransform_callback_object);
}

void pltransform_callback_stub_1 (PLFLT x, PLFLT y, PLFLT_NC_SCALAR xp, PLFLT_NC_SCALAR yp, PLPointer data)
{
	if (pltransform_callback_object != NULL && pltransform_callback_address_1 != NULL)
	{
		pltransform_callback_address_1 (eif_access(pltransform_callback_object), x, y, xp, yp, data);
	}
}

void pltransform_callback_stub_2 (PLFLT x, PLFLT y, PLFLT_NC_SCALAR xp, PLFLT_NC_SCALAR yp, PLPointer data)
{
	if (pltransform_callback_object != NULL && pltransform_callback_address_2 != NULL)
	{
		pltransform_callback_address_2 (eif_access(pltransform_callback_object), x, y, xp, yp, data);
	}
}

void pltransform_callback_stub_3 (PLFLT x, PLFLT y, PLFLT_NC_SCALAR xp, PLFLT_NC_SCALAR yp, PLPointer data)
{
	if (pltransform_callback_object != NULL && pltransform_callback_address_3 != NULL)
	{
		pltransform_callback_address_3 (eif_access(pltransform_callback_object), x, y, xp, yp, data);
	}
}

void set_pltransform_callback_entry_1 (void* a_feature){
	pltransform_callback_address_1 = (pltransform_callback_eiffel_feature) a_feature;
}

void set_pltransform_callback_entry_2 (void* a_feature){
	pltransform_callback_address_2 = (pltransform_callback_eiffel_feature) a_feature;
}

void set_pltransform_callback_entry_3 (void* a_feature){
	pltransform_callback_address_3 = (pltransform_callback_eiffel_feature) a_feature;
}

void* get_pltransform_callback_stub_1 (){
	return (void*) pltransform_callback_stub_1;
}

void* get_pltransform_callback_stub_2 (){
	return (void*) pltransform_callback_stub_2;
}

void* get_pltransform_callback_stub_3 (){
	return (void*) pltransform_callback_stub_3;
}

void call_pltransform_callback (void *a_function, PLFLT x, PLFLT y, PLFLT_NC_SCALAR xp, PLFLT_NC_SCALAR yp, PLPointer data)
{
	((void (*) (PLFLT x, PLFLT y, PLFLT_NC_SCALAR xp, PLFLT_NC_SCALAR yp, PLPointer data))a_function) (x, y, xp, yp, data);
}

void* plmapform_callback_object =  NULL;
plmapform_callback_eiffel_feature plmapform_callback_address_1 = NULL;
plmapform_callback_eiffel_feature plmapform_callback_address_2 = NULL;
plmapform_callback_eiffel_feature plmapform_callback_address_3 = NULL;

void set_plmapform_callback_object (void* a_object)
{
	if (a_object) {
		plmapform_callback_object = eif_protect(a_object);
	} else { 
		plmapform_callback_object = NULL;
	}
}

void release_plmapform_callback_object ()
{
	eif_wean (plmapform_callback_object);
}

void plmapform_callback_stub_1 (PLINT n, PLFLT_NC_VECTOR x, PLFLT_NC_VECTOR y)
{
	if (plmapform_callback_object != NULL && plmapform_callback_address_1 != NULL)
	{
		plmapform_callback_address_1 (eif_access(plmapform_callback_object), n, x, y);
	}
}

void plmapform_callback_stub_2 (PLINT n, PLFLT_NC_VECTOR x, PLFLT_NC_VECTOR y)
{
	if (plmapform_callback_object != NULL && plmapform_callback_address_2 != NULL)
	{
		plmapform_callback_address_2 (eif_access(plmapform_callback_object), n, x, y);
	}
}

void plmapform_callback_stub_3 (PLINT n, PLFLT_NC_VECTOR x, PLFLT_NC_VECTOR y)
{
	if (plmapform_callback_object != NULL && plmapform_callback_address_3 != NULL)
	{
		plmapform_callback_address_3 (eif_access(plmapform_callback_object), n, x, y);
	}
}

void set_plmapform_callback_entry_1 (void* a_feature){
	plmapform_callback_address_1 = (plmapform_callback_eiffel_feature) a_feature;
}

void set_plmapform_callback_entry_2 (void* a_feature){
	plmapform_callback_address_2 = (plmapform_callback_eiffel_feature) a_feature;
}

void set_plmapform_callback_entry_3 (void* a_feature){
	plmapform_callback_address_3 = (plmapform_callback_eiffel_feature) a_feature;
}

void* get_plmapform_callback_stub_1 (){
	return (void*) plmapform_callback_stub_1;
}

void* get_plmapform_callback_stub_2 (){
	return (void*) plmapform_callback_stub_2;
}

void* get_plmapform_callback_stub_3 (){
	return (void*) plmapform_callback_stub_3;
}

void call_plmapform_callback (void *a_function, PLINT n, PLFLT_NC_VECTOR x, PLFLT_NC_VECTOR y)
{
	((void (*) (PLINT n, PLFLT_NC_VECTOR x, PLFLT_NC_VECTOR y))a_function) (n, x, y);
}

void* pldefined_callback_object =  NULL;
pldefined_callback_eiffel_feature pldefined_callback_address_1 = NULL;
pldefined_callback_eiffel_feature pldefined_callback_address_2 = NULL;
pldefined_callback_eiffel_feature pldefined_callback_address_3 = NULL;

void set_pldefined_callback_object (void* a_object)
{
	if (a_object) {
		pldefined_callback_object = eif_protect(a_object);
	} else { 
		pldefined_callback_object = NULL;
	}
}

void release_pldefined_callback_object ()
{
	eif_wean (pldefined_callback_object);
}

PLINT pldefined_callback_stub_1 (PLFLT x, PLFLT y)
{
	if (pldefined_callback_object != NULL && pldefined_callback_address_1 != NULL)
	{
		return pldefined_callback_address_1 (eif_access(pldefined_callback_object), x, y);
	}
}

PLINT pldefined_callback_stub_2 (PLFLT x, PLFLT y)
{
	if (pldefined_callback_object != NULL && pldefined_callback_address_2 != NULL)
	{
		return pldefined_callback_address_2 (eif_access(pldefined_callback_object), x, y);
	}
}

PLINT pldefined_callback_stub_3 (PLFLT x, PLFLT y)
{
	if (pldefined_callback_object != NULL && pldefined_callback_address_3 != NULL)
	{
		return pldefined_callback_address_3 (eif_access(pldefined_callback_object), x, y);
	}
}

void set_pldefined_callback_entry_1 (void* a_feature){
	pldefined_callback_address_1 = (pldefined_callback_eiffel_feature) a_feature;
}

void set_pldefined_callback_entry_2 (void* a_feature){
	pldefined_callback_address_2 = (pldefined_callback_eiffel_feature) a_feature;
}

void set_pldefined_callback_entry_3 (void* a_feature){
	pldefined_callback_address_3 = (pldefined_callback_eiffel_feature) a_feature;
}

void* get_pldefined_callback_stub_1 (){
	return (void*) pldefined_callback_stub_1;
}

void* get_pldefined_callback_stub_2 (){
	return (void*) pldefined_callback_stub_2;
}

void* get_pldefined_callback_stub_3 (){
	return (void*) pldefined_callback_stub_3;
}

PLINT call_pldefined_callback (void *a_function, PLFLT x, PLFLT y)
{
	return ((PLINT (*) (PLFLT x, PLFLT y))a_function) (x, y);
}

void* plfill_callback_object =  NULL;
plfill_callback_eiffel_feature plfill_callback_address_1 = NULL;
plfill_callback_eiffel_feature plfill_callback_address_2 = NULL;
plfill_callback_eiffel_feature plfill_callback_address_3 = NULL;

void set_plfill_callback_object (void* a_object)
{
	if (a_object) {
		plfill_callback_object = eif_protect(a_object);
	} else { 
		plfill_callback_object = NULL;
	}
}

void release_plfill_callback_object ()
{
	eif_wean (plfill_callback_object);
}

void plfill_callback_stub_1 (PLINT n, PLFLT_VECTOR x, PLFLT_VECTOR y)
{
	if (plfill_callback_object != NULL && plfill_callback_address_1 != NULL)
	{
		plfill_callback_address_1 (eif_access(plfill_callback_object), n, x, y);
	}
}

void plfill_callback_stub_2 (PLINT n, PLFLT_VECTOR x, PLFLT_VECTOR y)
{
	if (plfill_callback_object != NULL && plfill_callback_address_2 != NULL)
	{
		plfill_callback_address_2 (eif_access(plfill_callback_object), n, x, y);
	}
}

void plfill_callback_stub_3 (PLINT n, PLFLT_VECTOR x, PLFLT_VECTOR y)
{
	if (plfill_callback_object != NULL && plfill_callback_address_3 != NULL)
	{
		plfill_callback_address_3 (eif_access(plfill_callback_object), n, x, y);
	}
}

void set_plfill_callback_entry_1 (void* a_feature){
	plfill_callback_address_1 = (plfill_callback_eiffel_feature) a_feature;
}

void set_plfill_callback_entry_2 (void* a_feature){
	plfill_callback_address_2 = (plfill_callback_eiffel_feature) a_feature;
}

void set_plfill_callback_entry_3 (void* a_feature){
	plfill_callback_address_3 = (plfill_callback_eiffel_feature) a_feature;
}

void* get_plfill_callback_stub_1 (){
	return (void*) plfill_callback_stub_1;
}

void* get_plfill_callback_stub_2 (){
	return (void*) plfill_callback_stub_2;
}

void* get_plfill_callback_stub_3 (){
	return (void*) plfill_callback_stub_3;
}

void call_plfill_callback (void *a_function, PLINT n, PLFLT_VECTOR x, PLFLT_VECTOR y)
{
	((void (*) (PLINT n, PLFLT_VECTOR x, PLFLT_VECTOR y))a_function) (n, x, y);
}

void* pllabel_func_callback_object =  NULL;
pllabel_func_callback_eiffel_feature pllabel_func_callback_address_1 = NULL;
pllabel_func_callback_eiffel_feature pllabel_func_callback_address_2 = NULL;
pllabel_func_callback_eiffel_feature pllabel_func_callback_address_3 = NULL;

void set_pllabel_func_callback_object (void* a_object)
{
	if (a_object) {
		pllabel_func_callback_object = eif_protect(a_object);
	} else { 
		pllabel_func_callback_object = NULL;
	}
}

void release_pllabel_func_callback_object ()
{
	eif_wean (pllabel_func_callback_object);
}

void pllabel_func_callback_stub_1 (PLINT axis, PLFLT value, PLCHAR_NC_VECTOR label, PLINT length, PLPointer data)
{
	if (pllabel_func_callback_object != NULL && pllabel_func_callback_address_1 != NULL)
	{
		pllabel_func_callback_address_1 (eif_access(pllabel_func_callback_object), axis, value, label, length, data);
	}
}

void pllabel_func_callback_stub_2 (PLINT axis, PLFLT value, PLCHAR_NC_VECTOR label, PLINT length, PLPointer data)
{
	if (pllabel_func_callback_object != NULL && pllabel_func_callback_address_2 != NULL)
	{
		pllabel_func_callback_address_2 (eif_access(pllabel_func_callback_object), axis, value, label, length, data);
	}
}

void pllabel_func_callback_stub_3 (PLINT axis, PLFLT value, PLCHAR_NC_VECTOR label, PLINT length, PLPointer data)
{
	if (pllabel_func_callback_object != NULL && pllabel_func_callback_address_3 != NULL)
	{
		pllabel_func_callback_address_3 (eif_access(pllabel_func_callback_object), axis, value, label, length, data);
	}
}

void set_pllabel_func_callback_entry_1 (void* a_feature){
	pllabel_func_callback_address_1 = (pllabel_func_callback_eiffel_feature) a_feature;
}

void set_pllabel_func_callback_entry_2 (void* a_feature){
	pllabel_func_callback_address_2 = (pllabel_func_callback_eiffel_feature) a_feature;
}

void set_pllabel_func_callback_entry_3 (void* a_feature){
	pllabel_func_callback_address_3 = (pllabel_func_callback_eiffel_feature) a_feature;
}

void* get_pllabel_func_callback_stub_1 (){
	return (void*) pllabel_func_callback_stub_1;
}

void* get_pllabel_func_callback_stub_2 (){
	return (void*) pllabel_func_callback_stub_2;
}

void* get_pllabel_func_callback_stub_3 (){
	return (void*) pllabel_func_callback_stub_3;
}

void call_pllabel_func_callback (void *a_function, PLINT axis, PLFLT value, PLCHAR_NC_VECTOR label, PLINT length, PLPointer data)
{
	((void (*) (PLINT axis, PLFLT value, PLCHAR_NC_VECTOR label, PLINT length, PLPointer data))a_function) (axis, value, label, length, data);
}

void* plf2eval_callback_object =  NULL;
plf2eval_callback_eiffel_feature plf2eval_callback_address_1 = NULL;
plf2eval_callback_eiffel_feature plf2eval_callback_address_2 = NULL;
plf2eval_callback_eiffel_feature plf2eval_callback_address_3 = NULL;

void set_plf2eval_callback_object (void* a_object)
{
	if (a_object) {
		plf2eval_callback_object = eif_protect(a_object);
	} else { 
		plf2eval_callback_object = NULL;
	}
}

void release_plf2eval_callback_object ()
{
	eif_wean (plf2eval_callback_object);
}

PLFLT plf2eval_callback_stub_1 (PLINT ix, PLINT iy, PLPointer data)
{
	if (plf2eval_callback_object != NULL && plf2eval_callback_address_1 != NULL)
	{
		return plf2eval_callback_address_1 (eif_access(plf2eval_callback_object), ix, iy, data);
	}
}

PLFLT plf2eval_callback_stub_2 (PLINT ix, PLINT iy, PLPointer data)
{
	if (plf2eval_callback_object != NULL && plf2eval_callback_address_2 != NULL)
	{
		return plf2eval_callback_address_2 (eif_access(plf2eval_callback_object), ix, iy, data);
	}
}

PLFLT plf2eval_callback_stub_3 (PLINT ix, PLINT iy, PLPointer data)
{
	if (plf2eval_callback_object != NULL && plf2eval_callback_address_3 != NULL)
	{
		return plf2eval_callback_address_3 (eif_access(plf2eval_callback_object), ix, iy, data);
	}
}

void set_plf2eval_callback_entry_1 (void* a_feature){
	plf2eval_callback_address_1 = (plf2eval_callback_eiffel_feature) a_feature;
}

void set_plf2eval_callback_entry_2 (void* a_feature){
	plf2eval_callback_address_2 = (plf2eval_callback_eiffel_feature) a_feature;
}

void set_plf2eval_callback_entry_3 (void* a_feature){
	plf2eval_callback_address_3 = (plf2eval_callback_eiffel_feature) a_feature;
}

void* get_plf2eval_callback_stub_1 (){
	return (void*) plf2eval_callback_stub_1;
}

void* get_plf2eval_callback_stub_2 (){
	return (void*) plf2eval_callback_stub_2;
}

void* get_plf2eval_callback_stub_3 (){
	return (void*) plf2eval_callback_stub_3;
}

PLFLT call_plf2eval_callback (void *a_function, PLINT ix, PLINT iy, PLPointer data)
{
	return ((PLFLT (*) (PLINT ix, PLINT iy, PLPointer data))a_function) (ix, iy, data);
}

