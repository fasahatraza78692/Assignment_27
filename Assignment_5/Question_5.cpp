#include<iostream>
using namespace std;
class Numbers
{
   int x,y,z;
    public:
    	Numbers(int a=0,int b=0,int c=0)
    	 {
    	 	x=a;
    	 	y=b;
    	 	z=c;
		 }
		void Display()
		 {
		 	cout<<x<<" "<<y<<" "<<z<<endl;
		 }
		void operator-()
		 {
		 	x=-x;
		 	y=-y;
		 	z=-z;
		 }
};  
int main()
{
	Numbers n1(1,7,3);
	n1.Display();
	-n1;
	n1.Display();
	return 0;
}
