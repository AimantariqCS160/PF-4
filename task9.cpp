#include<iostream>
using namespace std;
void calculateFuel(float distance);
main()
{
 float distance;
 cout<<"Enter the distance: ";
 cin>>distance;
 calculateFuel(distance);
}
void calculateFuel(float distance)
	{
	float needed;
        needed=distance*10;
	if(needed>=100)
	{
		cout<<"Fuel needed: " <<needed;
	}
	else
	cout<<"Fuel needed: 100";
	}