#include<stdio.h>

 int main (){
 	int value;
 	do{
 		printf("nhap vao gt >0\n");
 		scanf("%d",&value);
	 }while(value<0);
	 printf("gia tri tm la:%d",value);
 	return 0;
 }
