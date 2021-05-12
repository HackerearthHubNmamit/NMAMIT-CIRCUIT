#include<iostream>
using namespace std;
int main()
{

	int d,r,x;
	int count=0;//Counter to store the numbe of toffies vicky can get
	cin>>d;//To read the number of days
	for(int i=0;i<d;i++)
	{
		  cin>>r>>x;//TO read the value of r and x
		  double r1=x*100;//Distance Vicky can travel 
		  double r2=2*(22/double(7))*r;//Distance of the track
		  if(r1>=r2)//TO check weather vicky can run that distance of not
             count++;//Increase the counter
	}
	cout<<count<<endl;
}