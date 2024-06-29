#include<stdio.h>
#include<stdlib.h>
int deposit(int s);
int withdraw(int y);
int balance=1000;
int main(){
	int n;
	while(1){
	printf("Menu is : 1.To Check Balance\n 2.To Deposit money\n 3.To Withraw money\n 4.To Exit\n");
	printf("Enter what do you choose");
	scanf("%d",&n);
	switch(n)
	{
		case 1 : printf("Your balance is: ");
				 printf("%d\n",balance);
				 sleep(1);
				 system("cls");
			 	 break;
		case 2: printf("Please enter the money you want to deposit\n");
		        int s;
		        scanf("%d",&s);
		        deposit(s);
		        printf("your deposit is succesful\n");
		        sleep(1);
				system("cls");
				break;
		case 3: printf("Please enter how much you want to withdraw\n");
		        int y;
		        scanf("%d",&y);
		        if(y>0 && y<=balance){
		        withdraw(s);
		        printf("Please collect the cash Thankyou!\n");
		    }   else{
		    	printf("You have insufficient balance");
			}
		        sleep(1);
				system("cls");
				break;
		case 4: printf("Exit\n");
				return 0;
		default:
			printf("Invalid choice, Try Again!");
			sleep(1);
			system("cls");
	}
}}
int deposit(int s)
{
	balance=balance+s;
	return balance;
}
int withdraw(int y)
{
	
	balance=balance-y;
	return balance;

}


