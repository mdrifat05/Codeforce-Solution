#include<iostream>
using namespace std;
int main()
{
    int n,maX,miN,result=0,maxi=0,mini=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    maX = arr[0];

    for(int i=0; i<n; i++)
    {
        if(arr[i]>maX)
        {
            maX=arr[i];
            maxi=i;
        }
    }
    miN=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=miN)
        {
            miN=arr[i];
            mini=i;
        }
    }
    if(maxi>mini)
    {
        mini++;
    }
    result = maxi+(n-1)-mini;
    cout<<result;
}
