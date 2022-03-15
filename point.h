#ifndef POINT_H
#define POINT_H

struct point { 
    double x ;
    double y ;
} ;

// Cette fonction cree un nouveau point, dont les coorodnnées seront passées en argument
// et renvoie l'adresse de ce point

struct point* point_new( double , double ) ;

void point_del( struct point* ) ;
void point_affiche( struct point* ) ;

#endif
