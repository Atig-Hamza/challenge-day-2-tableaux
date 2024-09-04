#include <stdio.h>

int main() {
    int n;
    int tableau[n];
    printf("Combien d'éléments voulez-vous saisir ? ");
    scanf("%d", &n);
    printf("Veuillez saisir %d éléments:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
    printf("Les éléments du tableau sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    return 0;
}
