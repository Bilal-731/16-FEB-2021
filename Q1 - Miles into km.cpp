#include<iostream>

using namespace std;

float convert(float km, float mile)
{
   return	km * 1.609;
}
int main()
{
	float km, mile;
  
	cout<<"Enter value in km: ";
  
	cin>>km;
  
	cout<<"Value in mile is: ";
  
	cout<<convert(km,mile) ; //Function Call
}
