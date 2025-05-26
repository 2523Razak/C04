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
    
    // Tri à bulles simple
    for (int i = 0; i < n-1; i++) {
        // Chaque passage fait "remonter" le plus grand élément
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Échanger les éléments si dans le mauvais ordre
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // Afficher le tableau trié comme demandé
    printf("Tableau trié : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
