#include<math.h>
using namespace std;
int main()
{
	  int n;
	  cin>>n;//Reading the size of array
	  int r=(-1+sqrt(1+8*n))/2;//Length of the maximum number of elements you can pick special sum
	  int k=(r*(r+1))/2;//Length of the total number of elements present in the max special sum array
	  long long int arr[n],arr1[n];//Initializing the array
	  cin>>arr[0];//reading the first element
	  arr1[0]=arr[0];//Storing the prefix sum
	  for(int i=1;i<n;i++)
	  {
	     cin>>arr[i];//reading the value
		 arr1[i]=arr[i]+arr1[i-1];//Storing the prefix sum
	  }
	  long long int max_sum=arr1[k-1];
	  for(int i=1;i<n;i++)
	  {
		     if(i+k<=n)
			 {
				   max_sum=max(max_sum,arr1[i+k-1]-arr1[i-1]);//Storing the maximum special sum staring from particular index
			 }
			 else
			 {
				   k-=r;
				   r--;
				   max_sum=max(max_sum,arr1[i+k-1]-arr1[i-1]);//Storing the maximum speacial sum staring from particular index
			 }
	  }
	  cout<<max_sum<<endl;//Printing the result
}