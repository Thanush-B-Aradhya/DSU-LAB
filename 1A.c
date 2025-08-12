#include <stdio.h>

int main()
{
	int a[30], pos, n, ele, i;
	
	printf("Enter the number of elements for first array: ");
	scanf("%d", &n);
	printf("Enter %d elements of first array: ", n);
	for (i=0; i<n; i++)
		scanf("%d", &a[i]);
		
	printf("Enter the element to insert: ");
	scanf("%d", &ele);	
			
	printf("Enter the position to insert the element: ");
 	scanf("%d", &pos);
 	
 	for (i = n; i >= pos; i--)
 		a[i+1] = a[i];
 	
 	a[pos] = ele;
 	
	printf("The array after insertion is: ");
	for (int i=0; i<n+1; i++)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}
