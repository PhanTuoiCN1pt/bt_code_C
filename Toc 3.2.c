#include<stdio.h>
#include<math.h>
int main(){
	float r;
	const float PI=3.14159;
	printf("nhap ban kinh duong tron:");
	scanf("%f",&r);
	if(r<=0){
		printf("ERROR");
	}else{
		printf("chu vi M:%0.2f\n", 2*PI*r);
		printf("dien tich S:%0.2f", PI*r*r);
	}
	
	return 0;
}
