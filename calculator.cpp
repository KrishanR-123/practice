#include<iostream>
using namespace std;
class calculator
{
	int a,b,c,d;
	public;
	int read()
	{
	  cout<<"enter two numbers";
	  cin>>a>>b;
	}

	int sum()
	{
		c=a+b;
		cout<<"sum of the numbers is"<<c;
	}

};
int main()
{
	calculator obj;
	obj.read();
	obj.sum();

} 
