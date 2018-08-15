#include <stdio.h>

int main(){

    int num,sum=0,qtd_num=0,i,j,z=0;
    float media=0;

    do{
        printf("Entre com um numero:");
        scanf("%d",&num);
        if(num>=0){
            sum=sum+num;
            qtd_num++;
        }else{
            printf("\nSOMATORIO: %d\nMedia: %.2f\nTotal de Numeros: %d"
           ,sum
           ,media=sum/qtd_num
           ,qtd_num);
            z++;
            return 0;
        }
    }
    while(z<=0);

    printf("\nSOMATORIO: %d\nMedia: %.2f\nTotal de Numeros: %d"
           ,sum
           ,media=sum/qtd_num
           ,qtd_num);

    return 0;
}
