#include <stdio.h>
#include <stdlib.h>

#include "point.h"

struct point* point_new( double x, double y ) {
    struct point* tmp ;
    tmp = (struct point*) malloc( sizeof( struct point ) ) ;
    tmp->x = x ;
    tmp->y = y ;
    return tmp ;
}



void point_del( struct point* tmp ) {
    free(tmp) ;
}


void point_affiche( struct point* tmp ) {

    printf("Affichage du point: \n" ) ;
    printf("------------------- \n" ) ;
    printf("X : %lf \n", tmp->x ) ;
    printf("Y : %lf \n", tmp->y ) ;

}

