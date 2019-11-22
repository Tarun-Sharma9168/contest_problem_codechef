#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int polygonArea(vector<int> X, vector<int> Y, int n) 
{ 
    // Initialze area 
    double area = 0.0; 
    // Calculate value of shoelace formula 
    int j = n - 1; 
    for (int i = 0; i < n; i++) 
    { 
        area += (X[j] + X[i]) * (Y[j] - Y[i]); 
        j = i;  // j is previous vertex to i 
    } 
    // Return absolute value 
    return (int)(2*abs(area / 2.0)); 
} 
int main()
{
    int t;
    cin>>t;

    int N;
    int a,b;
    while(t--)
    {
        queue<int> q1;
        queue<int> q2;
        cin>>N;
       vector<int> v1(N,0);
       vector<int> v2(N,0);
       vector<int> v3(N,0);
       vector<int> v4(N,0);
       for(int i=0;i<N;i++)
       {
       cin>>a;
       v1.push_back(a);
       cin>>b; 
       v2.push_back(b);
       v3.push_back(b);
       }
       sort(v3.begin(),v3.end());
       sort(v2.begin(),v2.end(),greater<int>());
       for(int i=0;i<N;i++)
       {
          q1.push(v3[i]);
          cout<<q1.front()<<" ";
       }
       cout<<"\n";
       for(int i=0;i<N;i++)
       {
          q2.push(v2[i]);
       }
      int p=1;
      for(int i=0,j=N-1;i<j;i++,j--)
      {
        if(p & 1)
        {
        if(!q1.empty())
        {
           v4[i]=q1.front();
           q1.pop();
        }
        if(!q1.empty())
        { 
           v4[j]=q1.front();
           q1.pop();
        }
        p+=1;
        }
        else
        {
            if(!q2.empty())
            {
              v4[i]=q2.front();
              q2.pop();
            }
            if(!q2.empty())
            {
              v4[j]=q2.front();
              q2.pop();
            }
           p+=1;
        }         
    }

    for(int i=0;i<N;i++)
    {
        cout<<v4[i]<<" ";
    }
    cout<<"\n";
    vector< pair<int,int> > pp(N);
    for(int i=0;i<N;i++)
    {
        pp[i].first=v1[i];
        pp[i].second=v4[i];
    }
    sort(pp.begin(),pp.end());
    for(int i=0;i<N;i++)
    {
        v1[i]=pp[i].first;
        v4[i]=pp[i].second;
    }
    cout<<polygonArea(v1,v2,N)<<"\n";
}
return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc;
cin>>tc;
while(tc--)
{
int n;
cin>>n;
vector<int> x1(n),x2(n),h(n);
for(int i=0;i<n;i++)
{
cin>>x1[i]>>h[i];
}
x2[0]=x1[1]-x1[0];
x2[n-1]=x1[n-1]-x1[n-2];
for(int i=1;i<n-1;i++)
{
x2[i]=x1[i+1]-x1[i-1];
}
sort(x2.begin(),x2.end());
sort(h.begin(),h.end());
long long ans=0;
for(int i=0;i<n;i++)
{
ans+=1LL*x2[i]*h[i];
}
cout<<ans<<"\n";
}
}