#include<iostream>
using namespace std;
void calculatePayableAmount(string day,int amount);
main()
{
 string day;
 int amount;
 cout<<"Enter the day of purchase: ";
 cin >> day;
 cout<<"Enter the total purchase amount: $";
 cin >> amount;
 calculatePayableAmount(day,amount);
}
void calculatePayableAmount(string day,int amount)
{
	float discount,total;
 	if(day=="sunday")
	{
 		discount=(amount)*10/100;
		total=amount-discount;
 		cout<<"Payable amount: $" << total;
	}
 	else
	{
 		cout<<"Payable amount: $" << amount;
	}
}