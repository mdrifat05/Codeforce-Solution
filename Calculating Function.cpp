#include<iostream>
using namespace std;
int main()
{
    long long int n,c;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2;
    }
    else
    {
        c = -(n/2+1);
        cout<<c;
    }

}
