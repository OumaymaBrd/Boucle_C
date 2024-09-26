#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("\t\t  Saisie et Affichage des Éléments\n\n");
	
	//declaration 
	int n;
	//saisir de l'utilisateur
	printf("Donner moi la dimention du tableau: "); scanf("%d",&n);
	
	//declarer tableau avec la dimention entrer 
	
	int T[n];
	
	//demande a l'utilisateur de saisir le Tableau 
	printf("Donner Moi Votre Case de Tableau: \n\n");
	
	for(int i=0;i<n;i++){
		printf("T[%d]= ",i);
		scanf("%d",&T[i]);
	}
	
	//affichage du tableau 
	
	printf("Votre Tableau est : ");
	for(int i=0;i<n;i++){
		printf("%d | ",T[i]);
	}

}
