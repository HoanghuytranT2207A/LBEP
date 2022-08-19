#include <stdio.h>
int main(){
	int n;
	printf("nhap kich thuoc tap hop=");
	scanf("%d",&n);
	
	int arr[n];
	printf("nhap cac phan tu cua tap hop: \n");
	for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	int min=arr[1]-arr[0];
	for(int i=0;i<n;i++){
	 if(arr[i+1]-arr[i]<min){
	 printf("khoang cach gan nhat",arr[i]);
}
}
}
