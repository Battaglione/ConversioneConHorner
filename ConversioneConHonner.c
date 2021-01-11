#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 24
#define BASEMAX 16
int main (){
    int cifra[MAX];
    int num_cifre;
    int decimale = 0;
    int verifica;
    int i;
    int base;
    int temp;
    do{
        printf("Inserisci la base (MAX 16): ");
        scanf("%d", &base);
    }while(base > BASEMAX || base < 1 || base == 10);

    for(i = 0; i < MAX; i++){
        do{
            printf("Inserisci la cifra a base %d (inserire un numero minore di 0 per terminare; SE LA BASE E' MAGGIORE DI 10, NON ISERIRE LE LETTERE MA INSERISCI DIRETTAMENTE IL NUMERO; MAX %d CIFRE): ", base, MAX);
            scanf("%d", &temp);
            printf("\n");
            if(temp <= -1){
                num_cifre = i;
                i = MAX;
                break;
            }
            else{
                if(temp > base - 1){
                    printf("Cifra inserita non valida\n");
                    verifica = 0;
                }
                else{
                    cifra[i] = temp;
                    verifica = 1;
                }
            }
        }while(verifica == 0);
    }


    for(i = 0; i < num_cifre; i++){
        decimale = base * decimale + cifra[i];
    }

    printf("Il risultato e' %d \n", decimale);

    return 0;





}
