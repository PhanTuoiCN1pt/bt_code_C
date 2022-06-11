#include<stdio.h>
#include<math.h>

int main(){
	int n;
	int du;
	int sum=0;
	printf("nhap n<1000:");
	scanf("%d", &n);
	while(n>0){
		du=n%10;
		sum+=du;
		n=n/10;
	}
	printf("tong chu so la: %d\n",sum);
	return 0;
}
