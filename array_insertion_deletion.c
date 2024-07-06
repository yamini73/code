#include<stdio.h>
/*int main(){
	int n;
	scanf("%d",&n);
	int i,arr[n+1],val,pos;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element you want to place");
	scanf("%d",&val);
	printf("enter the position you want to enter");
	scanf("%d",&pos);
	for(i=n;i>=pos+1;i--){
		arr[i]=arr[i-1];
	}
	arr[pos]=val;
	for(i=0;i<=n;i++)
	{
		printf("%d",arr[i]);
	}
}*/
int main(){
	int n;
	scanf("%d",&n);
	int i,arr[n],val,pos;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the position you want to delete");
	scanf("%d",&pos);
	for(i=pos;i<n;i++){
		arr[i]=arr[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d",arr[i]);
	}
}
