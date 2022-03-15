#include <stdio.h>
#include <stdlib.h>


void hanoi( int n, int depart, int fin ) {     // Pour deplacer n disques depuis depart vers fin EN RESPECTANT LES REGLES
    if ( n == 1 ) 
        printf("%d => %d\n", depart, fin ) ;
    else {
        hanoi( n-1, depart, 6 - depart - fin ) ;
        hanoi( 1, depart, fin ) ;
        hanoi ( n-1, 6-depart-fin, fin ) ;
    }
}

// -----------------


int main() {

    hanoi ( 3, 1, 3 ) ;

    return 0 ;
}

