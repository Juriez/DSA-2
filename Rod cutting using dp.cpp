#include<bits/stdc++.h>
using namespace std;
int cut_rod(int p[1000], int n)
{
    //int r[n+1];
    //r[0]=0;
    int max_val=INT_MIN;
    /*for(int i=0;i<n+1;i++)
    {
        r[i]=max_val;
    }*/
    if(n<=0)
        return 0;
    //int max_val=INT_MIN;
    for(int j=1;j<=n;j++)
    {

            max_val=max(max_val,p[j]+cut_rod(p,n-j));
            //r[j]=max_val;

    }
    return max_val;
}
int main()
{
    int prc[1000],m,n;
    cout<<"Enter total number of rod :"<<endl;
    cin>>n;
    cout<<"Enter the price of the respective rod :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>prc[i];
    }
    cout<<"What the rod the price do you want? "<<endl;
    cin>>m;
    //m=sizeof(prc)/sizeof(prc[0]);
    int benefit=cut_rod(prc,m);
    cout<<benefit;
}
