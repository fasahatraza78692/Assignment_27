#include<iostream>
using namespace std;
class Matrix
{
   int a[3][3];
  public:
    void setValue()
     {
     	cout<<"Enter Matrix Element (3x3)"<<endl;
     	for(int i=0;i<3;i++)
     	 {
     	 	for(int j=0;j<3;j++)
     	 	 cin>>a[i][j];
		  }
	 }
    void Display()
     {
     	for(int i=0;i<3;i++)
     	 {
     	 	for(int j=0;j<3;j++)
     	 	 cout<<a[i][j]<<" ";
     	 	 cout<<endl;
		  }
		  cout<<endl;
	 }
	Matrix operator-()
	 {
	 	for(int i=0;i<3;i++)
     	 {
     	 	for(int j=0;j<3;j++)
     	 	 a[i][j]=-a[i][j];
		  }
		return *this;
	 }
};
int main()
{
	Matrix m1;
	m1.setValue();
	m1.Display();
	-m1;
	cout<<"Negate Matrix:"<<endl;
	m1.Display();
  return 0;
}
