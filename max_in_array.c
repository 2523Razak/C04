#include <stdio.h>

int main() {
    // Lire la taille du tableau
    int taille;
    scanf("%d", &taille); // On lit le premier nombre (ex: 5)
    
    // Créer et remplir le tableau
    int tableau[taille]; // On crée un tableau de la taille lue
    
    for (int i = 0; i < taille; i++) {
        scanf("%d", &tableau[i]); // On remplit le tableau (ex: 2 8 3 5 1)
    }
    
    // Chercher le maximum
    int max = tableau[0]; // On part du premier nombre
    
    for (int i = 1; i < taille; i++) {
        // Si on trouve un nombre plus grand, il devient le nouveau max
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }
    
    // Afficher le résultat
    printf("Le maximum est : %d\n", max); // Exactement comme dans l'exemple
    
    return 0;
}
