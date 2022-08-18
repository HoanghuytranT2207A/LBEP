#include <stdio.h>
int main(){
	int n;
	printf("nhap kich thuoc cua tap hop=");
	scanf("%d",n);
	
	int arr[n];
	printf("nhap cac phan tu cua tap hop:/n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
    }     
	int high=arr[0];
	for(int i=0;i<n;i++){
	if(arr[i]>high){
	}
	high=arr[i];
	break;
	
	int x;
	for(int i=0;i<n;i++){
		if(x<arr[i]){
		arr[i]-x>arr[i]-high;
		printf("gia tri xa mang nhat:%d",arr[i]);
		}
	}
	}
}
