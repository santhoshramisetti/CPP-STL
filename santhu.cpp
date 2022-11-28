#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    if((n>>(k-1)&1))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}