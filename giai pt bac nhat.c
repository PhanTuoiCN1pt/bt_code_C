#include<stdio.h>

int main(){
	float a, b, x;
	printf("nhap a, b:");
	scanf("%f%f",&a, &b);
	if(a==0 && b!=0){
		printf("pt vo nghiem");
	}else if(a==0 && b==0){
		printf("pt vo so nghiem");
	}else{
		x= -b/a;
		printf("nghiem pt la:%0.2f",x);
	}
	return 0; 
} 
