/*
This program shows the minimum passes required to completely sort the list of integers.
*/
#include<stdio.h>
#ifndef OKAY
#include"main.h"
#define bubblesort main
#endif
int bubblesort()
{
	int n, i, j, temp, l;
	printf("\nBubble Sort:\n");
	elements(&n);
	int a[n];
	array_elements(a,n);
	print_elements(a,n);
	for(i = 0; i < n-1; i++){
		l = 0;
		for(j = 0; j < n-i-1; j++)
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
			else
				l++;
		printf("\n");
		if(l == j){
			printf("Final Pass %d:",i+1);
		}
		else
			printf("Pass %d:\t",i+1);
		print_elements(a,n);
		if(l == j)
			break;
	}
	getch();
	return 0;
}