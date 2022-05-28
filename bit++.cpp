#include<iostream>
using namespace std;
int main(){
    int x=0,no_oftest;
    string operation;
    cin>>no_oftest;

    for(int i=0; i<no_oftest; i++){
        cin>>operation;
        if(operation[1]=='+'){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x;

}
