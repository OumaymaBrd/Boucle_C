#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t Programme Affiche La Somme des elements du Tableau\n\n");
	
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
	
	//declaration de la somme avec le traitement 
	int somme=0;
	for(int i=0;i<dimention;i++){
		somme=somme+T[i];
	}
	
	//affichage de la somme 
	
	printf("La somme de Votre entiers Entrer est : %d",somme);
	
	
}
