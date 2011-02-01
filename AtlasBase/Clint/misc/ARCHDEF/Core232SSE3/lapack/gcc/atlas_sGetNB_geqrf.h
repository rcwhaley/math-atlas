#ifndef ATL_sGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='LOWER'
 * M : 25,50,75,100,125,150,175,200,250,300,350,400,450,500,600,700,800,900,1000,1200,1400,1600,1800,2000
 * N : 25,50,75,100,125,150,175,200,250,300,350,400,450,500,600,700,800,900,1000,1200,1400,1600,1800,2000
 * NB : 4,8,8,12,12,16,80,36,84,80,80,80,80,80,80,80,80,80,80,80,80,80,80,80
 */
#define ATL_sGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 37) (nb_) = 4; \
   else if ((n_) < 87) (nb_) = 8; \
   else if ((n_) < 137) (nb_) = 12; \
   else if ((n_) < 162) (nb_) = 16; \
   else if ((n_) < 187) (nb_) = 80; \
   else if ((n_) < 225) (nb_) = 36; \
   else if ((n_) < 275) (nb_) = 84; \
   else (nb_) = 80; \
}


#endif    /* end ifndef ATL_sGetNB_geqrf */