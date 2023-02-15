#include<bits/stdc++.h>
using namespace std;
int combination(int n,int r)
{
    if(r==1)
        return n;
    else if(r==0 || r==n)
        return 1;
    else
        return combination(n-1,r-1)+combination(n-1,r);
}
int main()
{
    int n,r,result=0;
    cout<<"Enter total amount & choosen amount :"<<endl;
    cin>>n>>r;
    result=combination(n,r);
    cout<<"C("<<n<<","<<r<<")="<<result;
}
