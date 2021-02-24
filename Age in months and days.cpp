#include <iostream>

using namespace std;

float months(float year, float month)
{
	
return year*12;
}
float day(float year, float days)
{
	return year*365;
}
int main()
{
float year, month ,days;

 cout<<"Enter age in year: ";
 
 cin>>year;
 
 cout<<"Age in months is: ";
 
 cout<<months(year,month)<<endl;
 
 cout<<"Age in days is: ";
 
 cout<<day(year,days);
}
