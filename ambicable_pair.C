#include<stdio.h>
long int factors(int n);
int main(){
	int n,s;
	printf("enter the first number");
	scanf("%d",&n);
	printf("enter the second number");
	scanf("%d",&s);
	int x=factors(n);
	int y=factors(s);
	if(x==s && y==n){
		printf("the given piar is amicable");
	}
	else{
		printf("the given pair is not an ambicable pair");
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
