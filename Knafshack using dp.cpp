#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,W,k;
    cout<<"Enter number of item & maximum weight :"<<endl;
    cin>>n>>W;
    int p[n+1][W+1],val[n],w[n];
    cout<<"Enter the value of correspoding item :"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>val[i];
    }

    cout<<"Enter the weight of correspoding item :"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i];
    }


    /*for(int i=0;i<=n;i++)
    {
        p[i][0]=0;
    }

    for(int j=0;j<=W;j++)
    {
        p[0][j]=0;
    }*/
    for(int i=0;i<=n;i++)
    {
        //k=w[i];
        for(int j=0;j<=W;j++)
        {
            //k=w[i];
            if(i==0 || w==0)
            {
                p[i][j]=0;
            }

             else if(w[i]>j)
            {
                p[i][j]=p[i-1][j];

            }
            else
            {
                 p[i][j]=max(val[i-1]+p[i-1][j-w[i]], p[i-1][j]);
            }
        }
    }
    cout<<p[n][W];
}
