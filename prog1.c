#include<stdio.h>
main ()
{
	int n,i,fact=1;
	printf("enter the number of terms");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
{
	fact=fact*i;
}
	printf("factroial=%d",fact);
}

