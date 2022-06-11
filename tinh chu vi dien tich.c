#include<stdio.h>

int main(){
	int a,b;
	printf("chieu dai va chieu rong cua HCN la:\n",a, b);
	scanf("%d%d", &a, &b);
	if(a==0 || b==0){
		printf("Math ERROR\n");
	}else{
		int S, C;
    	S=a*b; 
	    C=(a+b)/2;
	    printf("dien tich la:%d\n",S) ;
	    if((a+b)%2==0){
		printf("chu vi la:%d", a+b/2) ;
	}
}

	return 0;
}
