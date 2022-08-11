#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	
	int x =1;
	while(x<n){
		n%x==0;
		x++;
	}
    printf("uoc cua n la: %d",x);
}
	
