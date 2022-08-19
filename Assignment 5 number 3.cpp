#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	int x3,x2,x1;
	for(int i=0;i<n;i++){
	x3=x2+x1;
	x1=x2;
	x2=x3;
	printf("stt: %d",x3);
}
}
