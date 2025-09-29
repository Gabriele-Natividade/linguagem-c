#include <stdio.h>
int main() {
    int alturaA, alturaB;
    int anos=0;

    printf("/n Digite a altura da pessoa A em centimetros: ");
    scanf("%d", &alturaA);
    
    printf("/n Digite a altura da pessoa Bem centimetros: ");
    scanf("%d", &alturaB);

    while(alturaB < alturaA) {
        alturaA +=2;
        alturaB +=3;

        anos++;
    }
       
    printf("/n Serao necessarios %d anos para a pessoa B ser maior que a pessoa A.", anos);
    return 0;
} 
