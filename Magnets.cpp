#include<iostream>
using namespace std;
int main()
{
    int n,counter=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] != arr[i+1])
        {
            counter++;
        }
    }
    cout<<counter<<endl;
}
