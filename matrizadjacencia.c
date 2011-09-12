#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main(){
       
       int m[6][6], vertice,linha,coluna;
       
       for(linha=0; linha<6;linha++){
                for(coluna=0;coluna<6;coluna++){
                    if(coluna > linha){               
                      printf("Digite o valor do v%d v%d: ",linha+1,coluna+1);
                      scanf("%d",&m[linha][coluna]);
                    }
                }
       }
       
       printf("\n");
       
       for(linha=0; linha<6;linha++){
          for(coluna=0;coluna<6;coluna++){
            if(coluna > linha){               
              printf("%d\t",m[linha][coluna]);
              
            }
            else{
                printf("\t");
            }
          }
          printf("\n");
       }
       
       
       
       getch();
       return 0;
}
