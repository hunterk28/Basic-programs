//Kamil Saeed

#include<iostream>
using namespace std;

int main()

{

		int x, y, z;
	
		cout<<"Enter length of three sides: "<<endl;
		cin>>x>>y>>z;
		
		if ((x+y>z) or (x+z>y) or (y+z>x))
		{
		
			if ((x==z) and (x==y))
			cout<<"It is a equilateral triangle"<<endl;
			
			else if ((x==y) or (x==z) or (y=z))
			cout<<"It's a isoceles triangle"<<endl;
			
			else
			cout<<"It's a scalene triangle"<<endl;
			
		}
		
		else
		cout<<"It's not a Triangle"<<endl;
		
	return 0;
	
}
