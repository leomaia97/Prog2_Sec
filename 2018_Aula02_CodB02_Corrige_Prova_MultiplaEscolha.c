#include <stdio.h>

int main(){

    char resp[5]={'c','b','d','d','e'}, aluno[3][5];
    int nota[3],i,j,z;

    for(i=0;i<3;i++){
        z=0;
        for(j=0;j<5;j++){
            printf("\nEntre com a resposta do aluno %d: ",i+1);
            scanf("%s",&aluno[i][j]);
            if(aluno[i][j]==resp[j]){
                z++;
            }
        }
        nota[i]=z;
    }

    printf("\n\n\n");

    for(i=0;i<3;i++){
        printf("\nAluno %d - Nota: %d",i+1,nota[i]);
    }

    return 0;
}
