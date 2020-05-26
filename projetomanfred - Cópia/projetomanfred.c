#include <stdio.h>

void soma();
void subtracao();
void multiplicacao();
void diagonal_principal();
int r1[5][5];
int r2[6][6];
int r3[3][3];

int main(void){
	
	char opcao;
	int sum1[5][5], sum2[5][5], sub1[6][6], sub2[6][6] , mult1[3][3], mult2[3][3];
	
    do{
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Mutiplicacao\n");
        printf("4 - Transposta\n");
        printf("5 - Diagonal Principal\n");
        printf("6 - Fim\n\n");
        scanf("%c",&opcao);
        fflush(stdin);
		switch(opcao){
			case '1':
				soma(sum1,sum2);
				break;
			case '2':
				subtracao(sub1,sub2);
				break;
			case '3':
				multiplicacao(mult1,mult2);
				break;
			case '4':
				break;
			case '5':
				diagonal_principal();
				break;
		}	
	}while(opcao!='6');
	return 0;
}
//==================================FUN플O SOMA====================================================
void soma(){
	
	int i, j, a[5][5], b[5][5], r[5][5];
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite a[%i][%i]:",i,j);
			scanf("%i",&a[i][j]);
			fflush(stdin);
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite b[%i][%i]:",i,j);
			scanf("%i",&b[i][j]);
			fflush(stdin);
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			r[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%i\t",r[i][j]);
		}
		printf("\n");
	}
	r1[5][5] = r[i][j];
}
//==================================FUN플O SUBTRA플O====================================================
void subtracao(){
	
	int i, j, a[6][6], b[6][6], r[6][6];
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("Digite a[%i][%i]:",i,j);
			scanf("%i",&a[i][j]);
			fflush(stdin);
		}
	}
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("Digite b[%i][%i]:",i,j);
			scanf("%i",&b[i][j]);
			fflush(stdin);
		}
	}
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			r[i][j]=a[i][j]-b[i][j];
		}
	}
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("%i\t",r[i][j]);
		}
		printf("\n");
	}
}
//====================================FUN플O MULTIPLICA플O====================================================
void multiplicacao(){
	
	int i, j, a[3][3], b[3][3], r[3][3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite a[%i][%i]:",i,j);
			scanf("%i",&a[i][j]);
			fflush(stdin);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite b[%i][%i]:",i,j);
			scanf("%i",&b[i][j]);
			fflush(stdin);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			r[i][j]=a[i][j]*b[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%i\t",r[i][j]);
		}
		printf("\n");
	}

}
//====================================DIAGONAL PRINCIPAL====================================================
void diagonal_principal(){

	char opcao;

	do{
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Mutiplicacao\n");
        printf("4 - Fim\n");
        scanf("%c",&opcao);
        fflush(stdin);
		switch(opcao){
			case '1':
				printf("%i",r1[5][5]);			
				break;
//			case '2':
//				subtracao(sub1,sub2);
//				break;
//			case '3':
//				multiplicacao(mult1,mult2);
//				break;
			case '4':
				printf("FIM");
				break;
		}	
	}while(opcao!='4');

}

