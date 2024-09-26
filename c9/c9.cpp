#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("\t\t Progamme Pour l'Inversion d'un Tableau\n\n");
	int n;
	printf("Donner moi la dimention du tableau: "); scanf("%d",&n);
	//declaration du tableau 
	int T[n];
	for(int i=0;i<n;i++){
		printf("T[%d]= ",i+1);
		scanf("%d",&T[i]);
	}
	//L'inverse de votre tableau est 
	for(int i=n-1;i>=0;i--) printf("%d| ",T[i]);
}
