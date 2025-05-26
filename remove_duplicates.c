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
    
    // new_size représente la taille du tableau sans doublons
    int new_size = 1; // On commence avec le premier élément
    
    for (int i = 1; i < n; i++) {
        int duplicate = 0; // Flag pour détecter les doublons
        
        // Vérifier si l'élément existe déjà dans la nouvelle portion
        for (int j = 0; j < new_size; j++) {
            if (arr[i] == arr[j]) {
                duplicate = 1;
                break;
            }
        }
        
        // Si pas un doublon, l'ajouter à la portion unique
        if (!duplicate) {
            arr[new_size] = arr[i];
            new_size++;
        }
    }
    
    // Afficher le résultat comme dans l'exemple
    printf("Après suppression des doublons : ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
