//leap year or not
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter the year:";
	cin>>year;
	if((year%4==0 && year%100!=0) || (year%400==0))
	{
		cout<<year << " is a leap year"<< endl;
	}
	else
	{
		cout<<year << " is not a leap year"<<endl;2024
	}
	return 0;
}
