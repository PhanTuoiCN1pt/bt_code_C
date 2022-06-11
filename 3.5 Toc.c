#include<stdio.h>
#include<math.h>
#include<stdlib.h> 
int main(){
	float x,y,z,val;
	const float PI=3.1415;
	val= PI/180;
	printf("nhap 3 so x,y,z:");
	scanf("%f%f%f",&x,&y,&z);
	// tinh toan
	printf("ket qua F = ((x+y+z)/(x^2+y^2+1))-|x-zcos(y)| la:%0.2f",((x+y+z)/(x*x+y*y+1))-abs(x-z*cos(y*val)));
	 
	return 0; 
} 
