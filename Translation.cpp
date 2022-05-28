#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    reverse(s.begin(), s.end());
    if(t == s)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}

