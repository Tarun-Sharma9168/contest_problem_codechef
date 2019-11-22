#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
      cin>>n;

      int arr[n];
      long long int sum1=0;
      long long int sum2=0;


      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }

      sort(arr,arr+n,greater<int>());
      for(int i=0;i<n;i++)
      {
          if(i & 1)
          {
              //cin>>arr[i];
              sum2+=arr[i];
          }
          else{
              //cin>>arr[i];
              sum1+=arr[i];
          }
      }
      if((sum1 - sum2) > 0)
      {
          cout<<"Dora"<<"\n";
      }
      else if(sum1 == sum2)
      {
          cout<<"Draw"<<"\n";
      }
      else{
          cout<<"Boots"<<"\n";
      }
    }
    return 0;
}