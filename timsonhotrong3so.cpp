#include <stdio.h>
	int main(){
		int a;
		int b;
		int c;
		printf("Nhap a\n");
		scanf("%d", &a);
		printf("Nhap b\n");
		scanf("%d", &b);
		printf("Nhap c\n");
		scanf("%d", &c);
		if(a<b){
			if(b<c){
				printf("Min la %d", a);
			}else{
				printf("Min la %d", c);
			}
			}
		else
			if(b<c){
				printf("Min la %d", b);
			}else{
				printf("Min la %d", c);
			}	
		}
