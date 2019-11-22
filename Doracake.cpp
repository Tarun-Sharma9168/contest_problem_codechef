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
      int arr1[n];
      int arr2[n];

      for(int i=0;i<n;i++)
      {
          cin>>arr1[i];
      }
      for(int i=0;i<n;i++)
      {
          cin>>arr2[i];
      }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);

     long long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=min(arr1[i],arr2[i]);
    }
    cout<<sum<<"\n";        
    }
    return 0;
}