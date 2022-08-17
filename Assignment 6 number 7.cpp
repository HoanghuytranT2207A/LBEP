#include <stdio.h>
int main(){
	int n;
	printf("nhap kich thuoc tap hop=");
	scanf("%d",n);
	
	int arr[n];
	printf("nhap cac phan tu cua tap hop:/n");
	for(int i=0;i<n;i++){
	 scanf("%d",&arr[i]);
}
	int high=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>high);
		high=arr[i];
		break;
	
	int S=0;
	for(int i=0;i<n;i++){
	}
	 if(arr[i]>high&arr[i]>0){
     S=S+arr[i];
	 printf("tong so max so duong: %f",S);
     }else{
	    printf("khong so duong max");
    }
}
}

