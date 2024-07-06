#include<stdio.h>
#include<math.h>
long int len(int n);
int main(){
	int n,y,sum=0;
	printf("Enter the number you want to check");
	scanf("%d",&n);
	int z=n;
	int x=len(n);
	while(n>0)
	{
		y=n%10;
		sum=sum+pow(y,x);
		n=n/10;
	}
	if(z==sum){
		printf("Yes! the number is armstrong number");
	}else{printf("No! try some other number");
	}
}
long int len(int n)
{
	int count=0;
    while(n>0){
 	count=count+1;
 	n=n/10;
 }
 return count;
}

