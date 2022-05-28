#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int cap,sml;
    cap=0;sml=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            cap++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            sml++;
        }
        else
        {
            sml++;
        }
    }
    if(cap>sml)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=toupper(s[i]);
            cout<<s[i];
        }
    }
    else if(cap<sml)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
            cout<<s[i];
        }

    }
    else if(cap==sml)
    {
         for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
            cout<<s[i];
        }
    }
}
