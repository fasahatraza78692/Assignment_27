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
	Matrix operator+(Matrix m)
	 {
	 	Matrix temp;
	 	for(int i=0;i<3;i++)
     	 {
     	 	for(int j=0;j<3;j++)
     	 	 temp.a[i][j]=a[i][j]+m.a[i][j];
         }
        return temp;
	 }
};
int main()
{
	Matrix m1,m2,m3;
	m1.setValue();
	m2.setValue();
	cout<<"First Matrix :"<<endl;
	m1.Display();
	cout<<"Second Matrix :"<<endl;
	m2.Display();
	m3=m1+m2;
	cout<<"Addition of Matrix"<<endl;
	m3.Display();
 return 0;
}
