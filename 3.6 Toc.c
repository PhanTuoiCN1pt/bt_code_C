#include<stdio.h>

int main (){
	float x,y;
	printf("nhap vao x, y:");
	scanf("%f%f",&x,&y);
	// tinh toan
	printf("gia tri F = Y^6 + XY^5 + X^2Y^4 + X^3Y^3 + X^4Y^2 + X^5Y + X^6 la:%f",y*y*y*y*y*y+x*y*y*y*y*y+x*x*y*y*y+x*x*x*x*y*y+x*x*x*x*x*y+x*x*x*x*x*x); 
	
	return 0; 
} 
