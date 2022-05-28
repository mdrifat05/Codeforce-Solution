#include<iostream>
using namespace std;
int main()
{
    int n;
    float c=0,a;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        c = c+arr[i];
    }
    a = c/n;
    cout<<a;
}
