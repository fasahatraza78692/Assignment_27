#include<iostream>
using namespace std;
class Time
{
	int Hours, Minutes, Seconds;
	 public:
       bool operator==(Time t)
        {
        	if(Hours==t.Hours&&Minutes==t.Minutes&&Seconds==t.Seconds)
        	 return true;
        	else
        	 return false;
		}
	friend ostream& operator<<(ostream&,Time);
	friend istream& operator>>(istream&,Time&);
	  
};
istream& operator>>(istream &is,Time &t)
 {
 	cout<<"---------------"<<endl;
 	cout<<"Enter Hours   : ";
 	cin>>t.Hours;
 	cout<<"Enter Minutes : ";
 	cin>>t.Minutes;
 	cout<<"Enter Seconds : ";
 	cin>>t.Seconds;
 	cout<<endl;
 	return cin;
 }
ostream& operator<<(ostream &os,Time t)
 {
 	cout<<"Hours   : "<<t.Hours<<endl;
	cout<<"Minutes : "<<t.Minutes<<endl;
	cout<<"Seconds : "<<t.Seconds<<endl<<endl;
 	return os;
 }
int main()
{
	Time t1,t2;
	cout<<"Enter the 1st time"<<endl;
	cin>>t1;
	cout<<"First Time"<<endl<<t1;
	cout<<"Enter the 2nd time"<<endl;
	cin>>t2;
	cout<<"Second Time"<<endl<<t2;
	if(t1==t2)
	 cout<<"Both times are same";
	else
	 cout<<"Both times are not same";
	return 0;
}
