#include <stdio.h>
#include <stdlib.h>


int factorielle (int n ) {          // Forme iterative
   int acc = 1 ;
   int i ;
   for (i=1; i<=n; i++ ) {
       acc = acc * i ;
   }
    return acc ;
}


// n! = n * (n-1)!
// 1! = 1

int factorielle_rec ( int n ) {                               // 4! = 4*3!                          Forme Récursive
    if ( n== 1 )                                              //        3! = 3* 2!
        return 1 ;                                            //                2! = 2 * 1!
    else                                                      //                         1! = 1
        return n*factorielle_rec(n-1) ;
}


// ---- Forme récursive terminale
// Forme avec descente de recusion, mais pas de remontée !!!


int factorielle_recterm ( int n, int acc ) {
    if ( n== 1 ) 
        return acc ;
    else
        return factorielle_recterm( n-1, acc*n ) ;
}

// factorielle( 4, 1 )
// factorielle( 3, 4 ) 
// factorielle( 2, 12 ) 
// factorielle( 1, 24 ) ;
// -> 24


// -----------------


int main() {

    // Factorielle : 
    // 1 * 2 * 3 * 4 * 5 * 6 * 7 ....   * n
    // Notation : n!

    int r ;
    int n ;
    n = 4 ;

    r = factorielle_rec( n ) ;

    printf("La factorielle de %d vaut %d \n", n, r ) ;

    return 0 ;
}

