#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main() //função que indica o programa principal
{
 int RESP, N, FAT, VAL;
 RESP = 1;
 while(RESP == 1) 
 { FAT = 1;
   printf("Numero para calculo: ");
   scanf("%i",&N);
   for (VAL=1; VAL<=N; VAL++)
     FAT = FAT * VAL;  //1 instrução apenas não precisa de chaves
  printf("Fatorial de %i = %i\n",N,FAT);
  printf("Digite [1] para continuar: ");
  scanf("%i",&RESP);
  system("cls"); //clear screen
 }
}
