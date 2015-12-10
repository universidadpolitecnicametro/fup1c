#include<stdio.h>
#include<stdlib.h>
int numero;
int i;
int j;
int matriz[2][2];

int  main()
{
	
	for(i=0; i<3; i++)
   {
   		for(j=0; j<3; j++)
         {
   	     printf("matriz[%d][%d]",i+1,j+1);
   	     scanf("%d",&matriz[i][j]);
         }
	}	
	
	
	
	printf("ingrese  el  escalar para  multiplicarlo con la matriz :");
	scanf("%d",&numero);
	

	
	for(i=0; i<3; i++)
   {
   		for(j=0; j<3; j++)
         {
   	     
   	     matriz[i][j]=matriz[i][j]*numero;
         }
	}	
	

printf("R E S U L T A D O S  \n");
	
		for(i=0; i<3; i++)
          {
   		      for(j=0; j<3; j++)
                  {
 
   	              printf("%d",matriz[i][j]);
   	
	               }	
	
         	printf("\n");
			 }	
	
	
system("pause");
}
