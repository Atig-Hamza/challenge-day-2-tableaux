#include <stdio.h>
 
int main() {
   int i, n, somme;
   int t[30];
 
   printf(" Entrez le nombre d'éléments dans le tableau: ");
   scanf("%d", &n);
 
   printf(" Entrez les éléments du tableau: ");
   for (i = 0; i < n; i++)
      scanf("%d", &t[i]);
 
   somme = 0;
   for (i = 0; i < n; i++)
      somme = somme + t[i];
 
   printf(" La somme = %d", somme);
 
   return (0);
}