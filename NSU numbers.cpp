#include<bits/stdc++.h>
using namespace std;
int Nsu_num(int n)
{
    int Ns[n];
    Ns[0]=0;
    Ns[1]=1;
    Ns[2]=2;
    for(int i=3;i<n;i++)
    {
        Ns[i]=Ns[i-2]+Ns[i-1]+Ns[i-3];
    }
    return Ns[n-1];
}
int main()
{
    int n,sum;
    cin>>n;
    sum=Nsu_num(n);
    cout<<sum;
}
