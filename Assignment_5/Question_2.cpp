#include<iostream>
using namespace std;
class unary
{
	int n;
	public:
	 unary(int a=0)
	  {
	  	n=a;
	  }
	unary operator++()
	 {
	 	++n;
	 	return *this;
	 }
	unary operator--()
	 {
	 	--n;
	 	return *this;
	 }	 
	 void Display()
	  {
	  	cout<<n<<endl;
	  }
};
int main()
{
	unary u1(5),u2(8);
	u1++;
	u1.Display();
	++u1;
	u1.Display();
	u2--;
	u2.Display();
	--u2;
	u2.Display();
	
 return 0;
}
