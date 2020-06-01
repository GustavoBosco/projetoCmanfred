#include <stdio.h>
#include <stdlib.h>

//Esse programa foi feito pelos alunos:
//Gustavo Bosco e Mateus Henrique Tambosi

int F1(void);
int F2(void);
int F3(void);
int F4(void);
int F5(void);
int r1[5][5];
int r2[6][6];
int r3[3][3];



int main(void) {
		int opcao;
		do{
			printf("\xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF\n");
			printf("\xB3 [ 1 ] - Soma 		      \xB3\n");
			printf("\xB3 [ 2 ] - Subtracao 	      \xB3\n");
			printf("\xB3 [ 3 ] - Multiplicacao       \xB3\n");
			printf("\xB3 [ 4 ] - Transposta 	      \xB3\n");
			printf("\xB3 [ 5 ] - Diagonal Principal  \xB3\n");
			printf("\xB3 [ 6 ] - Fim 		      \xB3\n");
			printf("\xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9\n");
			scanf("%i",&opcao);
			fflush(stdin);
			
			if(opcao > 6 || opcao <= 0){
				system("cls");
				printf("\xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF\n");
				printf("\xB3  Numero Invalido  \xB3 \n");
				printf("\xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9\n");
			}
			
			if(opcao == 6){
				system("cls");
				printf("\xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF\n");
				printf("\xB3 Programa Finalizado \xB3\n");
				printf("\xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9\n");
			}
			
			switch(opcao){
				case 1:
					F1();
					break;
				case 2:
					F2();
					break;
				case 3:
					F3();
					break;
				case 4:
					F4();
					break;
				case 5:
					F5();
					break;
			}
			
		}while(opcao!=6);
}
//==================================FUN플O SOMA=============================================================
int F1(void){
	int m1[5][5], m2[5][5], soma[5][5], i, j;
	
	system("cls");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Dig. n[%i][%i]: ",i,j);
			scanf("%i",&m1[i][j]);
			fflush(stdin);
		}
	}
	printf("\n\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Dig. n2[%i][%i]: ",i,j);
			scanf("%i",&m2[i][j]);
			fflush(stdin);
		}
	}
	
	printf("\n");
	system("cls");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			soma[i][j] = m1[i][j] + m2[i][j];
			printf("%i \t",soma[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			r1[i][j] = soma[i][j];
		}
	}
	
}
//==================================FUN플O SUBTRA플O========================================================
int F2(void){
	int m1[6][6], m2[6][6], subtracao[6][6], i, j;
	
	system("cls");
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("Dig. n[%i][%i]: ",i,j);
			scanf("%i",&m1[i][j]);
			fflush(stdin);
		}
	}
	printf("\n\n");
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("Dig. n2[%i][%i]: ",i,j);
			scanf("%i",&m2[i][j]);
			fflush(stdin);
		}
	}
	
	printf("\n");
	system("cls");
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			subtracao[i][j] = m1[i][j] - m2[i][j];
			printf("%i \t",subtracao[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			r2[i][j] = subtracao[i][j];
		}
	}	
}
//==================================FUN플O MULTIPLICA플O====================================================
int F3(void){
	int m1[3][3], m2[3][3], mult[3][3], i, j;
	
	system("cls");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Dig. n[%i][%i]: ",i,j);
			scanf("%i",&m1[i][j]);
			fflush(stdin);
		}
	}
	printf("\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Dig. n2[%i][%i]: ",i,j);
			scanf("%i",&m2[i][j]);
			fflush(stdin);
		}
	}
	
	printf("\n");
	system("cls");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mult[i][j] = m1[i][j] * m2[i][j];
			printf("%i \t",mult[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			r3[i][j] = mult[i][j];
		}
	}
	
	
}
//====================================DIAGONAL PRINCIPAL====================================================
int F4(void){
	
	int i, j;
	
	system("cls");

//===============SOMA============================
 	for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                printf("%i\t",r1[j][i]);
            }
            printf("\n");
        }
        printf("\n");
//===============SUBTRA플O=======================
 	for(i=0;i<6;i++){
        for(j=0;j<6;j++){
				printf("%i\t",r2[j][i]);
            }
            printf("\n");
        }
        printf("\n");
//===============MULTIPLICA플O===================       
 	for(i=0;i<3;i++){
        for(j=0;j<3;j++){
				printf("%i\t",r3[j][i]);
            }
            printf("\n");
        }
        printf("\n");
}
//====================================DIAGONAL PRINCIPAL====================================================
int F5(void){
	
	int i, j;
	
	system("cls");
	
//===============SOMA============================
 	for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j==i){
                printf("%i\t",r1[i][j]);
            }else{
                printf(" \t");
               }
            }
            printf("\n");
        }
//===============SUBTRA플O=======================
 	for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(j==i){
                printf("%i\t",r2[i][j]);
            }else{
                printf(" \t");
               }
            }
            printf("\n");
        }
//===============MULTIPLICA플O===================       
 	for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(j==i){
                printf("%i\t",r3[i][j]);
            }else{
                printf(" \t");
               }
            }
            printf("\n");
        }
}


