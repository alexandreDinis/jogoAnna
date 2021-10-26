#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{


   int tam = 20;
   char secreta[tam];
   char copia[tam];
   int vida = 3;
   int compara;
   int opcao;
   int cont = 0;
   char dica[3][50];
   int i;

   do{
      opcao = 0;
      vida = 3;
      printf("Digite a palavra Secreta \n");
      scanf("%s",secreta);
      scanf("%c");
      for( i = 0;i<3;i++){
            printf("Escreva a dica numero %d\n",i+1);
            scanf("%50[^\n]",dica[i]);
            scanf("%c");
      }
      i=0;
      system("cls");
      do{

            printf("\nVidas = %d\n",vida);
            printf("Dica %d\t%s\n",i,dica[i++]);
            printf("\nQual eh a Palavra?\n");
            scanf("%s",copia);
            scanf("%c");



            if( strcmp (secreta, copia)){
                vida --;
                cont+=1;

            }else{
                printf("\n\n****You Wins****\n\n");
                vida = 0;
            }
       }while(vida>0);
       if(cont==3)
            printf("\nVoce Perdeu\n\nGame Over\n");
       else
          cont = 0;
   printf("Digite 1 para continuar ou 2 para sair\n");
   scanf("%d",&opcao);
   }while(opcao == 1);


    return 0;
}
