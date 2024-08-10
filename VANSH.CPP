#include<bits/stdc++.h>
using namespace std;

bool isprime(int i)
{
    if(i==2)
    {
        return true;
    }
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"The Prime numbers are"<<endl;
    for(int i=2;i<n;i++)
    {
        if(isprime(i))
        {

            cout<<i<<endl;
        }
    }
    return 0;
}
