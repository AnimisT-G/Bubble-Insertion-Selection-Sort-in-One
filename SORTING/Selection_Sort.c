/*
This program shows the minimum passes required to completely sort the list of integers.
*/
#include<stdio.h>
#ifndef OKAY
#include"main.h"
#define selectionsort main
#endif
int selectionsort()
{
	int n, i, j, temp, p;
	printf("\nSelection Sort:\n");
	elements(&n);
	int a[n];
	array_elements(a,n);
	print_elements(a,n);
	for(i = 0; i < n-1; i++){
		temp = a[i];
		p = i;
		for(j = i+1; j < n; j++)
			if(a[j] < temp){
				temp = a[j];
				p = j;
			}
		if(i != p){
			temp = a[i];
			a[i] = a[p];
			a[p] = temp;
		}
		for(j = i+1; j < n-1 && a[j] <= a[j+1]; j++);
		if(j == n-1 || i == n-2)
			printf("\nFinal Pass %d:",i+1);
		else
			printf("\nPass %d:\t",i+1);
		print_elements(a,n);
		if(j == n-1)
			break;
	}
	getch();
	return 0;
}