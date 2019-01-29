#include <stdio.h>
 
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int c[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&c[i]);
	}
	for(int i=0;i<a;i++)
	{
		printf("%d ",c[(b-i)%a]);
	}
	 
   return 0;
}
