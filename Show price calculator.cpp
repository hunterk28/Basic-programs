//Kamil Saeed

#include<iostream>
using namespace std;

int main()

{

		int age;
		int price;
		int x;
		
		cout<<"Enter your age (1-100): ";
		cin>>age;
		
			if (age>=1 && age<=12)
			{ 
				price=10;
				cout<<"Child ticket price: $"<<price<<endl;
			}
			
			else if (age>=13 && age<=17)
			{
				price=12;	
				cout<<"Student ticket price: $"<<price<<endl;
			}
				
			else if (age>=18 && age<=59)
			{
				price=18;	
				cout<<"Adult ticket price: $"<<price<<endl;
			}
			
			else if (age>=60)
			{
				price=11;	
				cout<<"Senior Citizen ticket price: $"<<price<<endl;
			}
			
		
		cout<<"Is your show Mantinee, 1 for Yes and 0 for No? : ";
		cin>>x;
		
			if (x==1)
			{
				price= (price-8);
				cout<<"After Discount Price: "<<price<<endl;
			}
			
			else
			{
				cout<<"Your total price is: $"<<price<<endl;
			}
	
	return 0;	
}	
			
			
	
	
	
	
	
	
	

