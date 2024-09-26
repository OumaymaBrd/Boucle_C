#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t Programme Afficher les Éléments impair: \n\n");
	
	//emtrer le tableaux
	int n;
	printf("Donner moi la dimention du tableau: "); scanf("%d",&n);
	//declaration du tableau 
	int T[n];
	for(int i=0;i<n;i++){
		printf("T[%d]= ",i+1);
		scanf("%d",&T[i]);
	}
	
	//traitement 
	float moyenne,somme=0;
	for(int i=0;i<n;i++) somme+=T[i];
	moyenne=somme/n;
	printf("le Moyenne des entier entrer est %.2f ",moyenne);

	
}
