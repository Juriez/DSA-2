#include<bits/stdc++.h>
using namespace std;
int permutation(int n,int r)
{
    int sum=1;
    for(int i=0;i<r;i++)
    {
        sum=sum*n;
        n=n-1;
    }return sum;

}
int main()
{
    int n,r,result;
    cin>>n>>r;
    result=permutation(n,r);
    cout<<"P("<<n<<","<<r<<")="<<result;
}
