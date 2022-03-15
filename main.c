#include <stdio.h>
#include <stdlib.h>

struct file {
    char tableau[10] ;
    int p ;                   // Indice de la premiere case utilisable
    int q ;
} ;

void push( struct file* S, char K ) {
    S->tableau[S->p] = K ;
    S->p++ ;
    if ( S->p == 10 )
        S->p = 0 ;

}

char pop( struct file* S) {
    int resultat = S->tableau[S->q] ;
    S->q = S->q+1 ;
    return resultat ;
}

int main() {
    struct file mafile ;
    mafile.p = 0 ;
    mafile.q = 0 ;

    char resultat ;
    push( &mafile, 'A' ) ;
    push( &mafile, 'Z' ) ;
    
    resultat = pop( &mafile ) ;
    
    push( &mafile, 'T' ) ;
    push( &mafile, 'X') ;
    resultat = pop( &mafile ) ;
    
    return 0 ;
}


