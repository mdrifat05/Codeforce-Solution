#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int max_level=0,x=0,y=0,counter=0;
    cin>>max_level;

    cin>>x;
    int p[200];
    for(int i=0; i<x; i++)
    {
        cin>>p[i];

    }
    cin>>y;
    for(int i=x; i<x+y; i++)
    {
        cin>>p[i];
    }
    sort(p, p+(x+y));
    for(int i=0; i<x+y; i++)
    {
        if(p[i]!=p[i+1])
        {
            counter++;
        }
    }
    if(counter==max_level)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
}
