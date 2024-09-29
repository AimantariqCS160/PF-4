#include<iostream>
using namespace std;
void add(int num1,int num2);
void substraction(int num1,int num2);
void multiplication(int num1,int num2);
void division(int num1,int num2);
main()
{
int num1,num2;
char op;
while(true)
{
	cout<<"Enter Number1: ";
	cin>>num1;
	cout<<"Enter Number2: ";
	cin>>num2;
	cout<<"Enter operator(+,-,*,/): ";
	cin>>op;
 if(op=='+')
{	
	add(num1,num2);
}
 else if(op=='-')
{
	substraction(num1,num2);
}
 else if(op=='*')
{
	multiplication(num1,num2);
}
 else
{
	division(num1,num2);
}
}
}
void add(int num1,int num2)
{
 cout<<"Sum: " <<num1+num2 <<endl;
}
void substraction(int num1,int num2)
{
cout<<"Substraction: " <<num1-num2 <<endl;
}
void multiplication(int num1,int num2)
{
cout<<"Multiplication: " <<num1*num2 <<endl;
}
void division(int num1,int num2)
{
cout<<"Division: " <<num1/num2 <<endl;
}
