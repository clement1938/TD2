#include <stdio.h>
#include <time.h>

int main() {
    // Enregistre le temps de départ
    clock_t start = clock();
    clock_t diff;
    int sec = 0; // Pour garder une trace des secondes écoulées

    printf("Decompte des secondes depuis l'execution:\n");

    while(1) { // Boucle infinie pour continuer à compter
        // Calcul de la différence de temps écoulé
        diff = clock() - start;
        
        // Convertir en secondes
        int new_sec = diff / CLOCKS_PER_SEC;

        // Vérifie si une nouvelle seconde s'est écoulée
        if (new_sec > sec) {
            sec = new_sec; // Met à jour le compteur de secondes
            printf("%d\n", sec); // Imprime le nombre de secondes écoulées
        }
        
        // Optionnel: Condition pour arrêter la boucle après un certain temps
        // if (sec >= 10) break; // Arrête après 10 secondes
        // Sinon Cltr+C pour arrêter la boucle
    }

    return 0;
}
