#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("\t\t Programme qui Copie d'un Tableau\n\n");
	
		int n;
	printf("Donner moi la dimention du tableau: "); scanf("%d",&n);
	//declaration du tableau 
	int T[n];
	for(int i=0;i<n;i++){
		printf("T[%d]= ",i+1);
		scanf("%d",&T[i]);
	}
	//copie 
	int B[n];
	for(int i=0;i<n;i++){
		B[i]=T[i];
	}
	printf("Votre Tableaux est copie dans le Tableau : ");
	for(int i=0;i<n;i++) printf("%d | ",B[i]);
}
