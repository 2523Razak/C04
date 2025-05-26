#include <stdio.h>

int main() {
    int n;
    // Lire la taille du tableau
    scanf("%d", &n);
    
    int arr[n];
    // Lire les éléments
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialiser les deux variables pour stocker les deux plus grands
    int max = arr[0], second = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            // Si on trouve un nouveau max, l'ancien max devient second
            second = max;
            max = arr[i];
        } else if (arr[i] > second && arr[i] != max) {
            // Mettre à jour second si on trouve un nombre entre max et second
            second = arr[i];
        }
    }
    
    // Afficher le résultat demandé
    printf("Le deuxième plus grand nombre est : %d\n", second);
    return 0;
}
