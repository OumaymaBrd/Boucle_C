#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("\t\t Programme Trier un Tableau en Ordre Croissant\n\n");
	
	int n;
	printf("Donner moi la dimention du tableau: "); scanf("%d",&n);
	//declaration du tableau 
	int T[n];
	for(int i=0;i<n;i++){
		printf("T[%d]= ",i+1);
		scanf("%d",&T[i]);
	}
	//trier le tableau 
	int max;
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(T[i]>T[j]){
				max=T[i];
				T[i]=T[j];
				T[j]=max;
			}
		}
	}

	//affichage 
	for(int i=0;i<n;i++){
		printf("%d | ",T[i]);
		
	}
}
