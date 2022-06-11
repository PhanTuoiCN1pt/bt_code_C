#include<stdio.h>
 
int main(){
	float x,y;
	printf("nhap x va y:");
	scanf("%f%f",&x,&y);
    printf("gia tri A la:%0.2f\n", x*x + y*y);
    printf("gia tri B la:%0.2f\n", (x+y)*(x+y));
    printf("gia tri C la:%0.2f", (x-y)*(x-y));
	return 0;
} 
