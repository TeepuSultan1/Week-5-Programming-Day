#include<iostream>
using namespace std;
	float hours;
	void projectTimeCalculation(float days,float workers);
main(){
	float days,workers;
	cout<<"Enter the needed hours: ";
	cin>>hours;
	cout<<"Enter the days that the firm has: ";
	cin>>days;
	cout<<"Enter the number of all workers: ";
	cin>>workers;
	projectTimeCalculation(days,workers);
	}
	
	void projectTimeCalculation(float days,float workers)
	{
	float time,left;
	time=(days-(days*0.1))*workers*10;
	left=time-hours;
	if(time<hours)
	{
	cout<<"Not enough time! "<<(-1*left)<<" hours needed.";
	}	
	if(time>=hours)
	{
	cout<<"Yes!"<<left<<" hours left.";
	}
	}