#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int row,col,num[5][5];
    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5; col++)
        {
            cin>>num[row][col];
            if(num[row][col]==1)
            {
                cout<<abs(row-3)+abs(col-3)<<endl;
                return 0;

            }
        }
    }
}
