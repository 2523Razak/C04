#include <stdio.h>

int main() {
    int n;
    // Lire le nombre d'éléments
    scanf("%d", &n);
    
    int arr[n];
    float sum = 0;
    
    // Lire les éléments et calculer la somme
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Ajouter chaque nombre à la somme
    }
    
    // Calculer et afficher la moyenne avec 1 décimale
    printf("La moyenne est : %.1f\n", sum / n);
    return 0;
}
