/* Created by Language version: 7.7.0 */
/* VECTORIZED */
#define NRN_VECTORIZED 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mech_api.h"
#undef PI
#define nil 0
#include "md1redef.h"
#include "section.h"
#include "nrniv_mf.h"
#include "md2redef.h"
 
#if METHOD3
extern int _method3;
#endif

#if !NRNGPU
#undef exp
#define exp hoc_Exp
extern double hoc_Exp(double);
#endif
 
#define nrn_init _nrn_init__AMPA_NMDA_STP_LTP_tone2PV
#define _nrn_initial _nrn_initial__AMPA_NMDA_STP_LTP_tone2PV
#define nrn_cur _nrn_cur__AMPA_NMDA_STP_LTP_tone2PV
#define _nrn_current _nrn_current__AMPA_NMDA_STP_LTP_tone2PV
#define nrn_jacob _nrn_jacob__AMPA_NMDA_STP_LTP_tone2PV
#define nrn_state _nrn_state__AMPA_NMDA_STP_LTP_tone2PV
#define _net_receive _net_receive__AMPA_NMDA_STP_LTP_tone2PV 
#define state state__AMPA_NMDA_STP_LTP_tone2PV 
 
#define _threadargscomma_ _p, _ppvar, _thread, _nt,
#define _threadargsprotocomma_ double* _p, Datum* _ppvar, Datum* _thread, NrnThread* _nt,
#define _threadargs_ _p, _ppvar, _thread, _nt
#define _threadargsproto_ double* _p, Datum* _ppvar, Datum* _thread, NrnThread* _nt
 	/*SUPPRESS 761*/
	/*SUPPRESS 762*/
	/*SUPPRESS 763*/
	/*SUPPRESS 765*/
	 extern double *getarg();
 /* Thread safe. No static _p or _ppvar. */
 
#define t _nt->_t
#define dt _nt->_dt
#define initW _p[0]
#define initW_columnindex 0
#define temp_tau _p[1]
#define temp_tau_columnindex 1
#define tau_r_AMPA _p[2]
#define tau_r_AMPA_columnindex 2
#define tau_d_AMPA _p[3]
#define tau_d_AMPA_columnindex 3
#define E_AMPA _p[4]
#define E_AMPA_columnindex 4
#define gmax0_AMPA _p[5]
#define gmax0_AMPA_columnindex 5
#define gmax_d_AMPA _p[6]
#define gmax_d_AMPA_columnindex 6
#define gmax_p_AMPA _p[7]
#define gmax_p_AMPA_columnindex 7
#define mgo_NMDA _p[8]
#define mgo_NMDA_columnindex 8
#define scale_NMDA _p[9]
#define scale_NMDA_columnindex 9
#define slope_NMDA _p[10]
#define slope_NMDA_columnindex 10
#define tau_r_NMDA _p[11]
#define tau_r_NMDA_columnindex 11
#define tau_d_NMDA _p[12]
#define tau_d_NMDA_columnindex 12
#define E_NMDA _p[13]
#define E_NMDA_columnindex 13
#define gmax_NMDA _p[14]
#define gmax_NMDA_columnindex 14
#define Use0_TM _p[15]
#define Use0_TM_columnindex 15
#define Dep_TM _p[16]
#define Dep_TM_columnindex 16
#define Fac_TM _p[17]
#define Fac_TM_columnindex 17
#define Nrrp_TM _p[18]
#define Nrrp_TM_columnindex 18
#define Use_d_TM _p[19]
#define Use_d_TM_columnindex 19
#define Use_p_TM _p[20]
#define Use_p_TM_columnindex 20
#define volume_CR _p[21]
#define volume_CR_columnindex 21
#define gca_bar_VDCC _p[22]
#define gca_bar_VDCC_columnindex 22
#define ljp_VDCC _p[23]
#define ljp_VDCC_columnindex 23
#define vhm_VDCC _p[24]
#define vhm_VDCC_columnindex 24
#define km_VDCC _p[25]
#define km_VDCC_columnindex 25
#define vhh_VDCC _p[26]
#define vhh_VDCC_columnindex 26
#define kh_VDCC _p[27]
#define kh_VDCC_columnindex 27
#define mtau_VDCC _p[28]
#define mtau_VDCC_columnindex 28
#define htau_VDCC _p[29]
#define htau_VDCC_columnindex 29
#define gamma_ca_CR _p[30]
#define gamma_ca_CR_columnindex 30
#define tau_ca_CR _p[31]
#define tau_ca_CR_columnindex 31
#define min_ca_CR _p[32]
#define min_ca_CR_columnindex 32
#define cao_CR _p[33]
#define cao_CR_columnindex 33
#define rho_star_GB _p[34]
#define rho_star_GB_columnindex 34
#define tau_ind_GB _p[35]
#define tau_ind_GB_columnindex 35
#define tau_exp_GB _p[36]
#define tau_exp_GB_columnindex 36
#define tau_effca_GB _p[37]
#define tau_effca_GB_columnindex 37
#define gamma_d_GB _p[38]
#define gamma_d_GB_columnindex 38
#define gamma_p_GB _p[39]
#define gamma_p_GB_columnindex 39
#define theta_d_GB _p[40]
#define theta_d_GB_columnindex 40
#define theta_p_GB _p[41]
#define theta_p_GB_columnindex 41
#define rho0_GB _p[42]
#define rho0_GB_columnindex 42
#define synapseID _p[43]
#define synapseID_columnindex 43
#define verbose _p[44]
#define verbose_columnindex 44
#define selected_for_report _p[45]
#define selected_for_report_columnindex 45
#define g_AMPA _p[46]
#define g_AMPA_columnindex 46
#define g_NMDA _p[47]
#define g_NMDA_columnindex 47
#define ica_NMDA _p[48]
#define ica_NMDA_columnindex 48
#define ica_VDCC _p[49]
#define ica_VDCC_columnindex 49
#define dep_GB _p[50]
#define dep_GB_columnindex 50
#define pot_GB _p[51]
#define pot_GB_columnindex 51
#define vsyn _p[52]
#define vsyn_columnindex 52
#define i _p[53]
#define i_columnindex 53
#define A_AMPA _p[54]
#define A_AMPA_columnindex 54
#define B_AMPA _p[55]
#define B_AMPA_columnindex 55
#define gmax_AMPA _p[56]
#define gmax_AMPA_columnindex 56
#define A_NMDA _p[57]
#define A_NMDA_columnindex 57
#define B_NMDA _p[58]
#define B_NMDA_columnindex 58
#define Use_TM _p[59]
#define Use_TM_columnindex 59
#define m_VDCC _p[60]
#define m_VDCC_columnindex 60
#define h_VDCC _p[61]
#define h_VDCC_columnindex 61
#define cai_CR _p[62]
#define cai_CR_columnindex 62
#define rho_GB _p[63]
#define rho_GB_columnindex 63
#define effcai_GB _p[64]
#define effcai_GB_columnindex 64
#define rng_TM _p[65]
#define rng_TM_columnindex 65
#define usingR123 _p[66]
#define usingR123_columnindex 66
#define DA_AMPA _p[67]
#define DA_AMPA_columnindex 67
#define DB_AMPA _p[68]
#define DB_AMPA_columnindex 68
#define Dgmax_AMPA _p[69]
#define Dgmax_AMPA_columnindex 69
#define DA_NMDA _p[70]
#define DA_NMDA_columnindex 70
#define DB_NMDA _p[71]
#define DB_NMDA_columnindex 71
#define DUse_TM _p[72]
#define DUse_TM_columnindex 72
#define Dm_VDCC _p[73]
#define Dm_VDCC_columnindex 73
#define Dh_VDCC _p[74]
#define Dh_VDCC_columnindex 74
#define Dcai_CR _p[75]
#define Dcai_CR_columnindex 75
#define Drho_GB _p[76]
#define Drho_GB_columnindex 76
#define Deffcai_GB _p[77]
#define Deffcai_GB_columnindex 77
#define v _p[78]
#define v_columnindex 78
#define _g _p[79]
#define _g_columnindex 79
#define _tsav _p[80]
#define _tsav_columnindex 80
#define _nd_area  *_ppvar[0]._pval
 
#if MAC
#if !defined(v)
#define v _mlhv
#endif
#if !defined(h)
#define h _mlhh
#endif
#endif
 
