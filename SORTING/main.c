#include<stdio.h>
#define OKAY 1
#include"main.h"
#include"Selection_Sort.c"
#include"Bubble_Sort.c"
#include"Insertion_Sort.c"
int main()
{
	int choose;
	printf("\nYou are here to sort the integer elements of an array.\n");
	printf("\nSelect the way to sort the elements:");
	printf("\n1. Selection Sort");
	printf("\n2. Bubble Sort");
	printf("\n3. Insertion Sort\n");
	do{
		scanf("%d",&choose);
		switch(choose){
			case 1:
				selectionsort();
				break;
			case 2:
				bubblesort();
				break;
			case 3:
				insertionsort();
				break;
			default:
				printf("\nWrong Input! Please try again.\n");
		}
	}
	while(choose > 0 && choose < 4);
	return 0;
}