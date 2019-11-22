#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        vector<pair<int,int>> v1(26);
        for(int i=0;i<26;i++)
        {
            v1[i].first=0;
            v1[i].second=0;
        }
        vector<int> diff(26);
        for(int i=0;i<26;i++)
        {
            diff[i]=0;
        }
        char p='a';
        bool flag=false;
        int new_index;
        for(int i=0;i<26;i++)
        {
            flag=false;
            new_index=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j] == p)
            {
                if(!flag)
                {
                    v1[i].first=j;
                    flag=true;
                }
                else
                {
                    new_index=j; 
                }
            }
        }
        v1[i].second=new_index;
        p++;
        }
        /*for(int i=0;i<26;i++)
        {
            cout<<v1[i].first<<" "<<v1[i].second<<"\n";
        }
        */
        for(int i=0;i<26;i++)
        {
            diff[i]=v1[i].second - v1[i].first;
        }
        int max;
        int max_number = (-1e9);
        for(int i=0;i<26;i++)
        {
            if(diff[i]  > max_number)
            {
                max=i;
                max_number=diff[i];
            }
        }
        char a=(char)(max+97);
        cout<<(char)a<<" "<<max_number<<"\n";
    }
    return 0;
}