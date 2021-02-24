#include <iostream>

using namespace std;

float square(float num, float sq)
{
	return num*num;
}
float cube(float num,float cb)
{
	return num*num*num;
}
int main()
{
	float num,sq,cb;
	
	cout<<"Enter the number: ";
	
	cin>>num;
	
	cout<<"Square of number is: ";
	
	cout<<square(num,sq)<<endl;
	
	cout<<"Cube of number is: ";
	
	cout<<cube(num,cb);
}
