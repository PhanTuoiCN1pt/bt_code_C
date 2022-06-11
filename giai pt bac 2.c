#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,x1,x2,x,delta;
	printf("nhap he so pt bac 2:");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0){
		if(a==0 && b!=0){// pt bac 1 
		printf("pt vo nghiem");
	    }else if(a==0 && b==0){
		printf("pt vo so nghiem");
	    }else{
		x= -b/a;
		printf("nghiem pt la:%0.2f",x);
	    }
	}else{// pt bac 2
		delta= b*b - 4*a*c;
		if(delta<0){
			printf("pt vo nghiem");
		}else if(delta=0){
			x1=(-b)/(2*a);
			printf("pt co nghiem kep x1: %0.2f",x1);
		}else{
			x1=(-b + sqrt(delta))/(2*a);
			x2=(-b - sqrt(delta))/(2*a);
			printf("pt co 2 nghiem pb\n x1=%0.2f\n x2=%0.2f",x1,x2);
	}
	return 0;
}
}
