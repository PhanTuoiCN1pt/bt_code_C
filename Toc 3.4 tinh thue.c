#include<stdio.h>

int main(){
	float a, b, c;
	printf("Gia khong thue:",a);
	scanf("%f",&a);
	printf("Can nang:",b);
	scanf("%f",&b);
	printf("Thue:",c);
	scanf("%f", &c);
	// tinh tong 
	printf("Tong gia tri sau thue la:%0.2f",a*b*(c+1));
	return 0;
}
