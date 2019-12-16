#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int ary[n];
	for(int i=0; i<n; ++i)
	{
		scanf("%d", &ary[i]);
	}
	int s;
	int a=0;
	for(int i=0; i<n; ++i)
	{	if(ary[i]%2!=0,i%2==0)
		{
		s+= ary[i];
		++a;
		}
	}
	printf("trung binh cong cua mang la: %f\n",(float)s/a);
	return 0;
}
