#include<stdio.h>
int main(){
	int arr[10]={20,10,123,30,40,20,80,80,50,32};
	int i,j,count=0;
	for(i=0;i<10;i++)
	{int x=0;
		for(j=0;j<i;j++)
		{
			if(arr[i]==arr[j])
			{
				x=x+1;
				break;
			}
			
	}if(x==0){
		count++;
		
	}

	}
	printf("%d",count);
}
