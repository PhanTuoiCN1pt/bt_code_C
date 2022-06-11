#include<stdio.h>

int main(){
	int n, c,fact=1;
	do{
		printf("nhap n<8:");
		scanf("%d",&n);
		if(n>=8){
			printf("nhap n<8 !\n");
		}else{
			for(c=1;c<=n;c++){
				fact*=c;
			}
			printf("giai thua cua %d = %d", n,fact);
		}
	}while(n>=8);
	return 0;
}
