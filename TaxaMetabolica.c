#include <stdio.h>
#include <stdlib.h>
#include <locale.h>		

void calculoImc(float alturaf,float altura, float peso);

void mostrartbm(int tmb, float peso, float altura, int idade, int sexocalorias, float lvatividade);

int main(){
	
setlocale(LC_ALL, "Portuguese");

float peso;
float altura;
float alturaf;
float imc;
//----------
int idade;
int tmb;
int time;
//----------
char sexo[2];

	printf("Digite F para feminino ou M para masculino \nQual o seu sexo ?: ");
	scanf("%s",&sexo);
	
		if (strcmp (sexo, "f") == 0 || strcmp (sexo, "F") == 0){
			
			printf("Digite o seu peso: ");
			scanf("%f",&peso);
			printf("Digite a sua altura em cm: ");
			scanf("%f",&altura);
			printf("Digite a sua idade: ");
			scanf("%d",&idade);
			printf("Tempo de atividades\n digite:\n 1-sedentario\n 2-pratica exercicios de 1 a 3 vezes porsemana\n 3-pratica exercicios de 3 a 5 vezes por semana\n 4-pratica exercicios de 6 a 7 vezes por semana \n 5-Todos os dias \n ");
			scanf("%d",&time);

				if(time==1){
			
					mostrartbm(tmb, peso, altura, idade, -161,1.2);
					calculoImc(alturaf, altura, peso);
	
				}
				
				else if(time==2){
				
					mostrartbm(tmb, peso, altura, idade, -161,1.375);
					calculoImc(alturaf, altura, peso);
				}
				
				else if(time==3){
					
					mostrartbm(tmb, peso, altura, idade, -161,1.5);
					calculoImc(alturaf, altura, peso);
				}
				else if(time==4){
					
					mostrartbm(tmb, peso, altura, idade, -161,1.725);
					calculoImc(alturaf, altura, peso);
				}
				else if(time==5){
					
					mostrartbm(tmb, peso, altura, idade, -161,1.9);
					calculoImc(alturaf, altura, peso);
				}
				else{
					
				printf("Nenhuma das opções anteriores");
				}
		}
		
		else if(strcmp (sexo, "M") == 0 || strcmp (sexo, "m") == 0){
			
			printf("Digite o seu peso: ");
			scanf("%f",&peso);
			printf("Digite a sua altura em cm: ");
			scanf("%f",&altura);
			printf("Digite a sua idade: ");
			scanf("%d",&idade);
			printf("Tempo de atividades\n digite:\n 1-sedentario\n 2-pratica exercicios de 1 a 3 vezes porsemana\n 3-pratica exercicios de 3 a 5 vezes por semana\n 4-pratica exercicios de 6 a 7 vezes por semana \n 5-Todos os dias \n ");
			scanf("%d",&time);
			
				if(time==1){
			
					mostrartbm(tmb, peso, altura, idade, 5, 1.2);
					calculoImc(alturaf, altura, peso);
				}
				
				else if(time==2){
				
					mostrartbm(tmb, peso, altura, idade, 5, 1.375);
					calculoImc(alturaf, altura, peso);
				}
				
				else if(time==3){
					
					mostrartbm(tmb, peso, altura, idade, 5, 1.5);
					calculoImc(alturaf, altura, peso);	

				}
				else if(time==4){
					
					mostrartbm(tmb, peso, altura, idade, 5, 1.725);
					calculoImc(alturaf, altura, peso);
					
				}
				else if(time==5){
					
					mostrartbm(tmb, peso, altura, idade, 5, 1.9);
					calculoImc(alturaf, altura, peso);
								
				}
				else{
					
				printf("Nenhuma das opções anteriores");
				}
		}
		
		else{
			
		printf("Para feminino use F\nPara masculino use M \n");
		}
getch();	
	
return 0;
}

void calculoImc(float alturaf,float altura, float peso ){
	alturaf=(altura/100);				
	printf("O seu imc é de -> %0.1f",peso/(alturaf*alturaf));
}
void mostrartbm(int tmb, float peso, float altura,int idade, int sexocalorias, float lvatividade){
	tmb=(((10*peso)+(6.25*altura)-(5*idade))+sexocalorias)*lvatividade;
	printf("A sua taxa metabólica basal e de:%d \n",tmb);
}

