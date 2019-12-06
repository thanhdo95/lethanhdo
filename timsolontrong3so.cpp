#include <stdio.h>
	int main(){
		int a,b,c;
		printf("Nhap a\n");
		scanf("%d", &a);
		printf("Nhap b\n");
		scanf("%d", &b);
		printf("Nhap c\n");
		scanf("%d", &c);
		if(a>b){
			if(a>c){
				printf("Max la %d", a);
			}else{
				printf("Max la %d", c);
			}
			}
		else
			if(b>c){
				printf("Max la %d", b);
			}else{
				printf("Max la %d", c);
			}	
		}