#if defined(__cplusplus)
extern "C" {
#endif
 static int hoc_nrnpointerindex =  -1;
 static Datum* _extcall_thread;
 static Prop* _extcall_prop;
 /* external NEURON variables */
 extern double celsius;
 /* declaration of user functions */
 static double _hoc_brand(void*);
 static double _hoc_nernst(void*);
 static double _hoc_urand(void*);
 static int _mechtype;
extern void _nrn_cacheloop_reg(int, int);
extern void hoc_register_prop_size(int, int, int);
extern void hoc_register_limits(int, HocParmLimits*);
extern void hoc_register_units(int, HocParmUnits*);
extern void nrn_promote(Prop*, int, int);
extern Memb_func* memb_func;
 
#define NMODL_TEXT 1
#if NMODL_TEXT
static const char* nmodl_file_text;
static const char* nmodl_filename;
extern void hoc_reg_nmodl_text(int, const char*);
extern void hoc_reg_nmodl_filename(int, const char*);
#endif

 extern Prop* nrn_point_prop_;
 static int _pointtype;
 static void* _hoc_create_pnt(Object* _ho) { void* create_point_process(int, Object*);
 return create_point_process(_pointtype, _ho);
}
 static void _hoc_destroy_pnt(void*);
 static double _hoc_loc_pnt(void* _vptr) {double loc_point_process(int, void*);
 return loc_point_process(_pointtype, _vptr);
}
 static double _hoc_has_loc(void* _vptr) {double has_loc_point(void*);
 return has_loc_point(_vptr);
}
 static double _hoc_get_loc_pnt(void* _vptr) {
 double get_loc_point_process(void*); return (get_loc_point_process(_vptr));
}
 extern void _nrn_setdata_reg(int, void(*)(Prop*));
 static void _setdata(Prop* _prop) {
 _extcall_prop = _prop;
 }
 static void _hoc_setdata(void* _vptr) { Prop* _prop;
 _prop = ((Point_process*)_vptr)->_prop;
   _setdata(_prop);
 }
 /* connect user functions to hoc names */
 static VoidFunc hoc_intfunc[] = {
 0,0
};
 static Member_func _member_func[] = {
 "loc", _hoc_loc_pnt,
 "has_loc", _hoc_has_loc,
 "get_loc", _hoc_get_loc_pnt,
 "brand", _hoc_brand,
 "nernst", _hoc_nernst,
 "urand", _hoc_urand,
 0, 0
};
#define brand brand_AMPA_NMDA_STP_LTP_tone2PV
#define nernst nernst_AMPA_NMDA_STP_LTP_tone2PV
#define urand urand_AMPA_NMDA_STP_LTP_tone2PV
 extern double brand( _threadargsprotocomma_ double , double );
 extern double nernst( _threadargsprotocomma_ double , double , double );
 extern double urand( _threadargsproto_ );
 /* declare global and static user variables */
 /* some parameters have upper and lower limits */
 static HocParmLimits _hoc_parm_limits[] = {
 0,0,0
};
 static HocParmUnits _hoc_parm_units[] = {
 "tau_r_AMPA", "ms",
 "tau_d_AMPA", "ms",
 "E_AMPA", "mV",
 "gmax0_AMPA", "nS",
 "gmax_d_AMPA", "nS",
 "gmax_p_AMPA", "nS",
 "mgo_NMDA", "mM",
 "scale_NMDA", "mM",
 "slope_NMDA", "/mV",
 "tau_r_NMDA", "ms",
 "tau_d_NMDA", "ms",
 "E_NMDA", "mV",
 "gmax_NMDA", "nS",
 "Use0_TM", "1",
 "Dep_TM", "ms",
 "Fac_TM", "ms",
 "Nrrp_TM", "1",
 "Use_d_TM", "1",
 "Use_p_TM", "1",
 "volume_CR", "um3",
 "gca_bar_VDCC", "nS/um2",
 "ljp_VDCC", "mV",
 "vhm_VDCC", "mV",
 "km_VDCC", "mV",
 "vhh_VDCC", "mV",
 "kh_VDCC", "mV",
 "mtau_VDCC", "ms",
 "htau_VDCC", "ms",
 "gamma_ca_CR", "1",
 "tau_ca_CR", "ms",
 "min_ca_CR", "mM",
 "cao_CR", "mM",
 "rho_star_GB", "1",
 "tau_ind_GB", "s",
 "tau_exp_GB", "s",
 "tau_effca_GB", "ms",
 "gamma_d_GB", "1",
 "gamma_p_GB", "1",
 "theta_d_GB", "us/liter",
 "theta_p_GB", "us/liter",
 "rho0_GB", "1",
 "A_AMPA", "1",
 "B_AMPA", "1",
 "gmax_AMPA", "nS",
 "A_NMDA", "1",
 "B_NMDA", "1",
 "Use_TM", "1",
 "m_VDCC", "1",
 "h_VDCC", "1",
 "cai_CR", "mM",
 "rho_GB", "1",
 "effcai_GB", "us/liter",
 "g_AMPA", "uS",
 "g_NMDA", "uS",
 "ica_NMDA", "nA",
 "ica_VDCC", "nA",
 "dep_GB", "1",
 "pot_GB", "1",
 "vsyn", "mV",
 "i", "nA",
 0,0
};
 static double A_NMDA0 = 0;
 static double A_AMPA0 = 0;
 static double B_NMDA0 = 0;
 static double B_AMPA0 = 0;
 static double Use_TM0 = 0;
 static double cai_CR0 = 0;
 static double delta_t = 0.01;
 static double effcai_GB0 = 0;
 static double gmax_AMPA0 = 0;
 static double h_VDCC0 = 0;
 static double m_VDCC0 = 0;
 static double rho_GB0 = 0;
 /* connect global user variables to hoc */
 static DoubScal hoc_scdoub[] = {
 0,0
};
 static DoubVec hoc_vdoub[] = {
 0,0,0
};
 static double _sav_indep;
 static void nrn_alloc(Prop*);
static void  nrn_init(NrnThread*, _Memb_list*, int);
static void nrn_state(NrnThread*, _Memb_list*, int);
 static void nrn_cur(NrnThread*, _Memb_list*, int);
static void  nrn_jacob(NrnThread*, _Memb_list*, int);
 
#define _watch_array _ppvar + 3 
 static void _watch_alloc(Datum*);
 extern void hoc_reg_watch_allocate(int, void(*)(Datum*)); static void _hoc_destroy_pnt(void* _vptr) {
   Prop* _prop = ((Point_process*)_vptr)->_prop;
   if (_prop) { _nrn_free_watch(_prop->dparam, 3, 5);}
   destroy_point_process(_vptr);
}
 
static int _ode_count(int);
static void _ode_map(int, double**, double**, double*, Datum*, double*, int);
static void _ode_spec(NrnThread*, _Memb_list*, int);
static void _ode_matsol(NrnThread*, _Memb_list*, int);
 
#define _cvode_ieq _ppvar[8]._i
 static void _ode_matsol_instance1(_threadargsproto_);
 /* connect range variables in _p that hoc is supposed to know about */
 static const char *_mechanism[] = {
 "7.7.0",
"AMPA_NMDA_STP_LTP_tone2PV",
 "initW",
 "temp_tau",
 "tau_r_AMPA",
 "tau_d_AMPA",
 "E_AMPA",
 "gmax0_AMPA",
 "gmax_d_AMPA",
 "gmax_p_AMPA",
 "mgo_NMDA",
 "scale_NMDA",
 "slope_NMDA",
 "tau_r_NMDA",
 "tau_d_NMDA",
 "E_NMDA",
 "gmax_NMDA",
 "Use0_TM",
 "Dep_TM",
 "Fac_TM",
 "Nrrp_TM",
 "Use_d_TM",
 "Use_p_TM",
 "volume_CR",
 "gca_bar_VDCC",
 "ljp_VDCC",
 "vhm_VDCC",
 "km_VDCC",
 "vhh_VDCC",
 "kh_VDCC",
 "mtau_VDCC",
 "htau_VDCC",
 "gamma_ca_CR",
 "tau_ca_CR",
 "min_ca_CR",
 "cao_CR",
 "rho_star_GB",
 "tau_ind_GB",
 "tau_exp_GB",
 "tau_effca_GB",
 "gamma_d_GB",
 "gamma_p_GB",
 "theta_d_GB",
 "theta_p_GB",
 "rho0_GB",
 "synapseID",
 "verbose",
 "selected_for_report",
 0,
 "g_AMPA",
 "g_NMDA",
 "ica_NMDA",
 "ica_VDCC",
 "dep_GB",
 "pot_GB",
 "vsyn",
 "i",
 0,
 "A_AMPA",
 "B_AMPA",
 "gmax_AMPA",
 "A_NMDA",
 "B_NMDA",
 "Use_TM",
 "m_VDCC",
 "h_VDCC",
 "cai_CR",
 "rho_GB",
 "effcai_GB",
 0,
 0};
 
extern Prop* need_memb(Symbol*);

static void nrn_alloc(Prop* _prop) {
	Prop *prop_ion;
	double *_p; Datum *_ppvar;
  if (nrn_point_prop_) {
	_prop->_alloc_seq = nrn_point_prop_->_alloc_seq;
	_p = nrn_point_prop_->param;
	_ppvar = nrn_point_prop_->dparam;
 }else{
 	_p = nrn_prop_data_alloc(_mechtype, 81, _prop);
 	/*initialize range parameters*/
 	initW = 1;
 	temp_tau = 1;
 	tau_r_AMPA = 0.2;
 	tau_d_AMPA = 1.7;
 	E_AMPA = 0;
 	gmax0_AMPA = 1;
 	gmax_d_AMPA = 0.8;
 	gmax_p_AMPA = 1.5;
 	mgo_NMDA = 1;
 	scale_NMDA = 2.552;
 	slope_NMDA = 0.072;
 	tau_r_NMDA = 0.29;
 	tau_d_NMDA = 70;
 	E_NMDA = -3;
 	gmax_NMDA = 0.55;
 	Use0_TM = 0.5;
 	Dep_TM = 100;
 	Fac_TM = 10;
 	Nrrp_TM = 1;
 	Use_d_TM = 0.2;
 	Use_p_TM = 0.8;
 	volume_CR = 0.087;
 	gca_bar_VDCC = 0.0744;
 	ljp_VDCC = 0;
 	vhm_VDCC = -5.9;
 	km_VDCC = 9.5;
 	vhh_VDCC = -39;
 	kh_VDCC = -9.2;
 	mtau_VDCC = 1;
 	htau_VDCC = 27;
 	gamma_ca_CR = 0.04;
 	tau_ca_CR = 12;
 	min_ca_CR = 7e-05;
 	cao_CR = 2;
 	rho_star_GB = 0.5;
 	tau_ind_GB = 10;
 	tau_exp_GB = 100;
 	tau_effca_GB = 200;
 	gamma_d_GB = 101;
 	gamma_p_GB = 216;
 	theta_d_GB = 0.039;
 	theta_p_GB = 0.045;
 	rho0_GB = 0;
 	synapseID = 0;
 	verbose = 0;
 	selected_for_report = 0;
  }
 	_prop->param = _p;
 	_prop->param_size = 81;
  if (!nrn_point_prop_) {
 	_ppvar = nrn_prop_datum_alloc(_mechtype, 9, _prop);
  }
 	_prop->dparam = _ppvar;
 	/*connect ionic variables to this model*/
 
}
 static void _initlists();
  /* some states have an absolute tolerance */
 static Symbol** _atollist;
 static HocStateTolerance _hoc_state_tol[] = {
 "cai_CR", 1e-06,
 "effcai_GB", 0.001,
 0,0
};
 
#define _tqitem &(_ppvar[2]._pvoid)
 static void _net_receive(Point_process*, double*, double);
 static void _net_init(Point_process*, double*, double);
 static void _thread_mem_init(Datum*);
 static void _thread_cleanup(Datum*);
 extern Symbol* hoc_lookup(const char*);
extern void _nrn_thread_reg(int, int, void(*)(Datum*));
extern void _nrn_thread_table_reg(int, void(*)(double*, Datum*, Datum*, NrnThread*, int));
extern void hoc_register_tolerance(int, HocStateTolerance*, Symbol***);
extern void _cvode_abstol( Symbol**, double*, int);

 void _AMPA_NMDA_STP_LTP_tone2PV_reg() {
	int _vectorized = 1;
  _initlists();
 	_pointtype = point_register_mech(_mechanism,
	 nrn_alloc,nrn_cur, nrn_jacob, nrn_state, nrn_init,
	 hoc_nrnpointerindex, 5,
	 _hoc_create_pnt, _hoc_destroy_pnt, _member_func);
  _extcall_thread = (Datum*)ecalloc(4, sizeof(Datum));
  _thread_mem_init(_extcall_thread);
 _mechtype = nrn_get_mechtype(_mechanism[1]);
     _nrn_setdata_reg(_mechtype, _setdata);
     _nrn_thread_reg(_mechtype, 1, _thread_mem_init);
     _nrn_thread_reg(_mechtype, 0, _thread_cleanup);
 #if NMODL_TEXT
  hoc_reg_nmodl_text(_mechtype, nmodl_file_text);
  hoc_reg_nmodl_filename(_mechtype, nmodl_filename);
#endif
  hoc_register_prop_size(_mechtype, 81, 9);
  hoc_reg_watch_allocate(_mechtype, _watch_alloc);
  hoc_register_dparam_semantics(_mechtype, 0, "area");
  hoc_register_dparam_semantics(_mechtype, 1, "pntproc");
  hoc_register_dparam_semantics(_mechtype, 2, "netsend");
  hoc_register_dparam_semantics(_mechtype, 3, "watch");
  hoc_register_dparam_semantics(_mechtype, 4, "watch");
  hoc_register_dparam_semantics(_mechtype, 5, "watch");
  hoc_register_dparam_semantics(_mechtype, 6, "watch");
  hoc_register_dparam_semantics(_mechtype, 7, "watch");
  hoc_register_dparam_semantics(_mechtype, 8, "cvodeieq");
 	hoc_register_cvode(_mechtype, _ode_count, _ode_map, _ode_spec, _ode_matsol);
 	hoc_register_tolerance(_mechtype, _hoc_state_tol, &_atollist);
 pnt_receive[_mechtype] = _net_receive;
 pnt_receive_init[_mechtype] = _net_init;
 pnt_receive_size[_mechtype] = 5;
 	hoc_register_var(hoc_scdoub, hoc_vdoub, hoc_intfunc);
 	ivoc_help("help ?1 AMPA_NMDA_STP_LTP_tone2PV /Users/gregglickert/Desktop/NMDA_single_cell-main/modfiles_core/AMPA_NMDA_STP_LTP_tone2PV.mod\n");
 hoc_register_limits(_mechtype, _hoc_parm_limits);
 hoc_register_units(_mechtype, _hoc_parm_units);
 }
 
#define FARADAY _nrnunit_FARADAY[_nrnunit_use_legacy_]
static double _nrnunit_FARADAY[2] = {0x1.78e555060882cp+16, 96485.3}; /* 96485.3321233100141 */
 
#define PI _nrnunit_PI[_nrnunit_use_legacy_]
static double _nrnunit_PI[2] = {0x1.921fb54442d18p+1, 3.14159}; /* 3.14159265358979312 */
 
#define R _nrnunit_R[_nrnunit_use_legacy_]
static double _nrnunit_R[2] = {0x1.0a1013e8990bep+3, 8.3145}; /* 8.3144626181532395 */
static int _reset;
static char *modelname = "Glutamatergic synapse";

static int error;
static int _ninits = 0;
static int _match_recurse=1;
static void _modl_cleanup(){ _match_recurse=1;}
 
#define _deriv1_advance _thread[0]._i
#define _dith1 1
#define _recurse _thread[2]._i
#define _newtonspace1 _thread[3]._pvoid
 
static int _ode_spec1(_threadargsproto_);
/*static int _ode_matsol1(_threadargsproto_);*/
 static int _slist2[11];
  static int _slist1[11], _dlist1[11];
 static int state(_threadargsproto_);
 
/*VERBATIM*/
#include <stdlib.h>
#include <math.h>

#if 0
#include <values.h> /* contains MAXLONG */
#endif
#if !defined(MAXLONG)
#include <limits.h>
#define MAXLONG LONG_MAX
#endif
 
/*CVODE*/
 static int _ode_spec1 (double* _p, Datum* _ppvar, Datum* _thread, NrnThread* _nt) {int _reset = 0; {
   double _lminf_VDCC , _lhinf_VDCC ;
 DA_AMPA = - A_AMPA / tau_r_AMPA ;
   DB_AMPA = - B_AMPA / tau_d_AMPA ;
   Dgmax_AMPA = ( gmax_d_AMPA + rho_GB * ( gmax_p_AMPA - gmax_d_AMPA ) - gmax_AMPA ) / ( ( 1e3 ) * tau_exp_GB ) ;
   DA_NMDA = - A_NMDA / tau_r_NMDA ;
   DB_NMDA = - B_NMDA / tau_d_NMDA ;
   DUse_TM = ( Use_d_TM + rho_GB * ( Use_p_TM - Use_d_TM ) - Use_TM ) / ( ( 1e3 ) * tau_exp_GB ) ;
   _lminf_VDCC = 1.0 / ( 1.0 + exp ( ( ( vhm_VDCC - ljp_VDCC ) - v ) / km_VDCC ) ) ;
   _lhinf_VDCC = 1.0 / ( 1.0 + exp ( ( ( vhh_VDCC - ljp_VDCC ) - v ) / kh_VDCC ) ) ;
   Dm_VDCC = ( _lminf_VDCC - m_VDCC ) / mtau_VDCC ;
   Dh_VDCC = ( _lhinf_VDCC - h_VDCC ) / htau_VDCC ;
   Dcai_CR = - ( 1e-9 ) * ( ica_NMDA + ica_VDCC ) * gamma_ca_CR / ( ( 1e-15 ) * volume_CR * 2.0 * FARADAY ) - ( cai_CR - min_ca_CR ) / tau_ca_CR ;
   Deffcai_GB = - effcai_GB / tau_effca_GB + ( cai_CR - min_ca_CR ) ;
   Drho_GB = ( - rho_GB * ( 1.0 - rho_GB ) * ( rho_star_GB - rho_GB ) + pot_GB * gamma_p_GB * ( 1.0 - rho_GB ) - dep_GB * gamma_d_GB * rho_GB ) / ( ( 1e3 ) * tau_ind_GB ) ;
   }
 return _reset;
}
 static int _ode_matsol1 (double* _p, Datum* _ppvar, Datum* _thread, NrnThread* _nt) {
 double _lminf_VDCC , _lhinf_VDCC ;
 DA_AMPA = DA_AMPA  / (1. - dt*( ( - 1.0 ) / tau_r_AMPA )) ;
 DB_AMPA = DB_AMPA  / (1. - dt*( ( - 1.0 ) / tau_d_AMPA )) ;
 Dgmax_AMPA = Dgmax_AMPA  / (1. - dt*( ( ( ( - 1.0 ) ) ) / ( ( 1e3 ) * tau_exp_GB ) )) ;
 DA_NMDA = DA_NMDA  / (1. - dt*( ( - 1.0 ) / tau_r_NMDA )) ;
 DB_NMDA = DB_NMDA  / (1. - dt*( ( - 1.0 ) / tau_d_NMDA )) ;
 DUse_TM = DUse_TM  / (1. - dt*( ( ( ( - 1.0 ) ) ) / ( ( 1e3 ) * tau_exp_GB ) )) ;
 _lminf_VDCC = 1.0 / ( 1.0 + exp ( ( ( vhm_VDCC - ljp_VDCC ) - v ) / km_VDCC ) ) ;
 _lhinf_VDCC = 1.0 / ( 1.0 + exp ( ( ( vhh_VDCC - ljp_VDCC ) - v ) / kh_VDCC ) ) ;
 Dm_VDCC = Dm_VDCC  / (1. - dt*( ( ( ( - 1.0 ) ) ) / mtau_VDCC )) ;
 Dh_VDCC = Dh_VDCC  / (1. - dt*( ( ( ( - 1.0 ) ) ) / htau_VDCC )) ;
 Dcai_CR = Dcai_CR  / (1. - dt*( ( - ( ( 1.0 ) ) / tau_ca_CR ) )) ;
 Deffcai_GB = Deffcai_GB  / (1. - dt*( ( - 1.0 ) / tau_effca_GB )) ;
 Drho_GB = Drho_GB  / (1. - dt*( ( ( (( (( - 1.0 )*( ( 1.0 - rho_GB ) ) + ( - rho_GB )*( ( ( - 1.0 ) ) )) )*( ( rho_star_GB - rho_GB ) ) + ( - rho_GB * ( 1.0 - rho_GB ) )*( ( ( - 1.0 ) ) )) + ( pot_GB * gamma_p_GB )*( ( ( - 1.0 ) ) ) - ( dep_GB * gamma_d_GB )*( 1.0 ) ) ) / ( ( 1e3 ) * tau_ind_GB ) )) ;
  return 0;
}
 /*END CVODE*/
 
static int state (double* _p, Datum* _ppvar, Datum* _thread, NrnThread* _nt) {int _reset=0; int error = 0;
 { double* _savstate1 = _thread[_dith1]._pval;
 double* _dlist2 = _thread[_dith1]._pval + 11;
 int _counte = -1;
 if (!_recurse) {
 _recurse = 1;
 {int _id; for(_id=0; _id < 11; _id++) { _savstate1[_id] = _p[_slist1[_id]];}}
 error = nrn_newton_thread(_newtonspace1, 11,_slist2, _p, state, _dlist2, _ppvar, _thread, _nt);
 _recurse = 0; if(error) {abort_run(error);}}
 {
   double _lminf_VDCC , _lhinf_VDCC ;
 DA_AMPA = - A_AMPA / tau_r_AMPA ;
   DB_AMPA = - B_AMPA / tau_d_AMPA ;
   Dgmax_AMPA = ( gmax_d_AMPA + rho_GB * ( gmax_p_AMPA - gmax_d_AMPA ) - gmax_AMPA ) / ( ( 1e3 ) * tau_exp_GB ) ;
   DA_NMDA = - A_NMDA / tau_r_NMDA ;
   DB_NMDA = - B_NMDA / tau_d_NMDA ;
   DUse_TM = ( Use_d_TM + rho_GB * ( Use_p_TM - Use_d_TM ) - Use_TM ) / ( ( 1e3 ) * tau_exp_GB ) ;
   _lminf_VDCC = 1.0 / ( 1.0 + exp ( ( ( vhm_VDCC - ljp_VDCC ) - v ) / km_VDCC ) ) ;
   _lhinf_VDCC = 1.0 / ( 1.0 + exp ( ( ( vhh_VDCC - ljp_VDCC ) - v ) / kh_VDCC ) ) ;
   Dm_VDCC = ( _lminf_VDCC - m_VDCC ) / mtau_VDCC ;
   Dh_VDCC = ( _lhinf_VDCC - h_VDCC ) / htau_VDCC ;
   Dcai_CR = - ( 1e-9 ) * ( ica_NMDA + ica_VDCC ) * gamma_ca_CR / ( ( 1e-15 ) * volume_CR * 2.0 * FARADAY ) - ( cai_CR - min_ca_CR ) / tau_ca_CR ;
   Deffcai_GB = - effcai_GB / tau_effca_GB + ( cai_CR - min_ca_CR ) ;
   Drho_GB = ( - rho_GB * ( 1.0 - rho_GB ) * ( rho_star_GB - rho_GB ) + pot_GB * gamma_p_GB * ( 1.0 - rho_GB ) - dep_GB * gamma_d_GB * rho_GB ) / ( ( 1e3 ) * tau_ind_GB ) ;
   {int _id; for(_id=0; _id < 11; _id++) {
if (_deriv1_advance) {
 _dlist2[++_counte] = _p[_dlist1[_id]] - (_p[_slist1[_id]] - _savstate1[_id])/dt;
 }else{
_dlist2[++_counte] = _p[_slist1[_id]] - _savstate1[_id];}}}
 } }
 return _reset;}
 
static double _watch1_cond(Point_process* _pnt) {
 	double* _p; Datum* _ppvar; Datum* _thread; NrnThread* _nt;
	_thread= (Datum*)0; _nt = (NrnThread*)_pnt->_vnt;
 	_p = _pnt->_prop->param; _ppvar = _pnt->_prop->dparam;
	v = NODEV(_pnt->node);
	return  ( effcai_GB ) - ( theta_d_GB ) ;
}
 
static double _watch2_cond(Point_process* _pnt) {
 	double* _p; Datum* _ppvar; Datum* _thread; NrnThread* _nt;
	_thread= (Datum*)0; _nt = (NrnThread*)_pnt->_vnt;
 	_p = _pnt->_prop->param; _ppvar = _pnt->_prop->dparam;
	v = NODEV(_pnt->node);
	return  -( ( effcai_GB ) - ( theta_d_GB ) ) ;
}
 
static double _watch3_cond(Point_process* _pnt) {
 	double* _p; Datum* _ppvar; Datum* _thread; NrnThread* _nt;
	_thread= (Datum*)0; _nt = (NrnThread*)_pnt->_vnt;
 	_p = _pnt->_prop->param; _ppvar = _pnt->_prop->dparam;
	v = NODEV(_pnt->node);
	return  ( effcai_GB ) - ( theta_p_GB ) ;
}
 
static double _watch4_cond(Point_process* _pnt) {
 	double* _p; Datum* _ppvar; Datum* _thread; NrnThread* _nt;
	_thread= (Datum*)0; _nt = (NrnThread*)_pnt->_vnt;
 	_p = _pnt->_prop->param; _ppvar = _pnt->_prop->dparam;
	v = NODEV(_pnt->node);
	return  -( ( effcai_GB ) - ( theta_p_GB ) ) ;
}
 
static void _net_receive (Point_process* _pnt, double* _args, double _lflag) 
{  double* _p; Datum* _ppvar; Datum* _thread; NrnThread* _nt;
   int _watch_rm = 0;
   _thread = (Datum*)0; _nt = (NrnThread*)_pnt->_vnt;   _p = _pnt->_prop->param; _ppvar = _pnt->_prop->dparam;
  if (_tsav > t){ extern char* hoc_object_name(); hoc_execerror(hoc_object_name(_pnt->ob), ":Event arrived out of order. Must call ParallelContext.set_maxstep AFTER assigning minimum NetCon.delay");}
 _tsav = t;   if (_lflag == 1. ) {*(_tqitem) = 0;}
 {
   double _lp_rec , _lreleased , _ltp , _lfactor ;
 if ( verbose > 0.0 ) {
      printf ( "Time = %g ms, incoming spike at synapse %g\n" , t , synapseID ) ;
      }
   if ( _lflag  == 0.0 ) {
     if ( _args[0] <= 0.0 ) {
       if ( verbose > 0.0 ) {
         printf ( "Inactive synapse, weight = %g\n" , _args[0] ) ;
         }
       }
     else {
       if ( verbose > 0.0 ) {
         printf ( "Flag 0, Regular spike\n" ) ;
         }
       _args[1] = Use_TM + _args[1] * ( 1.0 - Use_TM ) * exp ( - ( t - _args[2] ) / Fac_TM ) ;
       if ( verbose > 0.0 ) {
         printf ( "\tVesicle release probability = %g\n" , _args[1] ) ;
         }
       _lp_rec = 1.0 - exp ( - ( t - _args[2] ) / Dep_TM ) ;
       if ( verbose > 0.0 ) {
         printf ( "\tVesicle recovery probability = %g\n" , _lp_rec ) ;
         }
       if ( verbose > 0.0 ) {
         printf ( "\tVesicle available before recovery = %g\n" , _args[3] ) ;
         }
       _args[3] = _args[3] + brand ( _threadargscomma_ _args[4] , _lp_rec ) ;
       if ( verbose > 0.0 ) {
         printf ( "\tVesicles available after recovery = %g\n" , _args[3] ) ;
         }
       _lreleased = brand ( _threadargscomma_ _args[3] , _args[1] ) ;
       if ( verbose > 0.0 ) {
         printf ( "\tReleased %g vesicles out of %g\n" , _lreleased , _args[3] ) ;
         }
       _ltp = ( tau_r_AMPA * tau_d_AMPA ) / ( tau_d_AMPA - tau_r_AMPA ) * log ( tau_d_AMPA / tau_r_AMPA ) ;
       _lfactor = 1.0 / ( - exp ( - _ltp / tau_r_AMPA ) + exp ( - _ltp / tau_d_AMPA ) ) ;
         if (nrn_netrec_state_adjust && !cvode_active_){
    /* discon state adjustment for general derivimplicit and KINETIC case */
    int __i, __neq = 11;
    double __state = A_AMPA;
    double __primary_delta = (A_AMPA + _lreleased / Nrrp_TM * _lfactor) - __state;
    double __dtsav = dt;
    for (__i = 0; __i < __neq; ++__i) {
      _p[_dlist1[__i]] = 0.0;
    }
    _p[_dlist1[0]] = __primary_delta;
    dt *= 0.5;
    v = NODEV(_pnt->node);
#if NRN_VECTORIZED
    _thread = _nt->_ml_list[_mechtype]->_thread;
#endif
    _ode_matsol_instance1(_threadargs_);
    dt = __dtsav;
    for (__i = 0; __i < __neq; ++__i) {
      _p[_slist1[__i]] += _p[_dlist1[__i]];
    }
  } else {
 A_AMPA = A_AMPA + _lreleased / Nrrp_TM * _lfactor ;
         }
   if (nrn_netrec_state_adjust && !cvode_active_){
    /* discon state adjustment for general derivimplicit and KINETIC case */
    int __i, __neq = 11;
    double __state = B_AMPA;
    double __primary_delta = (B_AMPA + _lreleased / Nrrp_TM * _lfactor) - __state;
    double __dtsav = dt;
    for (__i = 0; __i < __neq; ++__i) {
      _p[_dlist1[__i]] = 0.0;
    }
    _p[_dlist1[1]] = __primary_delta;
    dt *= 0.5;
    v = NODEV(_pnt->node);
#if NRN_VECTORIZED
    _thread = _nt->_ml_list[_mechtype]->_thread;
#endif
    _ode_matsol_instance1(_threadargs_);
    dt = __dtsav;
    for (__i = 0; __i < __neq; ++__i) {
      _p[_slist1[__i]] += _p[_dlist1[__i]];
    }
  } else {
 B_AMPA = B_AMPA + _lreleased / Nrrp_TM * _lfactor ;
         }
 _ltp = ( tau_r_NMDA * tau_d_NMDA ) / ( tau_d_NMDA - tau_r_NMDA ) * log ( tau_d_NMDA / tau_r_NMDA ) ;
       _lfactor = 1.0 / ( - exp ( - _ltp / tau_r_NMDA ) + exp ( - _ltp / tau_d_NMDA ) ) ;
         if (nrn_netrec_state_adjust && !cvode_active_){
    /* discon state adjustment for general derivimplicit and KINETIC case */
    int __i, __neq = 11;
    double __state = A_NMDA;
    double __primary_delta = (A_NMDA + _lreleased / Nrrp_TM * _lfactor) - __state;
    double __dtsav = dt;
    for (__i = 0; __i < __neq; ++__i) {
      _p[_dlist1[__i]] = 0.0;
    }
    _p[_dlist1[3]] = __primary_delta;
    dt *= 0.5;
    v = NODEV(_pnt->node);
#if NRN_VECTORIZED
    _thread = _nt->_ml_list[_mechtype]->_thread;
#endif
    _ode_matsol_instance1(_threadargs_);
    dt = __dtsav;
    for (__i = 0; __i < __neq; ++__i) {
      _p[_slist1[__i]] += _p[_dlist1[__i]];
    }
  } else {
 A_NMDA = A_NMDA + _lreleased / Nrrp_TM * _lfactor ;
         }
   if (nrn_netrec_state_adjust && !cvode_active_){
    /* discon state adjustment for general derivimplicit and KINETIC case */
    int __i, __neq = 11;
    double __state = B_NMDA;
    double __primary_delta = (B_NMDA + _lreleased / Nrrp_TM * _lfactor) - __state;
    double __dtsav = dt;
    for (__i = 0; __i < __neq; ++__i) {
      _p[_dlist1[__i]] = 0.0;
    }
    _p[_dlist1[4]] = __primary_delta;
    dt *= 0.5;
    v = NODEV(_pnt->node);
#if NRN_VECTORIZED
    _thread = _nt->_ml_list[_mechtype]->_thread;
#endif
    _ode_matsol_instance1(_threadargs_);
    dt = __dtsav;
    for (__i = 0; __i < __neq; ++__i) {
      _p[_slist1[__i]] += _p[_dlist1[__i]];
    }
  } else {
 B_NMDA = B_NMDA + _lreleased / Nrrp_TM * _lfactor ;
         }
 _args[3] = _args[3] - _lreleased ;
       _args[4] = Nrrp_TM - _args[3] ;
       if ( verbose > 0.0 ) {
         printf ( "\tFinal vesicle count, Recovered = %g, Unrecovered = %g, Nrrp = %g\n" , _args[3] , _args[4] , Nrrp_TM ) ;
         }
       _args[2] = t ;
       }
     }
   else if ( _lflag  == 1.0 ) {
     if ( verbose > 0.0 ) {
       printf ( "Flag 1, Initialize watchers\n" ) ;
       }
       _nrn_watch_activate(_watch_array, _watch1_cond, 1, _pnt, _watch_rm++, 2.0);
   _nrn_watch_activate(_watch_array, _watch2_cond, 2, _pnt, _watch_rm++, 3.0);
   _nrn_watch_activate(_watch_array, _watch3_cond, 3, _pnt, _watch_rm++, 4.0);
   _nrn_watch_activate(_watch_array, _watch4_cond, 4, _pnt, _watch_rm++, 5.0);
 }
   else if ( _lflag  == 2.0 ) {
     if ( verbose > 0.0 ) {
       printf ( "Flag 2, Activate depression mechanisms\n" ) ;
       }
     dep_GB = 1.0 ;
     }
   else if ( _lflag  == 3.0 ) {
     if ( verbose > 0.0 ) {
       printf ( "Flag 3, Deactivate depression mechanisms\n" ) ;
       }
     dep_GB = 0.0 ;
     }
   else if ( _lflag  == 4.0 ) {
     if ( verbose > 0.0 ) {
       printf ( "Flag 4, Activate potentiation mechanisms\n" ) ;
       }
     pot_GB = 1.0 ;
     }
   else if ( _lflag  == 5.0 ) {
     if ( verbose > 0.0 ) {
       printf ( "Flag 5, Deactivate potentiation mechanisms\n" ) ;
       }
     pot_GB = 0.0 ;
     }
   } }
 
static void _net_init(Point_process* _pnt, double* _args, double _lflag) {
       double* _p = _pnt->_prop->param;
    Datum* _ppvar = _pnt->_prop->dparam;
    Datum* _thread = (Datum*)0;
    NrnThread* _nt = (NrnThread*)_pnt->_vnt;
 _args[0] = 1.0 ;
   _args[1] = 0.0 ;
   _args[2] = 0.0 ;
   _args[3] = Nrrp_TM ;
   _args[4] = 0.0 ;
   }
 
double nernst ( _threadargsprotocomma_ double _lci , double _lco , double _lz ) {
   double _lnernst;
 _lnernst = ( 1000.0 ) * R * ( celsius + 273.15 ) / ( _lz * FARADAY ) * log ( _lco / _lci ) ;
   if ( verbose > 1.0 ) {
      printf ( "nernst:%g R:%g temperature (c):%g \n" , _lnernst , R , celsius ) ;
      }
   
return _lnernst;
 }
 
static double _hoc_nernst(void* _vptr) {
 double _r;
   double* _p; Datum* _ppvar; Datum* _thread; NrnThread* _nt;
   _p = ((Point_process*)_vptr)->_prop->param;
  _ppvar = ((Point_process*)_vptr)->_prop->dparam;
  _thread = _extcall_thread;
  _nt = (NrnThread*)((Point_process*)_vptr)->_vnt;
 _r =  nernst ( _p, _ppvar, _thread, _nt, *getarg(1) , *getarg(2) , *getarg(3) );
 return(_r);
}
 
double urand ( _threadargsproto_ ) {
   double _lurand;
 
/*VERBATIM*/
    _lurand = (((double)random()) / ((double)MAXLONG));
 
return _lurand;
 }
 
static double _hoc_urand(void* _vptr) {
 double _r;
   double* _p; Datum* _ppvar; Datum* _thread; NrnThread* _nt;
   _p = ((Point_process*)_vptr)->_prop->param;
  _ppvar = ((Point_process*)_vptr)->_prop->dparam;
  _thread = _extcall_thread;
  _nt = (NrnThread*)((Point_process*)_vptr)->_vnt;
 _r =  urand ( _p, _ppvar, _thread, _nt );
 return(_r);
}
 
double brand ( _threadargsprotocomma_ double _ln , double _lp ) {
   double _lbrand;
 double _lresult , _lcount , _lsuccess ;
 _lsuccess = 0.0 ;
   {int  _lcount ;for ( _lcount = 0 ; _lcount <= ( ((int) _ln ) - 1 ) ; _lcount ++ ) {
     _lresult = urand ( _threadargs_ ) ;
     if ( _lresult <= _lp ) {
       _lsuccess = _lsuccess + 1.0 ;
       }
     } }
   _lbrand = _lsuccess ;
   
return _lbrand;
 }
 
static double _hoc_brand(void* _vptr) {
 double _r;
   double* _p; Datum* _ppvar; Datum* _thread; NrnThread* _nt;
   _p = ((Point_process*)_vptr)->_prop->param;
  _ppvar = ((Point_process*)_vptr)->_prop->dparam;
  _thread = _extcall_thread;
  _nt = (NrnThread*)((Point_process*)_vptr)->_vnt;
 _r =  brand ( _p, _ppvar, _thread, _nt, *getarg(1) , *getarg(2) );
 return(_r);
}
 
static void _watch_alloc(Datum* _ppvar) {
  Point_process* _pnt = (Point_process*)_ppvar[1]._pvoid;
   _nrn_watch_allocate(_watch_array, _watch1_cond, 1, _pnt, 2.0);
   _nrn_watch_allocate(_watch_array, _watch2_cond, 2, _pnt, 3.0);
   _nrn_watch_allocate(_watch_array, _watch3_cond, 3, _pnt, 4.0);
   _nrn_watch_allocate(_watch_array, _watch4_cond, 4, _pnt, 5.0);
 }

 
static int _ode_count(int _type){ return 11;}
 
static void _ode_spec(NrnThread* _nt, _Memb_list* _ml, int _type) {
   double* _p; Datum* _ppvar; Datum* _thread;
   Node* _nd; double _v; int _iml, _cntml;
  _cntml = _ml->_nodecount;
  _thread = _ml->_thread;
  for (_iml = 0; _iml < _cntml; ++_iml) {
    _p = _ml->_data[_iml]; _ppvar = _ml->_pdata[_iml];
    _nd = _ml->_nodelist[_iml];
    v = NODEV(_nd);
     _ode_spec1 (_p, _ppvar, _thread, _nt);
 }}
 
static void _ode_map(int _ieq, double** _pv, double** _pvdot, double* _pp, Datum* _ppd, double* _atol, int _type) { 
	double* _p; Datum* _ppvar;
 	int _i; _p = _pp; _ppvar = _ppd;
	_cvode_ieq = _ieq;
	for (_i=0; _i < 11; ++_i) {
		_pv[_i] = _pp + _slist1[_i];  _pvdot[_i] = _pp + _dlist1[_i];
		_cvode_abstol(_atollist, _atol, _i);
	}
 }
 
static void _ode_matsol_instance1(_threadargsproto_) {
 _ode_matsol1 (_p, _ppvar, _thread, _nt);
 }
 
static void _ode_matsol(NrnThread* _nt, _Memb_list* _ml, int _type) {
   double* _p; Datum* _ppvar; Datum* _thread;
   Node* _nd; double _v; int _iml, _cntml;
  _cntml = _ml->_nodecount;
  _thread = _ml->_thread;
  for (_iml = 0; _iml < _cntml; ++_iml) {
    _p = _ml->_data[_iml]; _ppvar = _ml->_pdata[_iml];
    _nd = _ml->_nodelist[_iml];
    v = NODEV(_nd);
 _ode_matsol_instance1(_threadargs_);
 }}
 
static void _thread_mem_init(Datum* _thread) {
   _thread[_dith1]._pval = (double*)ecalloc(22, sizeof(double));
   _newtonspace1 = nrn_cons_newtonspace(11);
 }
 
static void _thread_cleanup(Datum* _thread) {
   free((void*)(_thread[_dith1]._pval));
   nrn_destroy_newtonspace(_newtonspace1);
 }

static void initmodel(double* _p, Datum* _ppvar, Datum* _thread, NrnThread* _nt) {
  int _i; double _save;{
  A_NMDA = A_NMDA0;
  A_AMPA = A_AMPA0;
  B_NMDA = B_NMDA0;
  B_AMPA = B_AMPA0;
  Use_TM = Use_TM0;
  cai_CR = cai_CR0;
  effcai_GB = effcai_GB0;
  gmax_AMPA = gmax_AMPA0;
  h_VDCC = h_VDCC0;
  m_VDCC = m_VDCC0;
  rho_GB = rho_GB0;
 {
   A_AMPA = 0.0 ;
   B_AMPA = 0.0 ;
   gmax_AMPA = gmax0_AMPA ;
   A_NMDA = 0.0 ;
   B_NMDA = 0.0 ;
   Use_TM = Use0_TM ;
   cai_CR = min_ca_CR ;
   rho_GB = rho0_GB ;
   effcai_GB = 0.0 ;
   dep_GB = 0.0 ;
   pot_GB = 0.0 ;
   net_send ( _tqitem, (double*)0, _ppvar[1]._pvoid, t +  0.0 , 1.0 ) ;
   tau_ind_GB = temp_tau ;
   }
 
}
}

static void nrn_init(NrnThread* _nt, _Memb_list* _ml, int _type){
double* _p; Datum* _ppvar; Datum* _thread;
Node *_nd; double _v; int* _ni; int _iml, _cntml;
#if CACHEVEC
    _ni = _ml->_nodeindices;
#endif
_cntml = _ml->_nodecount;
_thread = _ml->_thread;
for (_iml = 0; _iml < _cntml; ++_iml) {
 _p = _ml->_data[_iml]; _ppvar = _ml->_pdata[_iml];
 _tsav = -1e20;
#if CACHEVEC
  if (use_cachevec) {
    _v = VEC_V(_ni[_iml]);
  }else
#endif
  {
    _nd = _ml->_nodelist[_iml];
    _v = NODEV(_nd);
  }
 v = _v;
 initmodel(_p, _ppvar, _thread, _nt);
}
}

static double _nrn_current(double* _p, Datum* _ppvar, Datum* _thread, NrnThread* _nt, double _v){double _current=0.;v=_v;{ {
   double _lEca_syn , _lmggate , _li_AMPA , _li_NMDA , _lPf_NMDA , _lgca_bar_abs_VDCC , _lgca_VDCC ;
 g_AMPA = ( 1e-3 ) * gmax_AMPA * ( B_AMPA - A_AMPA ) ;
   _li_AMPA = g_AMPA * ( v - E_AMPA ) * initW ;
   _lmggate = 1.0 / ( 1.0 + exp ( - slope_NMDA * v ) * ( mgo_NMDA / scale_NMDA ) ) ;
   g_NMDA = ( 1e-3 ) * gmax_NMDA * _lmggate * ( B_NMDA - A_NMDA ) ;
   _li_NMDA = g_NMDA * ( v - E_NMDA ) * initW ;
   _lPf_NMDA = ( 4.0 * cao_CR ) / ( 4.0 * cao_CR + ( 1.0 / 1.38 ) * 120.0 ) * 0.6 ;
   ica_NMDA = _lPf_NMDA * g_NMDA * ( v - 40.0 ) ;
   _lgca_bar_abs_VDCC = gca_bar_VDCC * 4.0 * PI * pow( ( 3.0 / 4.0 * volume_CR * 1.0 / PI ) , ( 2.0 / 3.0 ) ) ;
   _lgca_VDCC = ( 1e-3 ) * _lgca_bar_abs_VDCC * m_VDCC * m_VDCC * h_VDCC ;
   _lEca_syn = nernst ( _threadargscomma_ cai_CR , cao_CR , 2.0 ) ;
   ica_VDCC = _lgca_VDCC * ( v - _lEca_syn ) ;
   vsyn = v ;
   i = _li_AMPA + _li_NMDA + ica_VDCC ;
   }
 _current += i;

} return _current;
}

static void nrn_cur(NrnThread* _nt, _Memb_list* _ml, int _type) {
double* _p; Datum* _ppvar; Datum* _thread;
Node *_nd; int* _ni; double _rhs, _v; int _iml, _cntml;
#if CACHEVEC
    _ni = _ml->_nodeindices;
#endif
_cntml = _ml->_nodecount;
_thread = _ml->_thread;
for (_iml = 0; _iml < _cntml; ++_iml) {
 _p = _ml->_data[_iml]; _ppvar = _ml->_pdata[_iml];
#if CACHEVEC
  if (use_cachevec) {
    _v = VEC_V(_ni[_iml]);
  }else
#endif
  {
    _nd = _ml->_nodelist[_iml];
    _v = NODEV(_nd);
  }
 _g = _nrn_current(_p, _ppvar, _thread, _nt, _v + .001);
 	{ _rhs = _nrn_current(_p, _ppvar, _thread, _nt, _v);
 	}
 _g = (_g - _rhs)/.001;
 _g *=  1.e2/(_nd_area);
 _rhs *= 1.e2/(_nd_area);
#if CACHEVEC
  if (use_cachevec) {
	VEC_RHS(_ni[_iml]) -= _rhs;
  }else
#endif
  {
	NODERHS(_nd) -= _rhs;
  }
 
}
 
}

static void nrn_jacob(NrnThread* _nt, _Memb_list* _ml, int _type) {
double* _p; Datum* _ppvar; Datum* _thread;
Node *_nd; int* _ni; int _iml, _cntml;
#if CACHEVEC
    _ni = _ml->_nodeindices;
#endif
_cntml = _ml->_nodecount;
_thread = _ml->_thread;
for (_iml = 0; _iml < _cntml; ++_iml) {
 _p = _ml->_data[_iml];
#if CACHEVEC
  if (use_cachevec) {
	VEC_D(_ni[_iml]) += _g;
  }else
#endif
  {
     _nd = _ml->_nodelist[_iml];
	NODED(_nd) += _g;
  }
 
}
 
}

static void nrn_state(NrnThread* _nt, _Memb_list* _ml, int _type) {
double* _p; Datum* _ppvar; Datum* _thread;
Node *_nd; double _v = 0.0; int* _ni; int _iml, _cntml;
double _dtsav = dt;
if (secondorder) { dt *= 0.5; }
#if CACHEVEC
    _ni = _ml->_nodeindices;
#endif
_cntml = _ml->_nodecount;
_thread = _ml->_thread;
for (_iml = 0; _iml < _cntml; ++_iml) {
 _p = _ml->_data[_iml]; _ppvar = _ml->_pdata[_iml];
 _nd = _ml->_nodelist[_iml];
#if CACHEVEC
  if (use_cachevec) {
    _v = VEC_V(_ni[_iml]);
  }else
#endif
  {
    _nd = _ml->_nodelist[_iml];
    _v = NODEV(_nd);
  }
 v=_v;
{
 {  _deriv1_advance = 1;
 derivimplicit_thread(11, _slist1, _dlist1, _p, state, _ppvar, _thread, _nt);
_deriv1_advance = 0;
     if (secondorder) {
    int _i;
    for (_i = 0; _i < 11; ++_i) {
      _p[_slist1[_i]] += dt*_p[_dlist1[_i]];
    }}
 }}}
 dt = _dtsav;
}

static void terminal(){}

static void _initlists(){
 double _x; double* _p = &_x;
 int _i; static int _first = 1;
  if (!_first) return;
 _slist1[0] = A_AMPA_columnindex;  _dlist1[0] = DA_AMPA_columnindex;
 _slist1[1] = B_AMPA_columnindex;  _dlist1[1] = DB_AMPA_columnindex;
 _slist1[2] = gmax_AMPA_columnindex;  _dlist1[2] = Dgmax_AMPA_columnindex;
 _slist1[3] = A_NMDA_columnindex;  _dlist1[3] = DA_NMDA_columnindex;
 _slist1[4] = B_NMDA_columnindex;  _dlist1[4] = DB_NMDA_columnindex;
 _slist1[5] = Use_TM_columnindex;  _dlist1[5] = DUse_TM_columnindex;
 _slist1[6] = m_VDCC_columnindex;  _dlist1[6] = Dm_VDCC_columnindex;
 _slist1[7] = h_VDCC_columnindex;  _dlist1[7] = Dh_VDCC_columnindex;
 _slist1[8] = cai_CR_columnindex;  _dlist1[8] = Dcai_CR_columnindex;
 _slist1[9] = effcai_GB_columnindex;  _dlist1[9] = Deffcai_GB_columnindex;
 _slist1[10] = rho_GB_columnindex;  _dlist1[10] = Drho_GB_columnindex;
 _slist2[0] = A_NMDA_columnindex;
 _slist2[1] = A_AMPA_columnindex;
 _slist2[2] = B_NMDA_columnindex;
 _slist2[3] = B_AMPA_columnindex;
 _slist2[4] = Use_TM_columnindex;
 _slist2[5] = cai_CR_columnindex;
 _slist2[6] = effcai_GB_columnindex;
 _slist2[7] = gmax_AMPA_columnindex;
 _slist2[8] = h_VDCC_columnindex;
 _slist2[9] = m_VDCC_columnindex;
 _slist2[10] = rho_GB_columnindex;
_first = 0;
}

#if defined(__cplusplus)
} /* extern "C" */
#endif

