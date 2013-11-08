// Added by PFG to get this working in Codelite.
// This should have no functional affect on the code.
#ifndef PFG_GLOBALS
#define PFG_GLOBALS

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <GL/glut.h>
#include "FlatworldIICore.h"
#include "Distributions_Funcs.h"

// External / Global variables.
extern WORLD_TYPE *Flatworld;
extern int simtime;
extern float avelifetime;
extern int nlifetimes;
extern int maxnlifetimes;
extern int runflag;

// Global defines
#define TRUE 1
#define FALSE 0
#define PI2 6.283185307179586
#define PI 3.141592653589793

// Functions not properly declared in FltworldIICore.h
int get_number_of_acoustic_receptors( AGENT_TYPE *a );
int get_number_of_acoustic_bands( AGENT_TYPE *a );
int get_number_of_soma_receptors( AGENT_TYPE *a );
int get_number_of_soma_bands( AGENT_TYPE *a );
int intensity_winner_takes_all( AGENT_TYPE *a );
void set_forward_speed_agent( AGENT_TYPE *a, float dfb );
void restore_objects_to_world( WORLD_TYPE *w) ;

// Functions not properly defined in GraphicsCore
void draw_world();
void draw_object( OBJECT_TYPE *o );
void draw_agent( AGENT_TYPE *a );

#endif
