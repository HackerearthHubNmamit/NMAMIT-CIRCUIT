#include<iostream>
using namespace std;
int main()
{
	int n;//To store the number of friend Ram can have
	cin>>n;//Storeing the friend value;
	int x;//To store the mininum rating required to be ram's friend
	cin>>x;//Storeing the rating values;
	for(int i=0;i<n;i++)
	{
		int val;
		cin>>val;
		if(val>=x)//To check if the given guy can become ram's friend
		   cout<<"YES"<<endl;
		else
		   cout<<"NO"<<endl;
	}
}