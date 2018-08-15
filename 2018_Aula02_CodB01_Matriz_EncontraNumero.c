#include <stdio.h>

int main(){

    int n_matriz[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{20,22,23,24,1} };
    int popula_matriz[5][5];
    int i,j,x,n_z=0,p_z=0;

    printf("\nEntre com o Valor de X: ");
    scanf("%d",&x);


    // USANDO O popula_matriz para popular a matriz!

    printf("\n\n\nUsando Matriz Incrementada pelo Usuario");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("\n Entre com o valor da posicao: Linha [%d] - Coluna [%d]",i+1,j+1);
            scanf("%d",&popula_matriz[i][j]);
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(popula_matriz[i][j] == x){
                printf("\nLinha %d  -  Coluna %d",i+1,j+1);
                p_z++;
            }
        }
    }

    if(p_z==0){
        printf("\n\n\nNAO ENCONTRADO");
    }



    // USANDO O n_matriz como matriz Estatica!

    printf("\n\n\nUsando MATRIZ ESTATICA\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d   ",n_matriz[i][j]);
    }
    printf("\t\n");
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(n_matriz[i][j] == x){
                printf("\nLinha %d  -  Coluna %d",i+1,j+1);
                n_z++;
            }
        }
    }

    if(n_z==0){
        printf("\n\n\nNAO ENCONTRADO");
    }

    return 0;
}
