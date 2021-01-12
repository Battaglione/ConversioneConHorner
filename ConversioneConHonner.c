#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 24
#define BASEMAX 9
int main (){
    int cifra[MAX], num_cifre, decimale, i, base, temp, cont;
    printf("TRASFORMAZIONE DA BASE DIVERSA A DECIMALE\n\n");

    for(cont = 2; cont < BASEMAX; cont++){
        printf("Da base %d a base 10\n", cont);
    }

    do{
        printf("\n\n\nInserisci la base (da 2 a 9) ");
        scanf("%d", &base);
    }while(base > BASEMAX || base < 1 || base == 10);
    printf("\n\nLa base inserita e': %d\n\n", base);
    do{
        printf("\nInserisci il numero delle cifre (maggiore di 0 minore di max=24)  ");
        scanf("%d", &num_cifre);
    }while(num_cifre < 0 || num_cifre > MAX);

    printf("\n\nTRASFORMAZIONE DA BASE %d A BASE 10\n", base);
    printf("SISTEMA DI NUMERAZIONE BASE %d: {", base);

    for(cont = 0; cont < base; cont++){
        if(cont == base - 1){
            printf("%d", cont);
        }
        else{
            printf("%d,", cont);
        }
    }

    printf("}\n\n");
    cont = 0;
    i = 0;
    do{
        printf("Inserisci la cifra da sinistra verso destra %d -->  ", cont + 1);
        scanf("%d", &temp);
        printf("\n");
        if(temp > base - 1 || base < 0){
            printf("Cifra inserita non valida\n");
        }
        else{
            cifra[i] = temp;
            i++;
            cont++;
        }
    }while(cont < num_cifre);

    decimale = 0;

    for(i = 0; i < num_cifre; i++){
        decimale = base * decimale + cifra[i];
    }

    printf("Il risultato e' %d \n\n", decimale);

    system("pause");

    return 0;
}
