//complete the program below
//its a program to find the average value.
#include <iostream>
using namespace std;

double avg (double x, double y);
int main()
{
	double m=0.0;
	double n=0.0;

	cout<<"Enter first number:"<<endl;
	cin>>m;
	
	cout<<"Enter second number:"<<endl;
	cin>>n;
	std::cin.get();

	cout<<"Average is: "<<avg(m,n)<<endl;
	system("PAUSE");
	return 0;
	
	
	
}

double avg(double m,double n)
{
	return (m+n)/2;

}
