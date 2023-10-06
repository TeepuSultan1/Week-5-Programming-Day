#include<iostream>
#include<cmath>
using namespace std;
	float taxCalculator(char type,float price);
main(){
	char type;
	float price;
	cout<<"Enter the vehicle type code (M, E, S, V, T): ";
	cin>>type;
	cout<<"Enter the price of the vehicle: $";
	cin>>price;
	cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<taxCalculator(type,price);

	}
	
	float taxCalculator(char type,float price)
	{
	float totprice;
	if(type=='M')
	{
	totprice=(price)+(price*(.06));
	}
	
	if(type=='E')
	{
	totprice=(price)+(price*(.08));
	}
	
	if(type=='S')
	{
	totprice=(price)+(price*(.1));
	}
	
	if(type=='V')
	{
	totprice=(price)+(price*(.12));
	}
	
	if(type=='T')
	{
	totprice=(price)+(price*(.15));
	}
	return totprice;
	}
	