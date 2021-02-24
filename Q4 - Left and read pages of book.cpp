#include <iostream>

using namespace std;


float RPG(int days, int PPG) //RPG: read pages, PPG pages per day
{
return  days*PPG;
}
float LPG(int TPG,int RPGs) //LPG:left pages, TPG: total pages
{
	return TPG-RPGs;
}
int main()
{
	int TPG,RPGs,PPG,days;
	
	cout<<"Enter total pages: ";
	
	cin>>TPG;
	
	cout<<"Pages per day: ";
	
	cin>>PPG;
	
	cout<<"Number of days: ";
	
	cin>>days;
	
	cout<<"Number of pages read are: ";
	
	cout<<RPG(days,PPG)<<endl;
	
	RPGs=RPG(days,PPG);
	
	cout<<"Number of pages left are: ";
	
	cout<<LPG(TPG,RPGs);
}
