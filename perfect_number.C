#include<stdio.h>
long int factors(int n);
int main(){
	int n,x;
	printf("Enter the number you want to check:");
	scanf("%d",&n);
	x=factors(n);
	if(x==n){
		printf("Yup! Its a perfect number");
	}else{
		printf("Nope,You are wrong");
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
