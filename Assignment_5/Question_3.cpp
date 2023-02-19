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
		friend Complex operator+(Complex, Complex);
		void Display()
		 {
		 	cout<<a<<"+"<<b<<"i"<<endl;
		 }
};
Complex operator+(Complex c1,Complex c2)
 {
	Complex temp;
	temp.a=c1.a+c2.a;
	temp.b=c1.b+c2.b;
	return temp;
 }
int main()
{
    Complex c1(4,6),c2(3,5),c3;
    c3=c1+c2;
    c3.Display();
	return 0;
}
