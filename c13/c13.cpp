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
	for(int i=0;i<n;i++){
		if(T[i]%2!=0) printf("%d | ",T[i]);
	}
	
}
