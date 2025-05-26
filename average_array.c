#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;  // Initialiser la somme à 0
    
    // Demander la taille du tableau
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
    
    int arr[n];  // Déclarer le tableau
    
    // Remplir le tableau et calculer la somme en même temps
    printf("Entrez les éléments du tableau : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Ajouter chaque élément à la somme
    }
    
    // Calculer et afficher la moyenne
    float average = sum / n;
    printf("La moyenne est : %.1f\n", average);
    return 0;
}
