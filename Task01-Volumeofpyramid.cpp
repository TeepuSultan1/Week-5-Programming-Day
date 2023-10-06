#include<iostream>
#include<cmath>
using namespace std;
	string op;
	void pyramidVolume(float a,float b,float c);
main(){
	float a,b,c;
	cout<<"Enter the length of the pyramid (in meters): ";
	cin>>a;
	cout<<"Enter the width of the pyramid (in meters): ";
	cin>>b;
	cout<<"Enter the height of the pyramid (in meters): ";
	cin>>c;
	cout<<"Enter the desired output unit (millimeters,centimeters,meters,kilometers): ";
	cin>>op;
	pyramidVolume(a,b,c);
	}
	
	void pyramidVolume(float a,float b,float c)
	{
	float V;
	V=(a*b*c)/3;
	if(op=="millimeters")
	{
	V=V*(pow(10,9));
	}
	if(op=="centimeters")
	{
	V=V*(pow(10,6));
	}
	if(op=="meters")
	{
	V=V;
	}
	if(op=="kilometers")
	{
	V=V*(pow(10,-9));
	}
	cout<<"The volume of the pyramis is: "<<V<<" cubic "<<op;
	}