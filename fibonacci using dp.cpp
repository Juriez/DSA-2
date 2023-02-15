#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    int f[n];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    return f[n-1];

}
int main()
{
    int n;
    cout<<"Enter your desired number:"<<endl;
    cin>>n;
    //fib(n);
    cout<<"Fibonacci number for "<<n <<" is :"<<fib(n);

}
