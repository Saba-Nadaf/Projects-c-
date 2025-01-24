//Name:SAba Nadaf
//Rollno: 70
//implement a Banking ATM program using cpp.
#include<iostream>
#include<stdlib.h>
int a=1234,deposit,withdrawl;
int bal=50000;
int main()
{
	int ch;
	int e,i;
	int attempt=3;
	std::cout<<"Welcome to the ATM\n";
	std::cout<<"Enter your 4 digit pin:-\n";
	std::cin>>e;
	while(attempt>0)	
	{
		if(e==a)
		{
			std::cout<<"Authentication Successfull!!!\n";
		}	
		else
		{
			std::cout<<"Incorrect pin Entered attempts remaining\n";
			return 1;
		}
		while(ch!=4)
		{
			std::cout<<"Choose an option for transaction:-\n";
			std::cout<<"====================================\n";
			std::cout<<"1] Withdrawl:-\n";
			std::cout<<"2] Deposit:-\n";
			std::cout<<"3] Check Balance:-\n";
			std::cout<<"4] Exit:-\n";
			std::cout<<"====================================\n";
			std::cin>>ch;
			switch(ch)
			{
				case 1:
					std::cout<<"Enter the amount to be withdrawl:-\n";
					std::cin>>withdrawl;
					bal=bal-withdrawl;	
				break;
				case 2:
					std::cout<<"Enter the amount to be Deposit:-\n";
					std::cin>>deposit;
					bal=bal+deposit;	
				break;
				case 3:
					std::cout<<"Available Balance:-\n";
					std::cout<<bal;	
				break;
				case 4:
					exit(0);	
				break;
				return 0;
			}
		}
	}
}
