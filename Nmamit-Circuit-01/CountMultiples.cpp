#include<iostream>
using namespace std;
int main()
{
int l,r,k;
	cin>>l>>r>>k;//Reading the variable values
	int count=0;//Counter to store the number of multiples
	for(int i=l;i<=r;i++)
	{
		  int val=i%k;//Finding the remainder to check for the mutliple
		  if(val==0)// Checking if the value is remainder or not
		  	   count++;
	}
	cout<<count<<endl;//Printing the count of multiple
}
