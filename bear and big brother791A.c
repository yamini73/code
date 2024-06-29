#include <stdio.h>
	#include <stdio.h>

int main() {
	int n,t,year=0;
	scanf("%d %d",&n,&t);
	while(n<=t){
		n=n*3;
		t=t*2;
		year++;
	}
	printf("%d",year);

    return 0;
}

