#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int val;
	cin>>val;
	int n=s.length();
	string s1;
	for(int i=0;i<n;i++)
	{
		  int val1=s[i]-'0';//To check if the character is Numeric
		  int val2=s[i]-'a';//To check if the character is lower case alphabet
		  int val3=s[i]-'A';//To check if the character is upper case alphabet
		  if(val1>=0 && val1<=9)//If the character is numberic modification will be done according to it
		  {
			  int r=(val1+val)%10;
			  char c='0'+r;
			  s1+=c;//
			  continue;
		  }
		  if(val2>=0 && val2<=25)//If the character is lower case alphabet the modification are done accordingly
		  {
			   int r=(val2+val)%26;
			   char c='a'+r;
			   s1+=c;
			   continue;
		  }
		  if(val3>=0 && val3<=25)//If the character is upper case alphabet the modification are done accordingly
		  {
			   int r=(val3+val)%26;
			   char c='A'+r;
			   s1+=c;
			   continue;
		  }
		  s1+=s[i];

	}
	cout<<s1<<endl;
}