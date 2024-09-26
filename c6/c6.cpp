#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t Programme Affiche la Multiplication des elements\n\n");
	
	//declaration 
	int facteur,dim;
	
	//demande de saisir 
	printf("donner moi la dimention du tableau : "); scanf("%d",&dim);
	printf("donner moi la facteur de multiplication: "); scanf("%d",&facteur);
	
	//declaration du tableau 
	int T[dim];
	//demande de saisir du tableau 
	for(int i=0;i<dim;i++){
		printf("T[%d]= ",i);
		scanf("%d",&T[i]);
	}
	
	//traitement avec l'affichage 
	printf("Le nouveau Tableau avec le facteur %d est le suivant : ",facteur);
	for(int i=0;i<dim;i++){
		printf("%d | ",T[i]*facteur);
	}
}
