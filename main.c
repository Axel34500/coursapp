#include <stdio.h>
#include <stdlib.h>
#include "point.h"


int main() {

    struct point* toto ;

    toto = point_new( 12, 16 ) ;

// ---------------

    point_affiche( toto ) ;


// ---------------


    point_del( toto ) ;

    return 0 ;
}

