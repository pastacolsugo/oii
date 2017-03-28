#include <stdio.h>

int min (int a, int b) {
    if (a < b) return a;
    return b;
}


int main() {
    FILE *fin, *fout;
    fin=fopen("input.txt","r");
    fout=fopen("output.txt","w");
    if(fin==NULL||fout==NULL) {
        printf("errore nell'apertura del file");
        return 0;
    }

    int N, M, A, B;
    fscanf (fin, "%d%d%d%d", &N, &M, &A, &B);
    int solobiglietti=N*A;
    int solocarnet, carnetbiglietti;
    solocarnet=((N/M))*B;
    if(N%M!=0) {
        solocarnet=solocarnet+B;
    }
    carnetbiglietti=(N/M)*B+(N%M)*A; /*con N%M trovo le corse mancanti*/
    fprintf (fout, "%d", min(min(solobiglietti, solocarnet), carnetbiglietti));
    /*if (solobiglietti<solocarnet) {
        if (solobiglietti<carnetbiglietti){
            fprintf (fout,"%d", solobiglietti);
            }
    else {fprintf (fout,"%d", carnetbiglietti);
    }
    }
    else {
    if (solocarnet<carnetbiglietti){
        fprintf (fout,"%d", solocarnet);
    }
    else {
        fprintf (fout,"d", carnetbiglietti);

    }
     }*/
    fclose(fin);
    fclose(fout);
    return 0;
}
