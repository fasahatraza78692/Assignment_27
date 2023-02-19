#include<iostream>
using namespace std;
class fraction
{
   long numerator;
   long denominator;
    public:
      fraction (long n=0, long d=0)
       {
       	 numerator=n;
       	 denominator=d;
	   }
	 friend istream& operator>>(istream &st,fraction &f)
	   {
	   	  cout<<"numerator : ";
	   	  cin>>f.numerator;
	   	  cout<<"denominator : ";
	   	  cin>>f.denominator;
	   	  return cin;
	   }
	 friend ostream& operator<<(ostream &st,fraction f)
	   {
	   	 cout<<f.numerator<<"/"<<f.denominator<<endl;;
	   	 return cout;
	   }
	 fraction operator++(void)  //pre-increa=ment
	   {
	   	 numerator=++numerator;
	   	 denominator=++denominator;
	   	 return *this;
	   }
	 fraction operator++(int)  //post-increment;
	   {
	   	 fraction temp=*this;
	   	 ++numerator;
	   	 ++denominator;
	   	 return *temp;
	   }
};

int main()
{
	fraction f1,f2;
	cin>>f1;
	cout<<f1;
	f1++;
	++f1;
	f2=++f1;
	cout<<"f1  : "<<f1;
	cout<<"f2  : "<<f2;
	return 0;
}
