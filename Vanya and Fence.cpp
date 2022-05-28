#include<iostream>
using namespace std;
int main()
{
    int n,h,count1=0, count2=0;
    cin>>n>>h;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<=h)
        {
            count1++;
        }
        else
        {
            count2=count2+2;
        }
    }
    cout<<count1+count2;
}
