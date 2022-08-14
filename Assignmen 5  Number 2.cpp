#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	
	int S,i;
	S=0;
    for(i=1;i<=n;i++){
		S=n*(n-i); 
	} 
    printf("%d",S);
} 

