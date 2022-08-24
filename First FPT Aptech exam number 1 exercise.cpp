#include <stdio.h> 
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	int S,i;
	S=0;
	for(i<1;i<n;i++){
		S=S+1/i;
	}
printf("tong la: %d",S);
}

