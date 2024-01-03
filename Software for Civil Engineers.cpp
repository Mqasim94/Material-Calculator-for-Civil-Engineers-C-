#include<iostream>
using namespace std;
int main()

{
	
string m="4238";
	cout<<"Enter pin code to start the 'concrete work' :\n";
    k:
	cin>>m;

	if(m=="4238")
	{
	cout<<"\nPlease wait\n";
	}
	else
	{
	cout<<"\n Your code is incorrect\n";
	cout<<"\nTry again\n";
	goto k;
	}	
	float w,g,k,p,l,z,a,b,c,d,e,f,j,o,n;
	cout<<"\nEnter the volume of concrete work which is in square feets : \n";
	cin>>a;
	//dry volume of concrete is the mixture of ingredients of concrete before adding water
	j=a*1.54;
	cout<<"\nWet volume of concrete is\n"<<j<<"\n";
	//to calculate wet volume multiply it with constant value 1.54
	cout<<"\nDry volume of concrete is\n"<<a<<"\n";
	cout<<"\nEnter the ratio of Cement:Sand:Bagri\n";
	cout<<"\nRatio of cement=";
	cin>>b;
	cout<<"\nRatio of sand=";
	cin>>c;
	cout<<"\nRatio of bagri=";
	cin>>d;
	e=b+c+d;
	cout<<"\nSum of ratio is= "<<e<<"\n";
	f=(b*j)/e;
	//CFT stand for concrete filled tube
	cout<<"\nQuantity of cement is "<<f<<"CFT"<<"\n";
	cout<<"\nNumber of bags are "<<f/1.25<<"\n";
	p=(c*j)/e;
	cout<<"\nQuantity of sand in CFT is "<<p<<"CFT"<<"\n";
	l=(d*j)/e;
	cout<<"\nQuantity of bagri in CFT is "<<l<<"CFT"<<"\n";
    
	cout<<"\n :-)**************************^^^******************************(-:\n";
	cout<<"\n=*=*=*=*=*=*=*=*=*=>COST OF MATERIALS<=*=*=*=*=*=*=*=*=*=\n";
	cout<<"\nEnter the cost of 1 bag of cement=\n";
	cin>>k;
//Volume of 50 kg cement bag is 1.25 CFT
	cout<<"\nCost of"<<f/1.25<<" bags of cement is"<<(f*k)/1.25<<"\n";
	cout<<"\nEnter the cost of sand per CFT\n";
	cin>>g;
	cout<<"\nCost of"<<p<<"cft sand is"<<p*g<<"\n";
	cout<<"\nEnter the cost of bagri per CFT\n";
	cin>>w;
	cout<<"\nCost of"<<l<<"cft bagri is"<<l*w<<"\n";
    cout<<"\nTOTAL COST OF YOUR CONCRETE WORK IS"<<endl<<(l*w)+(p*g)+((f*k)/1.25);
    
    cout<<"\nPrepared by Muhammad Qasim ""BS-SOFTWARE Engineering (1st B)"" from KFUEIT"<<endl;
    cout<<"My registration number is as follows\n";
    cout<<" \nSWEN-19111094";  
}
