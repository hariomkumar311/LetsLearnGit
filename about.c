
#include<stdio.h>
int main(){
int arr[10],i,j,temp=0;
printf("Enter array elements\n");
for(i=0;i<=9;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<=8;i++){
	for(j=i+1;j<=9;j++){
		if(arr[i]<arr[j]){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	
}
}
printf("Largest element is %d\n",arr[0]);
printf("smallest element is %d\n",arr[9]);
}
