#include<stdio.h>
int main(){
	int n, i, T[30], max;
	printf("Entrez le nombre d'éléments dans le tableau: ");
	scanf("%d",&n);	
	printf("\nEntrez les éléments du tableau: \n");	
    for(i=0; i<n; i++){
   		printf("Entrer l'element %d :", i+1);
   		scanf("%d",&T[i]);
	}
	
	max = T[0];
	for(i=0; i<n; i++){
   		if(T[i] > max)
   			max = T[i];
	}
	
	printf("\nLe max est : %d\n", max);
}