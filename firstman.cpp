#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    string tp;
    while(t--)
    {
       cin>>s;
       cin>>tp;
       int p=tp.length();
       int q=0;
      for(int i=0;i < tp.length();i++)
      {
          for(int j = q; j < s.length() ; j++)
          {
             if(tp[i] == s[j])
             {
                p--;
                q = j+1;
                break;
             }
          }
      }
      if(p == 0)
      {
          cout<<"YES"<<"\n";
      }
      else{
          cout<<"NO"<<"\n";
      }
    }
    return 0;
}