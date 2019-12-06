#include <stdio.h>
#include <math.h>
int main(){

float a,b,c,d;
printf("Nhap a\n");
scanf("%f",&a);

printf("Nhap b\n");
scanf("%f",&b);

printf("Nhap c\n");
scanf("%f",&c);

if(a==0)
{
if(b==0)
{
if(c==0)
printf("\n Phuong trinh da cho co vo so nghiem");
else
printf("\n Phuong trinh da cho vo nghiem");
}
else
printf("\n Phuong trinh da cho co nghiem la: %.2f",-c/b);
}
else
{
d=b*b-4*a*c;
if (d<0)
printf("phuong trinh da cho vo nghiem!!!");
else if (d=0)
printf("phuong trinh da cho co nghiem kep la: %.2f",-b/(2*a));
else
printf("phuong trinh da cho co 2 nghiem la: %.2f,%.2f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));}
}


