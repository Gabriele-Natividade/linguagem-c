#include <stdio.h>
    int main() {
        int idade;
        printf("\n Digite a sua idade: ");

        scanf("%d", &idade);

        if (idade < 18){
            printf("\n Menor de idade");

        } else if (idade <=60 ) {
            printf("\n Maior de idade");

        } else{
        printf("\n Idoso");
        }
            
        return 0;
       
        }



    