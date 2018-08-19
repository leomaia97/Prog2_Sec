#include <stdio.h>

int main(){

	float perc,cons;
	char t_carro;

	printf("\nQual o percurso da Viagem (em Km): ");
	scanf("%f",&perc);

	printf("\nA=8Km/L\nB=9Km/L\nC=12Km/L\nQual o tipo do carro:");
	scanf(" %c",&t_carro);

	if(t_carro=='A' || t_carro=='a'){
		cons=perc/8;
	}
	if(t_carro=='B' || t_carro=='b'){
		cons=perc/9;
	}
	if(t_carro=='C' || t_carro=='c'){
		cons=perc/12;
	}

	printf("\nO Consumo foi de: %f Litros!",cons);

	return 0;
}
