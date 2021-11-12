#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	char op;

		printf("\t|| Youcode 2021 ||\n1)-Calculatrice Simple\n2)-Comparaison de deux nombres\n3)-Conversion Decemial ==> Binaire\n4)-Exit\n");
		scanf("%d", &a);
	
		switch(a){
			case 1: {
				// Calculatrice Simple
				int num1;
				int num2;
				
				if(a == 1){
				printf("|| Calculatrice Simple : ||\n");
				
				printf("Entee le Premier Nombre :");
				scanf("%d:", &num1);
				
				printf("Entee l'operation':");
				scanf("%s:", &op);
			
				printf("Entee le deuxieme Nombre :");
				scanf("%d:", &num2);	
	
				if(op == '+'){
					printf("Solution : %d\n", num1+num2);
				}else if(op == '-'){
					printf("Solution : %d\n", num1-num2);
				}else if(op == '*'){
					printf("Solution : %d\n", num1*num2);
				}else if(op == '/'){
					printf("Solution : %d\n", num1/num2);
				}else{
					printf("Error!");
				}
							break;
						}
						}
					
			case 2: {
					// Comparaison
					int nomb1;
					int nomb2;
					
					if(a == 2){
					printf("|| Comparaison ||\n");
					
					printf("Entee le Premier Nombre :");
					scanf("%d", &nomb1);
					
					printf("Entee le deuxieme Nombre :");
					scanf("%d", &nomb2);
					
					if(nomb1 == nomb2){
						printf("%d = %d", nomb1 , nomb2);
					}else if(nomb1 < nomb2){
						printf("%d < %d", nomb1 , nomb2);
					}else{
						printf("%d > %d", nomb1 , nomb2);
					}
								break;
					}
					}
						
			case 3: {
				if(a == 3){
					int n,i; 
					int b[10];
	   
				printf("Entree nombre decimal : ");    
				scanf("%d",&n);    
				
				for(i = 0; n > 0; i++){    
					b[i]=n%2;    
					n=n/2;
				}    
				
				printf("\nBinaire = ");  
				  
				for(i = i-1; i >= 0; i--){    
					printf("%d",b[i]);
				}
							break;
						}
					}
				
			case 4: {

				break;
			}
				}
		
		return 0; 	
		}