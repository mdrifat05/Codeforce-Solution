#include<iostream>
using namespace std;
int main()
{
    string n;
    int counter=0;
    cin>>n;
    for(int i=0;i<n.size();i++)
    {
        if(n[i]== '4' || n[i]=='7')
        {
            counter++;
        }
    }
    if(counter==4||counter==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}
