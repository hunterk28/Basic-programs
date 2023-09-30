//Kamil Saeed

#include<iostream>
using namespace std;

int main()

{

		int biryani, karahi, tea, coffee;
		int x, y, z, a;
		int price;
		
		cout<<"\t\"Welcome to Apna Resturant\""<<endl<<endl;
		cout<<"Choose from Menu:"<<endl<<endl;
		
		cout<<"For Drinks take 1 and for Main take 0: ";
		cin>>x;
		
		if (x==0)
		{
			cout<<"Choose Main Course"<<endl<<endl;
			cout<<"For Biryani choose 1 for Karachi choose 0: ";
			cin>>y;
			
			if (y==1)
			{
				cout<<"For spicy biryani 1 and for non spicy biryani 0"<<endl;
				cin>>z;
				 
				if (z==1)
				{
					price=275;
					cout<<"Price of Spicy Biryani: "<<price<<endl;
				}
				
				else
				{
					price=250;
					cout<<"Price of non spicy Biryani: "<<price<<endl;
				}
			}
			
			else
			{
				cout<<"For Chicken Karahi 1 and for Mutton Karahi 0:"<<endl;
				cin>>z;
				
				if (z==1)
				{
					cout<<"Enter 1 for full and 0 for half"<<endl;
					cin>>a;
					
					if (a==1)
					{
						price=1800;
						cout<<"Price for full Karahi is: "<<price<<endl;
					}
					
					else 
					{
						price=900;
						cout<<"Price for half Karahi is: "<<price<<endl;
					}
				}
					
				
				else
				{
					cout<<"Enter 1 for full and 0 for half"<<endl;
					cin>>a;
					
					if (a==1)
					{
						price=2800;
						cout<<"Price of full Karahi is: "<<endl;
					}
					
					else
					{
						price=1400;
						cout<<"Price for half Karahi is: "<<endl;
					}
		
				}
		
			 }
		
		}		
		
		else
		{
			cout<<"For Tea 1 and for coffee 0"<<endl;
			cin>>z;
				
			if (z==1)
			{
				cout<<"Enter 1 for large and 0 for small"<<endl;
				cin>>a;
					
				if (a==1)
				{
					price=250;
					cout<<"Price for Large Tea is: "<<price<<endl;
				}
					
				else 
				{
					price=125;
					cout<<"Price for Small Tea is: "<<price<<endl;
				}
			}	
			
			else
			{
				cout<<"Enter 1 for large and 0 for small"<<endl;
				cin>>a;
					
				if (a==1)
				{
					price=500;
					cout<<"Price of Large Coffee is: "<<price<<endl;
				}
					
				else
				{
					price=250;
					cout<<"Price for Small Coffee is: "<<price<<endl;
				}
			}
			
		}
		
	return 0;
	
}
