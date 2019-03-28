#include<iostream>
using namespace std;
class sub
{
  int a,b,c;
	public:
 
  int read()
  { cin>>a>>b;}
   int subtract()
   { 
	   c=a-b;
	   cout<<"subtration is"<<c;

   } 
};
int main()
{
   sub obj;
   obj.read();
   obj.subtract();

}

