#include <stdio.h>
#include <stdlib.h>
#define TAM 256

int main() {
    FILE *arq;
    long num;
    int cont=0;
    long maior;

    arq = fopen("numeros.dat", "rb");
    if (arq == NULL) {
        printf("ERRO ao abrir o arquivo.\n");
        return 1;
    }

    while(fread(&num,sizeof(long),1,arq) == 1){
    	cont++;
    	if(num>maior){
    		maior = num;
		}
	}
    fclose(arq);

    printf("Possui %d numeros\n", cont);
    printf("O maior numero: %d\n", maior);

    return 0;
}

