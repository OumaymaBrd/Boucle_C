#include<stdio.h>
#include<stdlib.h>

int main() {
    printf("\t\tProgramme de Fusion de Deux Tableaux\n\n");

    
    int n;
    printf("Donnez-moi la dimension des tableaux : ");
    scanf("%d", &n);

    // Déclaration des tableaux
    int T[n], B[n];
    
    // Saisie du premier tableau
    printf("Donnez-moi les elements entiers du 1er tableau :\n");
    for (int i = 0; i < n; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    // Saisie du deuxième tableau
    printf("Donnez-moi les elements entiers du 2eme tableau :\n");
    for (int i = 0; i < n; i++) {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    // Fusion des deux tableaux
    int dim = 2 * n;
    int H[dim];

    // Copie du tableau T dans H
    for (int j = 0; j < n; j++) {
        H[j] = T[j];
    }

 
    for (int j = 0; j < n; j++) {
        H[n + j] = B[j];
    }

    // Affichage du tableau fusionné
    printf("\nTableau fusionne :\n");
    for (int i = 0; i < dim; i++) {
        printf("%d | ", H[i]);
    }

    printf("\n");

    return 0;
}

