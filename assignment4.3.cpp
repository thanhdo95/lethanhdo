#include <stdio.h>
#include <math.h>
int main(){
	printf("kiem tra so nguyen to: \n");
	int n;
	printf("n =");
	scanf("%d",&n);
	if(n<2){
		printf("n khong phai la so nguyen to",n);
	}
	int i = 0;
	for (int uoc=2; uoc<=sqrt(n);++uoc){
		if(n%uoc==0){
			i++;
		}
	}
	if(i==0){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong phai la so nguyen to",n);
	}
	return 0;
	}
	
