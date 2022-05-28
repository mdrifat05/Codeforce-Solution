#include<iostream>
using namespace std;
int main()
{
    int a,b;
    string gb;
    cin>>a>>b;
    cin>>gb;
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<gb.size()-1; j++)
        {
            if(gb[j]=='B' && gb[j+1]=='G')
            {
                gb[j]='G';
                gb[j+1]='B';
                j++;
            }
        }
    }
    cout<<gb;
}
