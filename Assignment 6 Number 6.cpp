#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc cua tap hop=");
	scanf("%d",&n);
	
	int arr[n];
	printf("Nhap cac phan tu cua tap hop:/n");
	for(int i=0;i<n;i++){
	 scanf("$d",&arr[i]);
    }     
	 int high=arr[0];
	  for(int i=0;i<n;i++){
	 	  if(arr[i]<high);
	 	  arr[i]=high;
     
	int count=0;
	 if(arr[i]>0&&arr[i]<high){
	  count++;
	 }
		 printf("cac so duong lien tiep: %f",arr[i]);
     }   
}
