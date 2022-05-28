#include<iostream>
using namespace std;
int main()
{
    int n,a,b,stillnow=0,sum=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        stillnow = stillnow-a;
        stillnow = stillnow+b;
        sum = max(sum,stillnow);
    }


    cout<<sum;
}
