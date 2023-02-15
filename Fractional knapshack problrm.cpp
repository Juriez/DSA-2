#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w[100],b[100],v[100],sum=0,n,t,temp=0,temp2=0,temp3=0;
    cout<<"Enter total capacity :";
    cin>>n;
    cout<<"Enter number of items :";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>w[i];
        cin>>b[i];
    }
    for(int i=0;i<t;i++)
    {
        v[i]=b[i]/w[i];
    }
    cout<<"Weight :";
    for(int i=0;i<t;i++)
    {
        cout<<w[i]<<" ";
    }
    cout<<endl<<"Benifit :";
    for(int i=0;i<t;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl<<"Value :";
    for(int i=0;i<t;i++)
    {
        cout<<v[i]<<" ";
    }
    for(int i=0;i<t;i++)
    {
        for(int j=i+1;j<t;j++)
        {
            if(v[j]>v[i])
            {
                temp=v[j];
                v[j]=v[i];
                v[i]=temp;
                temp2=w[j];
                w[j]=w[i];
                w[i]=temp2;
                temp3=b[j];
                b[j]=b[i];
                b[i]=temp3;
            }
        }
    }
    /*for(int i=0;i<t;i++)
    {
        //cin>>w[i];
        cout<<v[i]<<" "<<w[i]<<" "<<b[i]<<endl;
    }*/
    for(int i=0;i<t;i++)
    {
        if(w[i]<=n)
        {
            sum=sum+b[i];
            n=n-w[i];
        }
        else
        {
            sum=sum+(n*v[i]);
            break;
        }
    }
    cout<<endl<<endl<<"So,total profit is :"<<sum<<endl;

}
