#include<bits/stdc++.h>
#define int long long int 
using namespace std;
const int val=pow(10,7)+1;
int arr1[val];
void pre_compute()
{
   for(int i=3;i<=val;i+=2)
         arr1[i]=1;
   int v1=sqrt(val);
   for(int i=3;i<=v1;i+=2)
   {
        if(arr1[i]==1)
        {
         for(int j=i*i;j<=val;j+=i)
               arr1[j]=0;
        }
   }
   arr1[1]=arr1[0]=0;
   arr1[2]=1;
   
   for(int i=2;i<=val;i++)
        {
            arr1[i]+=arr1[i-1];
        }
}


void solve()
{
      int val1,val2;
     cin>>val1>>val2;
     int val3,val4;
     val3=floor(sqrt(val1-1));
     val4=floor(sqrt(val2));
    
     int res=arr1[val4]-arr1[val3];
     cout<<res<<endl;


}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pre_compute();
    int t;
    cin>>t;
    while(t-->0)
    {
       solve();
    }

   
}
