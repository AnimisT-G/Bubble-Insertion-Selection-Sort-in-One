void print_elements(int *a, int n){
	int i = 0;
	while(i < n)
		printf("\t[ %d ]",a[i++]);
}
void elements(int *p){
	printf("\nEnter the no. of elements in the list: ");
	scanf("%d",p);
}
void array_elements(int *a, int n){
	int i;
	printf("\nEnter the elements in the list:\n");
	for(i = 0; i < n; i++)
		scanf("%d",&a[i]);
	printf("\nOriginal:");
}