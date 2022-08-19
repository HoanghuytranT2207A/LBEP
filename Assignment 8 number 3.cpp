#include <stdio.h>
int tinhtongcacchuso(int n, int S, int a, int r){
 S=0;
 if(n>10){
 	n%10==10*a+r;
    S=a+r;
 	printf("tong cac chu so:%f",S);
}else{
	S=n;
	printf("tong cac chu so:%d",S);
}
}
int main(){
	int n,S,a,r;
	printf("tong cac chu so: %d",S);
}

