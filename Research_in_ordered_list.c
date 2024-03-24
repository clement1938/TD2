#include <stdio.h>

// Fonction pour effectuer la recherche binaire
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Vérifier si x est présent au milieu
        if (arr[m] == x)
            return m;

        // Si x est plus grand, ignorer la moitié gauche
        if (arr[m] < x)
            l = m + 1;

        // Si x est plus petit, ignorer la moitié droite
        else
            r = m - 1;
    }

    // Si l'élément n'est pas présent dans le tableau
    return -1;
}

int main(void) {
    int arr[] = {2, 3, 4, 10, 40}; // Le tableau doit être trié
    int n = sizeof(arr) / sizeof(arr[0]); // En C on parle en octet, ici on prend la taille total puis divisons par un élément
    int x = 10; // La valeur à chercher
    int result = binarySearch(arr, 0, n - 1, x);
    
    (result == -1) ? printf("L'élément n'est pas présent dans le tableau\n")    // Une manière plus concise de faire un if-else
                   : printf("L'élément est présent à l'indice %d\n", result);
    
    return 0;
}
