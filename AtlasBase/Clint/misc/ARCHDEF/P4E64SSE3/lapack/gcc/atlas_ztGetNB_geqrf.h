#ifndef ATL_ztGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='LOWER'
 * M : 25,50,75,100,125,150,175,200,250,300,350,400,450,500,600,700,800,900,1000,1200,1400,1600,1800,2000,2400,2800,3200,3600,4000
 * N : 25,50,75,100,125,150,175,200,250,300,350,400,450,500,600,700,800,900,1000,1200,1400,1600,1800,2000,2400,2800,3200,3600,4000
 * NB : 1,12,12,12,12,36,12,36,18,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36
 */
#define ATL_ztGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 37) (nb_) = 1; \
   else if ((n_) < 137) (nb_) = 12; \
   else if ((n_) < 162) (nb_) = 36; \
   else if ((n_) < 187) (nb_) = 12; \
   else if ((n_) < 225) (nb_) = 36; \
   else if ((n_) < 275) (nb_) = 18; \
   else (nb_) = 36; \
}


#endif    /* end ifndef ATL_ztGetNB_geqrf */
