#include<stdio.h>
int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<=t;i++)
	{
		int n;
		scanf("%d",&n);
		if(n==1 || n==2){
			printf("0");
		}else if(n%2==0){
			printf("%d",(n/2)-1);
		}else{
			printf("%d",n/2);
		}
	}
}
