#include<iostream>
using namespace std;
int main()
{
    int n,limit;
    cin>>n>>limit;
    for(int i=0; i<limit; i++)
    {

        if(n%10==0)
        {
            n = n/10;
        }
        else
        {
            n--;
        }
    }
    cout<<n;
    return 0;
}
