#include <stdio.h>

int min (int a, int b) {
    if (a < b) return a;
    return b;
}


int main() {
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);

    int N, M, A, B;
    
    scanf ("%d%d%d%d", &N, &M, &A, &B);
    
    int solocarnet, carnetbiglietti;
    int solobiglietti = N*A;
    solocarnet = ((N/M))*B;
    
    if (N%M != 0){
        solocarnet = solocarnet+B;
    }
 
    carnetbiglietti = (N/M)*B + (N%M)*A;
    
    printf ("%d", min(min(solobiglietti, solocarnet), carnetbiglietti));
    
    return 0;
}

