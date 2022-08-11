#include <stdio.h>
int main(){
	int a,b;
	printf("nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	
	int x=1;
	for(x=1;x<=a&x<+b;x++){
		a%x==0;
	    b%x==0;
	    }
	printf("uoc so chung %d"",&x");
}
