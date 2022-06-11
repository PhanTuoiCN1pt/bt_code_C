#include "stdio.h"
#include "math.h"

int ktra(int x){    // Ham kiem tra so nguyen to.
 if (x<=1) return 0;
 int j; 
  for( j=2; j<= sqrt(x); j++){
    if (x%j==0) return 0; 
    }
   return 1;
} 

int main()
{
	int n;
	int i; 
	do{
	printf("\n Nhap n = ");
	scanf("%d", &n);
	}while (n<1);
	for ( i=2; i<=n; i++){
	if (ktra(i)) printf("\n %d", i);
	}
}

