#include<stdio.h>

int main(){
	int a,b,c,d;
	printf("nhap so a,b,c,d:",a,b,c,d);
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int max;
	if(a>b){
		max=a;
	}else if(max>c){
		max=max;
	 }else{
		max=c;
	 }
    if(max>d){
		max=max;
	}else{
		max=d;
	}
	if(a==b && b==c && c==d){
		printf("khong co gia tri lon nhat");
	}else{
		printf("so lon nhat la:%d\n",max);
	}
	
	return 0;
}
