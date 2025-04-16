#include <stdio.h>

unsigned int comp = 0;
int R1 = -1,G1 = -1,B1 = -1;
int R2 = -1,G2 = -1,B2 = -1;

void compactar(int R, int G, int B){
    comp = 0;

    comp += (R<<16)|(G<<8)|(B);


}

void descompactar(unsigned int comp){

    R2 = comp >>16;
    G2 = 0xFF&(4294967040 |(comp >>8));
    B2 = 0xFF&comp;

}

int main(){
    printf("\ndigite 3 valores entre 0 e 255: (Ex: \"x y z\")\n");

    scanf("%d %d %d", &R1,&G1,&B1);

    if((R1 > 0 || R1 < 255) || (G1 > 0 || G1 < 255) || (B1 > 0 || B1 < 255)){
        compactar(R1,G1,B1);
    }
        
    else{
        printf("\nOs valores tem que serem entre 0 e 255\n");
        return 0;
    }

            descompactar(comp);
    printf("\noriginais: %d, %d, %d\ncompactado: %u\ndescompactados: %d, %d, %d\n", R1, G1, B1, comp, R2, G2, B2);

    return 0;
}