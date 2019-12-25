#include <stdio.h>
#include <math.h>
double parameter(double a,double b, double c){
	if( (a+b>c) && (a+c>b) && (b+c>a)){
		double p = a + b +c;
		return p;
	}
}
double area(double a,double b, double c){
	if((a+b>c) && (a+c>b) && (b+c>a)){
		double p;
		double p2 = p/2;
		double s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
		return s;
			}		
		}
int main(){
	int a,b,c;
	printf("Nhap a:\n");
	scanf("%d", &a);
	printf("Nhap b:\n");
	scanf("%d", &b);
	printf("Nhap c:\n");
	scanf("%d", &c);
	double p = parameter(a,b,c);
	double s = area(a,b,c);
	if((a+b>c) && (a+c>b) && (b+c>a)){	
		printf("Parameter: %lf\n", p);
		printf("Area: %lf\n", s);
		}else{
		printf("This is not a triangle\n");
		}
	return 0;
}
