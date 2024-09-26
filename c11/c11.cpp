#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t Programme Rechercher un Élément dans un elements \n\n");
	
	//emtrer le tableaux
	int n;
	printf("Donner moi la dimention du tableau: "); scanf("%d",&n);
	//declaration du tableau 
	int T[n];
	for(int i=0;i<n;i++){
		printf("T[%d]= ",i+1);
		scanf("%d",&T[i]);
	}
	
	//chercher
		int v,t=0,indice;
	printf("Donner moi la valeur qui vaoulais changer dans le tableau: ");scanf("%d",&v);
	//
	int nv;
	printf("Donner moi le nouveaux valeur: "); scanf("%d",&nv);
	
	for(int i=0;i<n;i++){
		if(T[i]==v) {
			indice=i;
		t++; 	
		break;
		}
	}
	if(t!=0) {
		int cmp;
		cmp=T[indice];
		T[indice]=nv;	
	}else{
		printf("La valeur entrer n'est pas existe dans votre Tableau ");
	}
	
	//affichage 
	printf("Nouveaux tableau est : ");
	for(int i=0;i<n;i++){
		printf("%d | ",T[i]);
	}
	
	
	
	
	
	
	
	
}
