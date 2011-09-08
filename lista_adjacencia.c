#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



typedef struct elemento
{
        int info;
        struct elemento *prox;
}no;

typedef struct listadelista
{
        no *info;
        struct elemento *prox
}lista;

lista *primeiro,*ultimo,*outro,*aju;

no *inicio, *fim, *novo, *aux;

void criar(){
     inicio = NULL;
     }

void novaLista(){
     no valor;
     valor    
}

void novoVertice(){
     int valor;
     printf("Digite o numero do vertice: ");
     scanf("%d",&valor);
     
     novo = (no*) malloc(sizeof(no));
     novo -> info = valor;
     
     inicio = novo;
     novo -> prox = NULL;
     fim = novo;
     
}

void adjacencias(){
     int valor,i,k;
     printf("Digite o número de adjacencias que o vertice v%d tem: ",inicio->info);
     scanf("%d",&i);
     
     for(k=1;k<=i;k++){
          printf("Digite um dos vertices ajacentes a v%d: ",inicio->info);
          scanf("%d",&valor);
     
          novo = (no*) malloc(sizeof(no));
          novo -> info = valor;
          
          aux = inicio;
          
          while(aux->prox != NULL){
               aux = aux->prox;
          }
          
          aux -> prox = novo;
          novo -> prox = NULL;
          fim = novo;      
     }
}

void imprimi(){
     aux = inicio;
     while(aux != NULL){
         printf("v%d -> ",aux->info);
         aux = aux->prox;
     }
}

main(){
     novoVertice();
     adjacencias();
     imprimi();
     getch();
     
     return 0;
}
