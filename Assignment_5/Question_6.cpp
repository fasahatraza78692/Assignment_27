#include<iostream>
#include<string.h>
using namespace std;
class CString
{
	char s[30];
	 public:
	 	void setStirng()
	 	 {
	 	 	cin>>s;
		 }
		void Display()
		 {
		 	cout<<s;
		 }
		CString operator+(CString st)
		 {
		 	CString str;
		 	strcpy(str.s,s);
		 	strcat(str.s,st.s);
		 	return str;
		 }
		bool operator==(CString str)
		 {
            for(int i=0;s[i]!='\0';i++)
		 	 {
		 	 	if(s[i]!=str.s[i])
		 	 	    return false;
			 }
			 return true;
		 	
		 }
		
};
int main()
{
	CString s1,s2,s3;
	cout<<"Enter 1st string"<<endl;
	s1.setStirng();
	cout<<"Enter 2nd string"<<endl;
	s2.setStirng();
	s3=s1+s2;
	s3.Display();
	cout<<endl;
	if(s1==s2)
	   cout<<"Equal";
	else 
	   cout<<"Not Equal";
	cout<<endl;
	return 0;
}
