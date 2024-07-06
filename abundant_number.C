#include<stdio.h>
long int factors(int n);
int main(){
	int n;
	scanf("%d",&n);
	int y=factors(n);
	if(n<y){
		printf("yes");
	}
	else{printf("no");
	}
}
long int factors(int n){
	int sum=0,i;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	return sum;
}
