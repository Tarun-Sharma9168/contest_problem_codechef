#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int a, b;
        cin >> a >> b;
        long long int res1 = a*b;
        
        long long int res2 = a+b;
        
        
        long long int pp=(res1 - res2);
        
        if(pp > 0)
        {
            cout<<pp<<"\n";
        }
        else{
            cout<<"0"<<"\n";
        }
    }
    return 0;
}

