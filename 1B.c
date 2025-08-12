#include <stdio.h>
#include <ctype.h>

int main()
{
	char a[30], n;
	int sname = 0, dcode = 0, serialnum = 0, fournum = 0;
	
	printf("Enter the vehicle number: ");
	scanf("%c", a);
	
	if((isalpha(a[0])) && isalpha(a[1]))
		sname = 1;
	else
		printf("REJECTED beacuse your State Name is not proper");
	
	if((isdigit(a[2])) && isdigit(a[3]))
		dcode = 1;
	else
		printf("REJECTED beacuse your District Code is not proper");
	
	if((isalpha(a[4])) && isalpha(a[5]))
		serialnum = 1;
	else
		printf("REJECTED beacuse your State Name is not proper");
	
	
	if((isdigit(a[6])) && isdigit(a[7]) && isdigit(a[8])) && isdigit(a[9])
		fournum = 1;
	else
		printf("REJECTED beacuse your Vehicle Number is not proper");
		
	if (sname == 1)
	
	return 0;
}
