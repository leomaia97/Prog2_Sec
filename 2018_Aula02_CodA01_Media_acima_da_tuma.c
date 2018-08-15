#include <stdio.h>

int main(){

    float nota[15], media=0, acima_media[15];
    int i,z=0;

    for(i=0;i<15;i++){
        printf("\nEntre com a nota do aluno %d: ",i+1);
        scanf("%f",&nota[i]);
        media=media+nota[i];
    }

    media=media/15;

    printf("\nMedia da Turma: %.2f",media);

    for(i=0;i<15;i++){
        if(nota[i]>media){
           z++;
        }
    }

    printf("\n\n%d Alunos ficaram acima da media da turma.",z);

}
