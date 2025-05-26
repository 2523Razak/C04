#include <stdio.h>

int main() {
    int n;
    // Lire le nombre d'éléments (première ligne de l'entrée)
    scanf("%d", &n);
    
    int arr[n];
    // Lire les éléments du tableau (deuxième ligne de l'entrée)
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialiser max avec le premier élément
    int max = arr[0];
    
    // Parcourir le tableau pour trouver le maximum
    for (int i = 1; i < n; i++) {
        // Si on trouve un élément plus grand, on met à jour max
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Afficher le résultat comme dans l'exemple
    printf("Le maximum est : %d\n", max);
    return 0;
}
