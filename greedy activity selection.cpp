#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[100];
    int f[100],temp=0,n,temp2=0;
    cout<<"Enter the job number: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        cin>>f[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(f[j]<f[i])
            {
                temp=f[j];
                f[j]=f[i];
                f[i]=temp;
                temp2=s[j];
                s[j]=s[i];
                s[i]=temp2;
            }
        }
    }
    /*for(int i=0;i<n;i++)
    {
        //cin>>s[i];
        cout<<s[i]<<" ";
    }*/
    int i=0;
    cout<<s[0]<<","<<f[0]<<endl;
    for(int j=1;j<n;j++)
    {
        if(s[j]>=f[i])
        {
            cout<<s[j]<<","<<f[j]<<endl;
            i=j;
        }
    }

}
