#include<stdio.h>
#include<stdlib.h>

int i;
int j;
int num;
int cant;
int suma;
int opc;
int residuo;
int cosiente;
int main() /* K.J.C */



{
 	printf("  PROGRAMA QUE DEVUEVE  LO QUE CONTENGA  LA POSICI�N  \n   ");
     
   
                      
         	  printf("  INGRESE LA  CANTIDAD    \n   ");	
	          scanf("\n%d",&cant);
	          num=cant;
	         
                  i=0;
                  do{
                  suma=cant/10;
                  cant=suma;    
	               i=i+1;
		                     
                 }while(cant != 0);
                    	
                      /*K J.C */
             switch(i){
                         case 1 :{
                               printf(" ingrese la  pocisi�n  \n ");   
                              scanf("\n%d",&opc);
                                        switch(opc){
                                                  case 1:{
                                                       printf(" \n %d",num);
                                                       }break;
                                                  default:{printf("SOLO  PUEDES INGRESAR  UNA  �PCION ");}  
                                                    }
                                        
                              
                              }break;
                         case 2 :{
                                 printf(" ingrese la  pocisi�n  \n ");
                                     scanf("\n%d",&opc);
                                        switch(opc){
                                           case 1:{    
                                                       do{
                                                          residuo=num%10;
         	                                              cosiente=num/10;
                                                	     
                                                          num=cosiente;
                                                            
		                                                 }while(num != 0);
		                                                printf("\n %d",residuo);
                                                   }break;
                                                   case 2:{
                                                              j=0;
                                                              do{
                                                          residuo=num%10;
         	                                              cosiente=num/10;
                                                	     
                                                          num=cosiente;
                                                            j=j+1;
		                                                 }while((num != 0)&&(j != 1));
		                                                printf("\n %d",residuo);
                                                        }break;
                                                   defaut:{printf("SOLO  PUEDES INGRESAR  DOS �PCIONES ");}
                                                   }      
                              }break; 
                         case 3 :{
                                      printf(" ingrese la  pocisi�n  \n ");
                                     scanf("\n%d",&opc);
                                        switch(opc){
                                           case 1:{    
                                                       do{
                                                          residuo=num%10;
         	                                              cosiente=num/10;
                                                	     
                                                          num=cosiente;
                                                            
		                                                 }while(num != 0);
		                                                printf("\n %d",residuo);
                                                   }break;
                                                   case 2:{
                                                            j=0;
                                                              do{
                                                          residuo=num%10;
         	                                              cosiente=num/10;
                                                	     
                                                          num=cosiente;
                                                            j=j+1;
		                                                 }while((num != 0)&&(j != 2));
		                                                printf("\n %d",residuo);
                                                        
                                                            }break;
                                                   case 3:{
                                                        
                                                              j=0;
                                                              do{
                                                          residuo=num%10;
         	                                              cosiente=num/10;
                                                	     
                                                          num=cosiente;
                                                            j=j+1;
		                                                 }while((num != 0)&&(j != 1));
		                                                printf("\n %d",residuo);
                                                        
                                                        
                                                        }break;
                                                   default:{printf("SOLO  PUEDES INGRESAR TRES  �PCIONES ");}
                                                   }
                                   }break;
                                      
                         case 4 :{
                               printf(" ingrese la  pocisi�n  \n ");
                               scanf("\n%d",&opc);
                                        switch(opc){
                                           case 1:{    
                                                       do{
                                                          residuo=num%10;
         	                                              cosiente=num/10;
                                                	     
                                                          num=cosiente;
                                                            
		                                                 }while(num != 0);
		                                                printf("\n %d",residuo);
                                                   }break;
                                                      case 2:{
                                                              j=0;
                                                              do{
                                                          residuo=num%10;
         	                                              cosiente=num/10;
                                                	     
                                                          num=cosiente;
                                                            j=j+1;
		                                                 }while((num != 0)&&(j != 3));
		                                                printf("\n %d",residuo);
                                                             }break;
                                                      case 3:{
                                                               j=1;
                                                              do{
                                                          residuo=num%10;
         	                                              cosiente=num/10;
                                                	     
                                                          num=cosiente;
                                                            j=j+1;
		                                                 }while((num != 0)&&(j != 3));
		                                                printf("\n %d",residuo);
                                                   }break;
                                                    case 4: {
                                                               j=2; 
                                                              do{
                                                                 residuo=num%10;
         	                                                     cosiente=num/10;
                                                	     
                                                                num=cosiente;
                                                                 j=j+1;
		                                                         }while((num != 0)&&(j != 3));
		                                                       printf("\n %d",residuo);
                                                            }break;
                                                   
                                                   default:
                                                           {
                                                                 }
                                                }
                          
                               
                              }break;  
                         default:{printf("SOLO  PUEDES INGRESAR  CUATRO   �PCIONES ");
                                  }
                         }
             
  /*KALVIN J.C */             
system("pause");
}
