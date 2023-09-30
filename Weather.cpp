//Kamil Saeed

#include<iostream>
using namespace std;

int main()

{

		double temp;
		int rain;
		
		cout<<"Enter current temperature in degree celsius (-10.0-30.0) : ";
		cin>>temp;
		
		cout<<"Is it raining ( 1 for Yes and 0 for No ): ";
		cin>>rain;
		
		if (rain==1)
		{
			if (temp>=0.0 and temp<=10.0)
			cout<<"It's rainy and cold"<<endl;
			
			else if (temp>10.0 and temp<=20.0)
			cout<<"It's rainy and cool"<<endl;
			
			else if (temp>20.0 and temp<=30.0)
			cout<<"It's rainy and warm"<<endl;
		
			else
			cout<<"It's rainy and hot"<<endl;
			
		}
		
		else if (rain==0)
		{
			if (temp>=-10.0 and temp<=0.0)
			cout<<"It's snowy and cold"<<endl;
			
			else if (temp>0.0 and temp<=10.0)
			cout<<"It's cold and partly cloudy"<<endl;
			
			else if (temp>10.0 and temp<=20.0)
			cout<<"It's cool and partly cloudy"<<endl;
			
			else if (temp>20.0 and temp<=30.0)
			cout<<"It's warm and sunny"<<endl;
			
			else
			cout<<"It's hot and sunny"<<endl;
			
		}
		
	return 0;
	
}	
		
			 
		
