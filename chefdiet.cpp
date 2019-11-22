#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int N;
    int K;
    while(t--)
    {
      cin>>N>>K;
      int arr[N];
      int sum=0;
      for(int i=0;i<N;i++)
      {
          cin>>arr[i];
      }
      bool flag=true; 
      int day;
      for(int i=0;i<N;i++)
      {
          arr[i]+=sum;
          if((arr[i]-K) >= 0)
          {
              sum=(arr[i]-K);
          } 
          else{
              flag=false;
              day=i+1;
              //cout<<"NO"<<" "<<i+1<<"\n";
              break;
          }
      }
      if(flag)
      {
          cout<<"YES"<<"\n";
      }
      else{
          cout<<"NO"<<" "<<day<<"\n";
      }
    }
    return 0;
}