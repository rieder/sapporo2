#ifndef __DEFINES_H__
#define __DEFINES_H__


// #define DEBUG_PRINT
// #define REMAP



//GPU configuration settings

//Neighbour information
#define NGB_PP 256
#define NGB_PB 256
#define NGB

//GPU config configuration
#define NBLOCKS_PER_MULTI  4 //Kepler
//#define NBLOCKS_PER_MULTI  2 //Fermi
#define NPIPES        256
#define NTHREADS      256


#endif