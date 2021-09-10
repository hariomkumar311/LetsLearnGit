#include<stdio.h>
int main(){

int arr[10],i;
printf("Enter array elements\n");
for(i=0;i<=9;i++){

scanf("%d",&arr[i]);

}
printf("Entered array elements are\n");
for(i=0;i<=9;i++){
	printf("%d\n",arr[i]);
}
int small=arr[0];
int large=arr[0];
for(i=0;i<=9;i++){
	if(arr[i]>large)
	large=arr[i];
	if(arr[i]<small)
	small=arr[i];
	

}
	printf("Largest element is %d\n",large);
   	printf("smallest element is %d",small);
          h
}
