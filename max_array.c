#include <stdio.h>

int main() {
    int n, max;
    
    // Demander la taille du tableau à l'utilisateur
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
    
    int arr[n];  // Déclarer un tableau de taille n
    
    // Remplir le tableau avec les valeurs de l'utilisateur
    printf("Entrez les éléments du tableau : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialiser max avec le premier élément du tableau
    max = arr[0];
    
    // Parcourir le tableau pour trouver le maximum
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Mettre à jour max si un élément plus grand est trouvé
        }
    }
    
    // Afficher le résultat
    printf("Le maximum est : %d\n", max);
    return 0;
}
