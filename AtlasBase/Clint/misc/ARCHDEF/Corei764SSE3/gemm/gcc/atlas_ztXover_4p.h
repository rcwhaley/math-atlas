/* This file generated by /home/whaley/TEST/ATLAS3.9.23.1/obj64/..//tune/blas/gemm/txover.c
 */
#ifndef ATL_TXOVER_H
   #define ATL_TXOVER_H 1

   #define ATL_PDIM 2
static const int ATL_tmmNN_SQmnk_XO[2] = 
   {111,111};
static const int ATL_tmmNT_SQmnk_XO[2] = 
   {111,111};
static const int ATL_tmmTN_SQmnk_XO[2] = 
   {111,111};
#define ATL_tmmTT_SQmnk_XO ATL_tmmNN_SQmnk_XO
static const int *ATL_tmm_SQmnk_XO[4] =
{ATL_tmmNN_SQmnk_XO, ATL_tmmNT_SQmnk_XO,
 ATL_tmmTN_SQmnk_XO, ATL_tmmTT_SQmnk_XO};
static const int ATL_tmmNN_SmnLk_XO[18] = 
   {2335,0,2225,0,1160,2320,418,721,169,209,104,209,104,220,0,52,0,52};
static const int ATL_tmmNT_SmnLk_XO[18] = 
   {1882,3375,1783,3046,949,1435,433,584,182,209,104,209,104,220,0,52,0,52};
static const int ATL_tmmTN_SmnLk_XO[18] = 
   {3635,0,3090,0,2121,2598,418,733,189,215,112,215,112,213,0,52,0,52};
#define ATL_tmmTT_SmnLk_XO ATL_tmmNN_SmnLk_XO
static const int *ATL_tmm_SmnLk_XO[4] =
{ATL_tmmNN_SmnLk_XO, ATL_tmmNT_SmnLk_XO,
 ATL_tmmTN_SmnLk_XO, ATL_tmmTT_SmnLk_XO};
static const int ATL_tmmNN_SmkLn_XO[18] = 
   {2477,2557,1921,2429,807,1199,363,514,112,215,112,215,112,213,0,52,0,52};
static const int ATL_tmmNT_SmkLn_XO[18] = 
   {0,3502,2670,2670,927,1209,0,426,189,215,112,215,112,213,0,52,0,52};
#define ATL_tmmTN_SmkLn_XO ATL_tmmNN_SmkLn_XO
#define ATL_tmmTT_SmkLn_XO ATL_tmmNT_SmkLn_XO
static const int *ATL_tmm_SmkLn_XO[4] =
{ATL_tmmNN_SmkLn_XO, ATL_tmmNT_SmkLn_XO,
 ATL_tmmTN_SmkLn_XO, ATL_tmmTT_SmkLn_XO};
static const int ATL_tmmNN_SnkLm_XO[18] = 
   {0,0,2201,5689,1039,1445,448,484,202,215,112,215,112,213,0,52,0,52};
#define ATL_tmmNT_SnkLm_XO ATL_tmmNN_SnkLm_XO
static const int ATL_tmmTN_SnkLm_XO[18] = 
   {0,6000,2394,3594,0,1035,0,426,176,215,112,215,112,213,0,52,0,52};
#define ATL_tmmTT_SnkLm_XO ATL_tmmTN_SnkLm_XO
static const int *ATL_tmm_SnkLm_XO[4] =
{ATL_tmmNN_SnkLm_XO, ATL_tmmNT_SnkLm_XO,
 ATL_tmmTN_SnkLm_XO, ATL_tmmTT_SnkLm_XO};
static const int ATL_tmmNN_SmLnk_XO[18] = 
   {135,150,0,135,120,120,0,105,0,105,0,105,105,105,52,105,0,52};
static const int ATL_tmmNT_SmLnk_XO[18] = 
   {120,135,120,135,120,120,0,105,0,105,0,105,105,105,52,105,0,52};
static const int ATL_tmmTN_SmLnk_XO[18] = 
   {135,150,0,135,120,120,0,105,0,105,0,105,105,105,52,105,0,52};
static const int ATL_tmmTT_SmLnk_XO[18] = 
   {120,135,0,120,0,120,0,105,0,105,0,105,105,105,52,105,0,52};
static const int *ATL_tmm_SmLnk_XO[4] =
{ATL_tmmNN_SmLnk_XO, ATL_tmmNT_SmLnk_XO,
 ATL_tmmTN_SmLnk_XO, ATL_tmmTT_SmLnk_XO};
static const int ATL_tmmNN_SnLmk_XO[18] = 
   {120,150,120,150,120,120,0,105,0,105,0,105,105,105,52,105,0,52};
static const int ATL_tmmNT_SnLmk_XO[18] = 
   {120,135,120,135,120,120,0,105,105,120,0,105,105,105,52,105,0,52};
static const int ATL_tmmTN_SnLmk_XO[18] = 
   {135,150,0,135,120,120,0,105,0,105,0,105,105,105,52,105,0,52};
static const int ATL_tmmTT_SnLmk_XO[18] = 
   {135,150,0,135,120,120,0,105,0,105,0,105,105,105,52,105,0,52};
static const int *ATL_tmm_SnLmk_XO[4] =
{ATL_tmmNN_SnLmk_XO, ATL_tmmNT_SnLmk_XO,
 ATL_tmmTN_SnLmk_XO, ATL_tmmTT_SnLmk_XO};
static const int ATL_tmmNN_SkLmn_XO[18] = 
   {105,135,105,120,105,120,0,105,0,105,0,105,105,105,52,105,0,52};
static const int ATL_tmmNT_SkLmn_XO[18] = 
   {105,135,105,120,105,120,0,105,0,105,0,105,105,105,52,105,0,52};
static const int ATL_tmmTN_SkLmn_XO[18] = 
   {120,135,0,120,105,120,0,105,0,105,0,105,105,105,52,105,0,52};
#define ATL_tmmTT_SkLmn_XO ATL_tmmNN_SkLmn_XO
static const int *ATL_tmm_SkLmn_XO[4] =
{ATL_tmmNN_SkLmn_XO, ATL_tmmNT_SkLmn_XO,
 ATL_tmmTN_SkLmn_XO, ATL_tmmTT_SkLmn_XO};

#endif /* end ifndef ATL_TXOVER_H */
