/*

check the number:
even/odd
	2 4 6 even
prime
	11,13,17
palindrome
	reveres of the number =original number 121 343
perfect
	sum of factors of number=that number 6 -> 1+2+3=6
armstrong
	1634,153
	1634=  no.of digit=4
	1^4+6^4+3^4+4^4=1634
karpekar
	9= 
	square of 9=81
	81 => 8+1 => 9
	
	
	45
	sq.of 45=2025
	2025=> 20 +25 => 45
*/


#include<iostream>
#include<stdbool.h>
using namespace std;
class Number
{
	public:
		
		bool CheckEven(int);
		bool Prime(int);
		bool Perfect(int);
		bool Palindrome(int);
		bool Armstrong(int);
		bool karpekar(int);
};
bool Number::CheckEven(int no)
{
	if(no%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}

}
bool Number::Prime(int no)
{
	int icnt=0;
	int i=0;
	for(i=2;i<=no/2;i++)
	{
		if(no%i==0)
		{
			icnt++;
		}
	}
	if(icnt==0)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
bool Number::Perfect(int no)
{
	int i=0;
	int sum=0;
	for(i=1;i<=no/2;i++)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==no)
	{
		return true;
	}
	else
	{
		return false;
	}

}
bool Number::Palindrome(int no)
{
	int temp=no;
	int i=0;
	int rev=0;
	int digit=0;
	while(no!=0)
	{
		digit=no%10;
		rev=(rev*10)+digit;
		no=no/10;
	}
	if(rev==temp)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Number::Armstrong(int no)
{
	int temp=no;
	int temp2=no;
	int icnt=0;      
	
	while(no!=0)
	{
		icnt++;
		no=no/10;
	}
	int digit=0;
	int mult=1;
	int sum=0;
	int i=0;
	while(temp!=0)
	{
		digit=temp%10;
		for(i=1;i<=icnt;i++)
		{
			mult=mult*digit;
		}
		sum=sum+mult;
		mult=1;
		temp=temp/10;
	}
	if(sum==temp2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Number::karpekar(int no)
{
	int temp=no;
	int squarenumber=temp*temp;
	int digit=0;
	int sum=0;
	while(squarenumber!=0)
	{
		digit=squarenumber%10;
		sum=sum+digit;
		squarenumber=squarenumber/10;
	}
	if(sum==no)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	Number obj;
	int number=0;
	bool bret=false;
	cout<<"*****************Welcome to Number Checking System*********************\n";
	cout<<"Enter the number to check\n";
	cin>>number;
	if(number<0)
	{
		number=-(number);
	}
	bret=obj.CheckEven(number);
	if(bret==true)
	{
		cout<<number<<" is "<<"Even Number\n";
	}
	else
	{
		cout<<number<<" is "<<"Odd Number\n";
	}
	bret=obj.Prime(number);
	if(bret==true)
	{
		cout<<number<<" is "<<"Prime Number\n";
	}
	else
	{
		cout<<number<<" is "<<"Not Prime Number\n";
	}
	bret=obj.Perfect(number);
	if(bret==true)
	{
		cout<<number<<" is "<<"Perfect Number\n";
	}
	else
	{
		cout<<number<<" is "<<"Not Perfect Number\n";
	}
	bret=obj.Palindrome(number);
	if(bret==true)
	{
		cout<<number<<" is "<<"Palindrome Number\n";
	}
	else
	{
		cout<<number<<" is "<<"Not Palindrome Number\n";
	}
	bret=obj.Armstrong(number);
	if(bret==true)
	{
		cout<<number<<" is "<<"Armstrong Number\n";
	}
	else
	{
		cout<<number<<" is "<<"Not Armstrong Number\n";
	}
	bret=obj.karpekar(number);
	if(bret==true)
	{
		cout<<number<<" is "<<"Karpekar Number\n";
	}
	else
	{
		cout<<number<<" is "<<"Not Karpekar Number\n";
	}
	cout<<"\n";
	cout<<"Thanks For Using the Application....VISIT AGAIN !!!!\n";
	return 0;
}