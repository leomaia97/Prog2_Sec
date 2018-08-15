#include <stdio.h>

int main(){

    float temp[15], media=0;
    int i;

    for(i=0;i<15;i++){
        printf("\nEntre com a temperatura %d: ",i+1);
        scanf("%f",&temp[i]);
        media=media+temp[i];
    }

    media=media/15;

    printf("\n\nMedia Geral de Temperatura eh: %.2f", media);

    return 0;

}
