#include <stdio.h>

int main(){

    int jv[3][3],i,j;

    printf("\nIntroduza o seu jogo da velha");

    for(i=0;i<3;i++){
        printf("\nColoque a Linha %d do Jogo da Velha (uma a cada Enter):\n",i+1);
        for(j=0;j<3;j++){
            scanf("%d",&jv[i][j]);
        }
    }

    if( (jv[0][0] && jv[1][1] && jv[2][2]) ||
        (jv[0][2] && jv[1][1] && jv[2][0]) ||
        (jv[0][0] && jv[1][0] && jv[2][0]) ||
        (jv[0][1] && jv[1][1] && jv[2][1]) ||
        (jv[0][2] && jv[1][2] && jv[2][2]) ||
        (jv[0][0] && jv[0][1] && jv[0][2]) ||
        (jv[1][0] && jv[1][1] && jv[1][2]) ||
        (jv[2][0] && jv[2][1] && jv[2][2])){
            printf("\nMeu Oponente GANHOU!");
        }else if(!(jv[0][0] && jv[1][1] && jv[2][2]) ||
        (jv[0][2] && jv[1][1] && jv[2][0]) ||
        (jv[0][0] && jv[1][0] && jv[2][0]) ||
        (jv[0][1] && jv[1][1] && jv[2][1]) ||
        (jv[0][2] && jv[1][2] && jv[2][2]) ||
        (jv[0][0] && jv[0][1] && jv[0][2]) ||
        (jv[1][0] && jv[1][1] && jv[1][2]) ||
        (jv[2][0] && jv[2][1] && jv[2][2])){
            printf("\nEU GANHEI!");
        }else{
        printf("DEU VELHA!");}

    return 0;
}
