#include<stdio.h>

int main(){
	float r;
	const float PI=3.14375f ;
	printf("nhap ban kinh hinh tron:",r);
	scanf("%f", &r);
	if(r<=0){
		printf("nhap r>0");
	}else{
		printf("chu vi hinh tron ban kinh %0.2f = %0.2f\n",r, 2*PI*r);
		printf("dien tich hinh tron ban kinh %0.2f = %0.2f",r, PI*r*r);
	}
	return 0;
}
