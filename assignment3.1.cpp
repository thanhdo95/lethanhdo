#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	printf("Nhap 2 so :\n ");
	scanf("%f", &a);
	scanf("%f", &b);
	if(a=b){
		float x;
		x =(float) a/b;
		scanf("%f", &x);
		printf("Ket qua la: %f\n", &x);
	}else{
		if(a>b){
			printf("Ket qua la: %f\n, &x");
		}else{
			float y;
			y =(float) a*b;
			scanf("%f", &y);
			printf("Ket qua la: %f\n", &y);
		}
	}
}
