#include<stdio.h>

int main(){
	int n,c,fact=1;
	printf("nhap n:");
	scanf("%d",&n);
    if(n>=8){
		printf("nhap n<8\n");
	} else{
		for(c=1;c<=n;c++){
			fact*=c;
		}
		printf("giai thua cua %d la: %d\n",n,fact);
	}

	return 0; 
} 
