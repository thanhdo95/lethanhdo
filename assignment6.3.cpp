#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int ary[n];
	for(int i=0; i<n; ++i)
	{
		scanf("%d", &ary[i]);
	}
	for(int i=0; i<n; ++i)
	{
        if(ary[i] < 0) {
		ary[i] = 0;
		}
	}
	printf("Mang sau khi thay the la:\n");
	for(int i=0;i<n;++i){
		printf("%d\n", ary[i]);	
	}
	return 0;
}
