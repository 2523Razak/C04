#include <stdio.h>

int main() {
    /* Étape 1 : Lire la taille du tableau */
    int taille;  // Variable pour stocker combien de nombres on va lire
    scanf("%d", &taille);  // On lit le premier nombre (ex: 5 dans l'exemple)
    
    /* Étape 2 : Lire tous les nombres */
    int tableau[100];  // On crée un tableau assez grand (on suppose max 100 nombres)
    
    for (int i = 0; i < taille; i++) {
        scanf("%d", &tableau[i]);  // On remplit le tableau (ex: 2 8 3 5 1)
    }
    
    /* Étape 3 : Chercher le plus grand nombre */
    int max = tableau[0];  // On commence avec le premier nombre
    
    for (int i = 1; i < taille; i++) {
        // Si on trouve un nombre plus grand que notre max actuel...
        if (tableau[i] > max) {
            max = tableau[i];  // ...alors ce nombre devient le nouveau max
        }
    }
    
    /* Étape 4 : Afficher le résultat EXACTEMENT comme dans l'exemple */
    printf("Le maximum est : %d\n", max);
    
    return 0;
}
