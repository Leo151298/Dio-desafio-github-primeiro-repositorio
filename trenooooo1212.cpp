#include<stdio.h>

int i,conta,conte,contr;
char nome[40];
float n1,n2,n3,n4,med;

int main(){


for(i=0;i<5;i++){

printf("Digite o nome do aluno\n");
scanf(" %[^\n]",&nome);
printf("Digite a primeira nota\n");
scanf(" %f",&n1);
printf("Digite a segunda nota\n");
scanf(" %f",&n2);
printf("Digite a terceira nota\n");
scanf(" %f",&n3);
printf("Digite a quarta nota\n");
scanf(" %f",&n4);


med=(n1+n2+n3+n4)/4;

if(med>=7){
	conta++;
	printf("\nO aluno: %s\n",nome);
	printf("\nEsta aprovado com a nota %.2f\n",med);
}

else if(med>=5&&med<7){
	conte++;
	printf("\nO aluno: %s\n",nome);
	printf("\nEsta de exame pois nao atingiu a media necessaria com a nota %.2f\n",med);
}

else if(med<5){
	contr++;
	printf("\nO aluno: %s\n",nome);
	printf("\nEsta reprovado com a nota %.2f\n",med);
}

	
}


printf("\nAlunos aprovados %d\n",conta);
printf("\nAlunos de exame %d\n",conte);
printf("\nAluns reprovados %d\n",contr);	
return 0;	
}

