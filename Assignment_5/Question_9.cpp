#include<iostream>
using namespace std;
class mystring
{
 char str [100];
   public:
     void setString()
      {
      	cout<<"Enter a string :";
      	cin>>str;
	  }
	 void Display()
	  {
	  	cout<<str;
	  }
	mystring operator!()
	 {
	 	for(int i=0;str[i]!='\0';i++)
	 	 {
	 	 	if(str[i]>=97)
	 	 	  str[i]=str[i]-32;
	 	 	else
	 	 	  str[i]=str[i]+32;
		 }
		 	cout<<endl;
	 	 	return *this;
	 }
};
int main()
{
	mystring s1;
	s1.setString();
	s1.Display();
	!s1;
	s1.Display();
	return 0;
}

