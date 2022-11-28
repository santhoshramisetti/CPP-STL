#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vet;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vet.push_back(x);
    }
    for(auto i:vet)
    {
        cout<<i<<" ";
    }
}