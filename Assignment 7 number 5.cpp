#include <stdio.h>
int main(){
	int n;
	printf("nhap kich thuoc cua tap hop=");
	scanf("%d",&n);
	
	int arr[n];
	printf("nhap cac phan tu cua tap hop:/n");
	for(int i =0;i<n;i++){
		scanf("%d",&arr[i]);
		
		int a,b;
		if(arr[a]-arr[b]!=0){
			printf("cac so nhap vao mang ko giong nhau");
		}
	}
}
