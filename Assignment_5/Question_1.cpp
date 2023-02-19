#include<iostream>
using namespace std;
class Complex
{ 
  int a,b;
   public:
   	Complex(int x,int y)
     {
     	a=x;
     	b=y;
	 }
	Complex()
	{
		
	}
	Complex operator+(Complex c)
	  {
	 	Complex temp;
	 	temp.a=a+c.a;
	 	temp.b=b+c.b;
	 	return temp;
	  }
	Complex operator-(Complex c)
	  {
	 	Complex temp;
	 	temp.a=a-c.a;
	 	temp.b=b-c.b;
	 	return temp;
	  }
	Complex operator*(Complex c)
	  {
	 	Complex temp;
	 	temp.a=a*c.a;
	 	temp.b=b*c.b;
	 	return temp;
	  }
	int operator==(Complex c)
	  {
	 	if(a==c.a&&b==c.b)
	 	  return 1;
	 	else 
	 	  return 0;
	  }
	void Display()
	 {
	 	cout<<a<<"+"<<b<<"i"<<endl;
	 }
};
int main()
{
	Complex c1(4,2),c2(3,3),c3(3,3),c4;
	c4=c2-c3+c1;
	c4.Display();
	if(c2==c3)
	 cout<<"Equal"<<endl;
	else
	 cout<<"!Equal"<<endl;
	return 0;
}
