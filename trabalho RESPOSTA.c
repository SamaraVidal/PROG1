#include <stdio.h>

int main()
{
      int num, maior = 0, menor = 0, y=0;
        int total,
            count = 1;
        float nota,
              soma=0.0;

        printf("Numero de alunos na sala: ");
        scanf("%d",&total);

        while(count <= total)
        {
            printf("Nota do aluno %d: ",count);
            scanf("%f",&nota);

            soma = soma + nota;

            count++;
        }

        printf("Media da turma: %.2f", soma/total);
        for( y = 1; y < 10; y++ ){
        if (total>6)
        printf("aprovados");
       
        printf("Reprovados");
}
 
 system ("pause");
 return 0; 
 }
 
