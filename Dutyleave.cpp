#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int count_odd = 0;
    int count_even = 0;
    for(int i=0;i<N;i++)
    {
        if(arr[i] & 1)
        {
            count_odd++;
        }
        else
        {
            count_even++;
        }
    }
    if(count_even == count_odd)
    {
        cout<<"DL"<<"\n";
    }
    else if(count_even==(count_odd-1) || count_odd == (count_even-1))
    {
        cout<<"DL"<<"\n";
    }
    else
    {
        cout<<"DETAIN"<<"\n";
    }
    return 0;
}