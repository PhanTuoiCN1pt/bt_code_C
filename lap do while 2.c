#include<stdio.h>

int main(){
	int sum=0, i=1;
	do{
		sum=sum+i;
		++i;
	}while(i<10);
	printf("sum=%d\n", sum);
	return 0;
}
