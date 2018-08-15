#include <stdio.h>

int main(){

    int salario,q_aula, h_aula;
    //float salario;

    printf("\nEntre com a quantidade de Aulas: ");
    scanf("%d",&q_aula);
    printf("\nEntre com o Valor da Hora/Aula: ");
    scanf("%d",&h_aula);

    salario=q_aula*h_aula;

    if((salario)<1500){
        salario=salario*1.1;
        printf("\nNovo Salario eh: %d",salario);
    }else if(salario>=1500){
        salario=salario*1.05;
        printf("\nNovo Salario eh: %d",salario);
    }

    return 0;
}
