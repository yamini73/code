#include<stdio.h>
int main(){
	int arr[10],i;
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	int min=arr[0];
	int max=arr[1];
	for(i=0;i<5;i++)
	{
	if(arr[i]>max && arr[i]>min){
		if(min<max){
		min=max;
		max=arr[i];
	}
	else{

		max=arr[i];
	}
	}else if(arr[i]>min && arr[i]<max){
		min=arr[i];
	}else if(arr[i]>max && arr[i]<min)
	{
		max=arr[i];
	}	
	}
	printf("%d",min);
}
