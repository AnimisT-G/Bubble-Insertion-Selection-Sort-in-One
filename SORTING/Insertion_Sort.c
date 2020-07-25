/*
This program shows the minimum passes required to completely sort the list of integers.
*/
#include<stdio.h>
#ifndef OKAY
#include"main.h"
#define insertionsort main
#endif
int insertionsort()
{
	int n, i, j, temp;
	printf("\nInsertion Sort:\n");
	elements(&n);
	int a[n];
	array_elements(a,n);
	print_elements(a,n);
	for(i = 1; i < n; i++){
		for(j = i; j > 0 && a[j] < a[j-1]; j--){
			temp = a[j];
			a[j] = a[j-1];
			a[j-1] = temp;
		}
		for(j = i; j < n-1 && a[j] < a[j+1]; j++);
		if(j != n-1)
			printf("\nPass %d:\t",i);
		else
			printf("\nFinal Pass %d:",i);
		print_elements(a,n);
		if(j == n-1)
			break;
	}
	getch();
	return 0;
}