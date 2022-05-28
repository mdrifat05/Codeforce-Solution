#include<iostream>
using namespace std;
int main()
{
    int k,n,w,sum=0;
    cin>>k>>n>>w;
    for(int i=0; i<w; i++)
    {
        sum += k*(i+1);
    }
    int price = sum-n;
    if(price>0)
    {
        cout<<price;
    }
    else
    {
        cout<<"0";
    }
}
