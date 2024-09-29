#include<iostream>
using namespace std;
void payableAmount(string day,int totalpurchase);
main()
{
string day;
int totalpurchase;
while(true)
{
  cout<<"Enter a day: ";
  cin>>day;
  cout<<"Enter total purchase: $";
  cin>>totalpurchase;
  payableAmount(day,totalpurchase);
}
}
void payableAmount(string day,int totalpurchase)
{
  int discount,payable;
	if(day=="sunday")
	{
		discount=(totalpurchase)*10/100;
		payable=totalpurchase-discount;
        cout<<"Payabale amout: $" <<payable <<endl;
        }
        else
	{
		discount=(totalpurchase)*5/100;
		payable=totalpurchase-discount;
        cout<<"Payable amount: $" <<payable<<endl;
	}
}