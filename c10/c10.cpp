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
	int ch , found;
	printf("donner moi l'element chercher: "); scanf("%d",&ch);
for (int i = 0; i < n; i++) {
    if (T[i] == ch) {
        printf("Votre element recherche existe dans la case %d\n", i);
        found = 1;  
        break;      
    }
}

if (!found) {
    printf("Cet element n'existe pas dans le tableau.\n");
}
	}

