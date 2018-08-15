#include <stdio.h>

// NUMEROS DIVISIVEIS POR "x"

int main(){

	int num[10], x, i;

	printf("\nEntre com o valor de X: \n");
	scanf("%d",&x);

	for(i=0;i<10;i++){
		printf("\nNumero %d para ser DIVIDIDO: ",i+1);
		scanf("%d",&num[i]);
	}

	printf("\n\n\n");

	printf("\nNUMEROS DIVISIVEIS POR \"X\"\nPOSICAO - Valor");

	for(i=0;i<10;i++){
		if(num[i] % x == 0){
                if(i>=9){
                    printf("\n  %d    - %d",i+1,num[i]);
                }else{
			printf("\n  %d     - %d",i+1,num[i]);
                }
        }
	}

	return 0;
}
