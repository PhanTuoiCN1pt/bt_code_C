#include<stdio.h>
#include<math.h> 

int main(){
	
	float a,b,c;
	float D;
    D = b*b-4*a*c;
	printf("he so cua he la:\n",a,b,c);
	scanf("%f%f%f",&a, &b, &c);
	if(a==0 && b!=0){
		printf("nghien cua he la:%f",(-c)/b);
	}
	if(a==0 && b==0){
		printf("pt vo nghiem");
    }
	if(D<0){
		printf("pt vo nghiem");
	}
	if(D==0){
		printf("phuong trinh co nghiem kep la: %0.2f", (-b)/(2*a));
	}
	if(D>0){
		printf("phuong trinh co 2 nghiem phan biet la: %0.2f va %0.2f", (-b + sqrt(D))/(2*a));
	}
	return 0;
}