#if NMODL_TEXT
static const char* nmodl_filename = "/Users/gregglickert/Desktop/NMDA_single_cell-main/modfiles_core/AMPA_NMDA_STP_LTP_tone2PV.mod";
static const char* nmodl_file_text = 
  "COMMENT\n"
  "/**\n"
  " * @file GluSynapse.mod\n"
  " * @brief Probabilistic synapse featuring long-term plasticity\n"
  " * @author king, chindemi, rossert\n"
  " * @date 2019-09-20\n"
  " * @version 1.0.0\n"
  " * @remark Copyright (c) BBP/EPFL 2005-2021. This work is licenced under Creative Common CC BY-NC-SA-4.0 (https://creativecommons.org/licenses/by-nc-sa/4.0/)\n"
  " * Several changes have been made from the orginal version of this synapse by Greg Glickert to better adapt the model for Large Scale BMTk/Neuron models\n"
  " */\n"
  " Glutamatergic synapse model featuring:\n"
  "1) AMPA receptor with a dual-exponential conductance profile.\n"
  "2) NMDA receptor  with a dual-exponential conductance profile and magnesium\n"
  "   block as described in Jahr and Stevens 1990.\n"
  "3) Tsodyks-Markram presynaptic short-term plasticity as Barros et al. 2019.\n"
  "   Implementation based on the work of Eilif Muller, Michael Reimann and\n"
  "   Srikanth Ramaswamy (Blue Brain Project, August 2011), who introduced the\n"
  "   2-state Markov model of vesicle release. The new model is an extension of\n"
  "   Fuhrmann et al. 2002, motivated by the following constraints:\n"
  "        a) No consumption on failure\n"
  "        b) No release until recovery\n"
  "        c) Same ensemble averaged trace as canonical Tsodyks-Markram using same\n"
  "           parameters determined from experiment.\n"
  "   For a pre-synaptic spike or external spontaneous release trigger event, the\n"
  "   synapse will only release if it is in the recovered state, and with\n"
  "   probability u (which follows facilitation dynamics). If it releases, it will\n"
  "   transition to the unrecovered state. Recovery is as a Poisson process with\n"
  "   rate 1/Dep.\n"
  "   John Rahmon and Giuseppe Chindemi introduced multi-vesicular release as an\n"
  "   extension of the 2-state Markov model of vesicle release described above\n"
  "   (Blue Brain Project, February 2017).\n"
  "4) NMDAR-mediated calcium current. Fractional calcium current Pf_NMDA from\n"
  "   Schneggenburger et al. 1993. Fractional NMDAR conductance treated as a\n"
  "   calcium-only permeable channel with Erev = 40 mV independent of extracellular\n"
  "   calcium concentration (see Jahr and Stevens 1993). Implemented by Christian\n"
  "   Rossert and Giuseppe Chindemi (Blue Brain Project, 2016).\n"
  "5) Spine volume.\n"
  "6) VDCC.\n"
  "7) Postsynaptic calcium dynamics.\n"
  "8) Long-term synaptic plasticity. Calcium-based STDP model based on Graupner and\n"
  "   Brunel 2012.\n"
  "Model implementation, optimization and simulation curated by James King (Blue\n"
  "Brain Project, 2019).\n"
  "ENDCOMMENT\n"
  "\n"
  "TITLE Glutamatergic synapse\n"
  "\n"
  "NEURON {\n"
  "    THREADSAFE\n"
  "    POINT_PROCESS AMPA_NMDA_STP_LTP_tone2PV\n"
  "    RANGE initW,temp_tau             :synaptic scaler for assigning weights added by Greg Glickert \n"
  "    : AMPA Receptor\n"
  "    RANGE tau_r_AMPA, E_AMPA\n"
  "    RANGE tau_d_AMPA, gmax0_AMPA, gmax_d_AMPA, gmax_p_AMPA, g_AMPA\n"
  "    : NMDA Receptor\n"
  "    RANGE mgo_NMDA, scale_NMDA, slope_NMDA\n"
  "    RANGE tau_r_NMDA, tau_d_NMDA, E_NMDA\n"
  "    RANGE gmax_NMDA, g_NMDA\n"
  "    : Stochastic Tsodyks-Markram Multi-Vesicular Release\n"
  "    RANGE Use0_TM, Dep_TM, Fac_TM, Nrrp_TM\n"
  "    RANGE Use_d_TM, Use_p_TM\n"
  "    : NMDAR-mediated calcium current\n"
  "    RANGE ica_NMDA\n"
  "    : Spine\n"
  "    RANGE volume_CR\n"
  "    : VDCC (R-type)\n"
  "    RANGE ljp_VDCC, vhm_VDCC, km_VDCC, mtau_VDCC, vhh_VDCC, kh_VDCC, htau_VDCC, gca_bar_VDCC\n"
  "    RANGE ica_VDCC\n"
  "    : Postsynaptic Ca2+ dynamics\n"
  "    RANGE gamma_ca_CR, tau_ca_CR, min_ca_CR, cao_CR\n"
  "    : Long-term synaptic plasticity\n"
  "    RANGE rho_star_GB, tau_ind_GB, tau_exp_GB, tau_effca_GB\n"
  "    RANGE gamma_d_GB, gamma_p_GB\n"
  "    RANGE theta_d_GB, theta_p_GB, rho0_GB, dep_GB, pot_GB\n"
  "    : Misc\n"
  "    RANGE vsyn, synapseID, selected_for_report, verbose\n"
  "    NONSPECIFIC_CURRENT i\n"
  "}\n"
  "\n"
  "\n"
  "UNITS {\n"
  "    (nA)    = (nanoamp)\n"
  "    (mV)    = (millivolt)\n"
  "    (uS)    = (microsiemens)\n"
  "    (nS)    = (nanosiemens)\n"
  "    (pS)    = (picosiemens)\n"
  "    (umho)  = (micromho)\n"
  "    (um)    = (micrometers)\n"
  "    (mM)    = (milli/liter)\n"
  "    (uM)    = (micro/liter)\n"
  "    FARADAY = (faraday) (coulomb)\n"
  "    PI      = (pi)      (1)\n"
  "    R       = (k-mole)  (joule/degC)\n"
  "}\n"
  "\n"
  "\n"
  "PARAMETER {\n"
  "    initW         = 1.0                   : added by Greg Glickert to scale synaptic weight for large scale modeling\n"
  "    temp_tau      = 1.0\n"
  "    celsius                     (degC)\n"
  "    : AMPA Receptor\n"
  "    tau_r_AMPA      = 0.2       (ms)        : Tau rise, dual-exponential conductance profile\n"
  "    tau_d_AMPA      = 1.7       (ms)        : Tau decay, IMPORTANT: tau_r < tau_d\n"
  "    E_AMPA          = 0         (mV)        : Reversal potential\n"
  "    gmax0_AMPA      = 1.0       (nS)        : Initial peak conductance\n"
  "    gmax_d_AMPA     = 0.8       (nS)        : Peak conductance in the depressed state\n"
  "    gmax_p_AMPA     = 1.5       (nS)        : Peak conductance in the potentitated state\n"
  "    : NMDA Receptor\n"
  "    mgo_NMDA        = 1         (mM)        : Extracellular magnesium concentration\n"
  "    scale_NMDA      = 2.552     (mM)        : Scale of the mg block (Vargas-Caballero and Robinson 2003)\n"
  "    slope_NMDA      = 0.072     (/mV)       : Slope of the ma block (Vargas-Caballero and Robinson 2003)\n"
  "    tau_r_NMDA      = 0.29      (ms)        : Tau rise, dual-exponential conductance profile\n"
  "    tau_d_NMDA      = 70        (ms)        : Tau decay, IMPORTANT: tau_r < tau_d\n"
  "    E_NMDA          = -3        (mV)        : Reversal potential (Vargas-Caballero and Robinson 2003)\n"
  "    gmax_NMDA       = 0.55      (nS)        : Peak conductance\n"
  "    : Stochastic Tsodyks-Markram Multi-Vesicular Release\n"
  "    Use0_TM         = 0.5       (1)         : Initial utilization of synaptic efficacy\n"
  "    Dep_TM          = 100       (ms)        : Relaxation time constant from depression\n"
  "    Fac_TM          = 10        (ms)        : Relaxation time constant from facilitation\n"
  "    Nrrp_TM         = 1         (1)         : Number of release sites for given contact\n"
  "    Use_d_TM        = 0.2       (1)         : Depressed Use\n"
  "    Use_p_TM        = 0.8       (1)         : Potentiated Use\n"
  "    : Spine\n"
  "    volume_CR       = 0.087     (um3)       : From spine data by Ruth Benavides-Piccione (unpublished)\n"
  "    : VDCC (R-type)\n"
  "    gca_bar_VDCC    = 0.0744    (nS/um2)    : Density spines: 20 um-2 (Sabatini 2000), unitary conductance VGCC 3.72 pS (Bartol 2015)\n"
  "    ljp_VDCC        = 0         (mV)\n"
  "    vhm_VDCC        = -5.9      (mV)        : v 1/2 for act, Magee and Johnston 1995 (corrected for m*m)\n"
  "    km_VDCC         = 9.5       (mV)        : act slope, Magee and Johnston 1995 (corrected for m*m)\n"
  "    vhh_VDCC        = -39       (mV)        : v 1/2 for inact, Magee and Johnston 1995\n"
  "    kh_VDCC         = -9.2      (mV)        : inact, Magee and Johnston 1995\n"
  "    mtau_VDCC       = 1         (ms)        : max time constant (guess)\n"
  "    htau_VDCC       = 27        (ms)        : max time constant 100*0.27\n"
  "    : Postsynaptic Ca2+ dynamics\n"
  "    gamma_ca_CR     = 0.04      (1)         : Percent of free calcium (not buffered), Sabatini et al 2002: kappa_e = 24+-11 (also 14 (2-31) or 22 (18-33))\n"
  "    tau_ca_CR       = 12        (ms)        : Rate of removal of calcium, Sabatini et al 2002: 14ms (12-20ms)\n"
  "    min_ca_CR       = 70e-6     (mM)        : Sabatini et al 2002: 70+-29 nM, per AP: 1.1 (0.6-8.2) uM = 1100 e-6 mM = 1100 nM\n"
  "    cao_CR          = 2.0       (mM)        : Extracellular calcium concentration in slices\n"
  "    : Long-term synaptic plasticity\n"
  "    rho_star_GB     = 0.5       (1)\n"
  "    tau_ind_GB      = 10        (s)         : was 70 paper said that was good but no way effects decay time of rho and therefore how much time ampa is increasing \n"
  "    tau_exp_GB      = 100       (s)         : effects how fast ampa rises\n"
  "    tau_effca_GB    = 200       (ms)\n"
  "    gamma_d_GB      = 101       (1)         \n"
  "    gamma_p_GB      = 216       (1)         : effects how much ampa increases by\n"
  "    theta_d_GB      = 0.039     (us/liter)  : threshold 1\n"
  "    theta_p_GB      = 0.045     (us/liter)  : threshold 2\n"
  "    rho0_GB         = 0         (1)         : where rho should start \n"
  "    : Misc\n"
  "    synapseID       = 0\n"
  "    verbose         = 0\n"
  "    selected_for_report = 0\n"
  "}\n"
  "\n"
  "VERBATIM\n"
  "#include <stdlib.h>\n"
  "#include <math.h>\n"
  "\n"
  "#if 0\n"
  "#include <values.h> /* contains MAXLONG */\n"
  "#endif\n"
  "#if !defined(MAXLONG)\n"
  "#include <limits.h>\n"
  "#define MAXLONG LONG_MAX\n"
  "#endif\n"
  "ENDVERBATIM\n"
  "\n"
  "ASSIGNED {\n"
  "    : AMPA Receptor\n"
  "    g_AMPA          (uS)\n"
  "    : NMDA Receptor\n"
  "    g_NMDA          (uS)\n"
  "    : Stochastic Tsodyks-Markram Multi-Vesicular Release\n"
  "    rng_TM                  : Random Number Generator\n"
  "    usingR123               : TEMPORARY until mcellran4 completely deprecated\n"
  "    : NMDAR-mediated calcium current\n"
  "    ica_NMDA        (nA)\n"
  "    : VDCC (R-type)\n"
  "    ica_VDCC        (nA)\n"
  "    : Long-term synaptic plasticity\n"
  "    dep_GB          (1)\n"
  "    pot_GB          (1)\n"
  "    : Misc\n"
  "    v               (mV)\n"
  "    vsyn            (mV)\n"
  "    i               (nA)\n"
  "}\n"
  "\n"
  "STATE {\n"
  "    : AMPA Receptor\n"
  "    A_AMPA      (1)\n"
  "    B_AMPA      (1)\n"
  "    gmax_AMPA   (nS)\n"
  "    : NMDA Receptor\n"
  "    A_NMDA      (1)\n"
  "    B_NMDA      (1)\n"
  "    : Stochastic Tsodyks-Markram Multi-Vesicular Release\n"
  "    Use_TM      (1)\n"
  "    : VDCC (R-type)\n"
  "    m_VDCC      (1)\n"
  "    h_VDCC      (1)\n"
  "    : Postsynaptic Ca2+ dynamics\n"
  "    cai_CR      (mM)        <1e-6>\n"
  "    : Long-term synaptic plasticity\n"
  "    rho_GB      (1)\n"
  "    effcai_GB   (us/liter)  <1e-3>\n"
  "}\n"
  "\n"
  "INITIAL{\n"
  "    : AMPA Receptor\n"
  "    A_AMPA      = 0\n"
  "    B_AMPA      = 0\n"
  "    gmax_AMPA   = gmax0_AMPA\n"
  "    : NMDA Receptor\n"
  "    A_NMDA      = 0\n"
  "    B_NMDA      = 0\n"
  "    : Stochastic Tsodyks-Markram Multi-Vesicular Release\n"
  "    Use_TM      = Use0_TM\n"
  "    : Postsynaptic Ca2+ dynamics\n"
  "    cai_CR      = min_ca_CR\n"
  "    : Long-term synaptic plasticity\n"
  "    rho_GB      = rho0_GB\n"
  "    effcai_GB   = 0\n"
  "    dep_GB      = 0         : LTD flag\n"
  "    pot_GB      = 0         : LTP flag\n"
  "    : Initialize watchers\n"
  "    net_send(0, 1)\n"
  "    tau_ind_GB = temp_tau\n"
  "}\n"
  "\n"
  "BREAKPOINT {\n"
  "    LOCAL Eca_syn, mggate, i_AMPA, i_NMDA, Pf_NMDA, gca_bar_abs_VDCC, gca_VDCC\n"
  "    SOLVE state METHOD derivimplicit\n"
  "    : AMPA Receptor\n"
  "    g_AMPA = (1e-3)*gmax_AMPA*(B_AMPA - A_AMPA)\n"
  "    i_AMPA = g_AMPA*(v-E_AMPA) * initW\n"
  "    : NMDA Receptor\n"
  "    mggate = 1 / (1 + exp(-slope_NMDA*v) * (mgo_NMDA/scale_NMDA))\n"
  "    g_NMDA = (1e-3)*gmax_NMDA*mggate*(B_NMDA - A_NMDA)\n"
  "    i_NMDA = g_NMDA*(v - E_NMDA) * initW\n"
  "    : NMDAR-mediated calcium current\n"
  "    Pf_NMDA  = (4*cao_CR) / (4*cao_CR + (1/1.38) * 120 (mM)) * 0.6\n"
  "    ica_NMDA = Pf_NMDA*g_NMDA*(v-40.0)\n"
  "    : VDCC (R-type), assuming sphere for spine head\n"
  "    gca_bar_abs_VDCC = gca_bar_VDCC * 4(um2)*PI*(3(1/um3)/4*volume_CR*1/PI)^(2/3)\n"
  "    gca_VDCC = (1e-3) * gca_bar_abs_VDCC * m_VDCC * m_VDCC * h_VDCC\n"
  "    Eca_syn = nernst(cai_CR, cao_CR, 2)\n"
  "    ica_VDCC = gca_VDCC*(v-Eca_syn)\n"
  "    : Update synaptic voltage (for recording convenience)\n"
  "    vsyn = v\n"
  "    : Update current\n"
  "    i = i_AMPA + i_NMDA + ica_VDCC\n"
  "}\n"
  "\n"
  "DERIVATIVE state {\n"
  "    LOCAL minf_VDCC, hinf_VDCC\n"
  "    : AMPA Receptor\n"
  "    A_AMPA'      = - A_AMPA/tau_r_AMPA\n"
  "    B_AMPA'      = - B_AMPA/tau_d_AMPA\n"
  "    gmax_AMPA'   = (gmax_d_AMPA + rho_GB*(gmax_p_AMPA - gmax_d_AMPA) - gmax_AMPA) / ((1e3)*tau_exp_GB)\n"
  "    : NMDA Receptor\n"
  "    A_NMDA'      = - A_NMDA/tau_r_NMDA\n"
  "    B_NMDA'      = - B_NMDA/tau_d_NMDA\n"
  "    : Stochastic Tsodyks-Markram Multi-Vesicular Release\n"
  "    Use_TM'      = (Use_d_TM + rho_GB*(Use_p_TM - Use_d_TM) - Use_TM) / ((1e3)*tau_exp_GB)\n"
  "    : VDCC (R-type)\n"
  "    minf_VDCC    = 1 / (1 + exp(((vhm_VDCC - ljp_VDCC) - v) / km_VDCC))\n"
  "    hinf_VDCC    = 1 / (1 + exp(((vhh_VDCC - ljp_VDCC) - v) / kh_VDCC))\n"
  "    m_VDCC'      = (minf_VDCC-m_VDCC)/mtau_VDCC\n"
  "    h_VDCC'      = (hinf_VDCC-h_VDCC)/htau_VDCC\n"
  "    : Postsynaptic Ca2+ dynamics\n"
  "    cai_CR'      = - (1e-9)*(ica_NMDA + ica_VDCC)*gamma_ca_CR/((1e-15)*volume_CR*2*FARADAY)\n"
  "                   - (cai_CR - min_ca_CR)/tau_ca_CR\n"
  "    : Long-term synaptic plasticity\n"
  "    effcai_GB'   = - effcai_GB/tau_effca_GB + (cai_CR - min_ca_CR)\n"
  "    rho_GB'      = ( - rho_GB*(1 - rho_GB)*(rho_star_GB - rho_GB)\n"
  "                     + pot_GB*gamma_p_GB*(1 - rho_GB)\n"
  "                     - dep_GB*gamma_d_GB*rho_GB ) / ((1e3)*tau_ind_GB)\n"
  "}\n"
  "\n"
  "NET_RECEIVE (weight, u, tsyn (ms), recovered, unrecovered) {\n"
  "    LOCAL p_rec, released, tp, factor\n"
  "    INITIAL {\n"
  "        weight = 1\n"
  "        u = 0\n"
  "        tsyn = 0 (ms)\n"
  "        recovered = Nrrp_TM\n"
  "        unrecovered = 0\n"
  "    }\n"
  "    if(verbose > 0){ UNITSOFF printf(\"Time = %g ms, incoming spike at synapse %g\\n\", t, synapseID) UNITSON }\n"
  "    if(flag == 0) {\n"
  "        if(weight <= 0){\n"
  "            : Do not perform any calculations if the synapse (netcon) is deactivated.\n"
  "            : This avoids drawing from the random stream\n"
  "            : WARNING In this model *weight* is only used to activate/deactivate the\n"
  "            :         synapse. The conductance is stored in gmax_AMPA and gmax_NMDA.\n"
  "            if(verbose > 0){ printf(\"Inactive synapse, weight = %g\\n\", weight) }\n"
  "        } else {\n"
  "            : Flag 0: Regular spike\n"
  "            if(verbose > 0){ printf(\"Flag 0, Regular spike\\n\") }\n"
  "            : Update facilitation variable as Eq. 2 in Fuhrmann et al. 2002\n"
  "            u = Use_TM + u*(1 - Use_TM)*exp(-(t - tsyn)/Fac_TM)\n"
  "            if ( verbose > 0 ) { printf(\"\\tVesicle release probability = %g\\n\", u) }\n"
  "            : Recovery\n"
  "            p_rec = 1 - exp(-(t - tsyn)/Dep_TM)\n"
  "            if ( verbose > 0 ) { printf(\"\\tVesicle recovery probability = %g\\n\", p_rec) }\n"
  "            if ( verbose > 0 ) { printf(\"\\tVesicle available before recovery = %g\\n\", recovered) }\n"
  "            recovered = recovered + brand(unrecovered, p_rec)\n"
  "            if ( verbose > 0 ) { printf(\"\\tVesicles available after recovery = %g\\n\", recovered) }\n"
  "            : Release\n"
  "            released = brand(recovered, u)\n"
  "            if ( verbose > 0 ) { printf(\"\\tReleased %g vesicles out of %g\\n\", released, recovered) }\n"
  "            : Update AMPA variables\n"
  "            tp = (tau_r_AMPA*tau_d_AMPA)/(tau_d_AMPA-tau_r_AMPA)*log(tau_d_AMPA/tau_r_AMPA)  : Time to peak\n"
  "            factor = 1 / (-exp(-tp/tau_r_AMPA)+exp(-tp/tau_d_AMPA))  : Normalization factor\n"
  "            A_AMPA = A_AMPA + released/Nrrp_TM*factor\n"
  "            B_AMPA = B_AMPA + released/Nrrp_TM*factor\n"
  "            : Update NMDA variables\n"
  "            tp = (tau_r_NMDA*tau_d_NMDA)/(tau_d_NMDA-tau_r_NMDA)*log(tau_d_NMDA/tau_r_NMDA)  : Time to peak\n"
  "            factor = 1 / (-exp(-tp/tau_r_NMDA)+exp(-tp/tau_d_NMDA))  : Normalization factor\n"
  "            A_NMDA = A_NMDA + released/Nrrp_TM*factor\n"
  "            B_NMDA = B_NMDA + released/Nrrp_TM*factor\n"
  "            : Update vesicle pool\n"
  "            recovered = recovered - released\n"
  "            unrecovered = Nrrp_TM - recovered\n"
  "            if ( verbose > 0 ) { printf(\"\\tFinal vesicle count, Recovered = %g, Unrecovered = %g, Nrrp = %g\\n\", recovered, unrecovered, Nrrp_TM) }\n"
  "            : Update tsyn\n"
  "            : tsyn knows about all spikes, not only those that released\n"
  "            : i.e. each spike can increase the u, regardless of recovered state\n"
  "            :      and each spike trigger an evaluation of recovery\n"
  "            tsyn = t\n"
  "        }\n"
  "    } else if(flag == 1) {\n"
  "        : Flag 1, Initialize watchers\n"
  "        if(verbose > 0){ printf(\"Flag 1, Initialize watchers\\n\") }\n"
  "        WATCH (effcai_GB > theta_d_GB) 2\n"
  "        WATCH (effcai_GB < theta_d_GB) 3\n"
  "        WATCH (effcai_GB > theta_p_GB) 4\n"
  "        WATCH (effcai_GB < theta_p_GB) 5\n"
  "    } else if(flag == 2) {\n"
  "        : Flag 2, Activate depression mechanisms\n"
  "        if(verbose > 0){ printf(\"Flag 2, Activate depression mechanisms\\n\") }\n"
  "        dep_GB = 1\n"
  "    } else if(flag == 3) {\n"
  "        : Flag 3, Deactivate depression mechanisms\n"
  "        if(verbose > 0){ printf(\"Flag 3, Deactivate depression mechanisms\\n\") }\n"
  "        dep_GB = 0\n"
  "    } else if(flag == 4) {\n"
  "        : Flag 4, Activate potentiation mechanisms\n"
  "        if(verbose > 0){ printf(\"Flag 4, Activate potentiation mechanisms\\n\") }\n"
  "        pot_GB = 1\n"
  "    } else if(flag == 5) {\n"
  "        : Flag 5, Deactivate potentiation mechanisms\n"
  "        if(verbose > 0){ printf(\"Flag 5, Deactivate potentiation mechanisms\\n\") }\n"
  "        pot_GB = 0\n"
  "    }\n"
  "}\n"
  "\n"
  "FUNCTION nernst(ci(mM), co(mM), z) (mV) {\n"
  "    nernst = (1000) * R * (celsius + 273.15) / (z*FARADAY) * log(co/ci)\n"
  "    if(verbose > 1) { UNITSOFF printf(\"nernst:%g R:%g temperature (c):%g \\n\", nernst, R, celsius) UNITSON }\n"
  "}\n"
  "\n"
  "FUNCTION urand()() {\n"
  "    VERBATIM\n"
  "    _lurand = (((double)random()) / ((double)MAXLONG));\n"
  "    ENDVERBATIM\n"
  "}\n"
  "\n"
  "FUNCTION brand(n, p) {\n"
  "    LOCAL result, count, success\n"
  "    success = 0\n"
  "    FROM count = 0 TO (n - 1) {\n"
  "        result = urand()\n"
  "        if(result <= p) {\n"
  "            success = success + 1\n"
  "        }\n"
  "    }\n"
  "    brand = success\n"
  "}\n"
  ;
#endif
