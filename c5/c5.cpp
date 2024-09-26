#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t Programme Pour Trouver le Minimum \n\n");
	
		//declaration de la dimention de tableau 
	int dimention;
	
	//demande l'utilisateur pour saisir la dimention 
	
	printf("donner moi la dimention du tableau: "); scanf("%d",&dimention);
	
	//declaration du tableau avec la dimention demander 
	int T[dimention];
	//demande a l'utilisateur les elements du tableau 
	
	for(int i=0;i<dimention;i++){
		printf("T[%d]= ",i);
		scanf("%d",&T[i]);
	}
	
	//traitement 
	int min=T[0];
	for(int i=0;i<dimention;i++){
		if(min>T[i]) min=T[i];
	}
	
	//afichage 
	
	printf("Le Maximum a partir de cette tableau est %d ",min);
	
	
}
