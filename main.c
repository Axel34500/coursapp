#include <stdio.h>
#include <stdlib.h>

struct pile {
    char tableau[100] ;
    int p ;                   // Indice de la premiere case utilisable
} ;

void push( struct pile* S, char K ) {
    S->tableau[S->p] = K ;
    S->p++ ;
}

char pop( struct pile* S) {
    int resultat = S->tableau[S->p-1] ;
    S->p = S->p-1 ;
    return resultat ;
}

int main() {
    struct pile mapile ;
    mapile.p = 0 ;

    char resultat ;
    
    push( &mapile, 'A' ) ;
    push( &mapile, 'Z' ) ;
    push( &mapile, 'T' ) ;
    
    resultat = pop( &mapile ) ;
    
    push( &mapile, 'X') ;
    resultat = pop( &mapile ) ;
    
    return 0 ;
}


