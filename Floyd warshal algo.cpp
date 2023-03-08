#include<bits/stdc++.h>
using namespace std;


int main()
{
    cout<<"Enter total vertex number :"<<endl;
    int n,edge;
    cin>>n;
    int  p[n][n], d[n][n],w[n][n];
    //int a=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        w[i][i]=0;
        for(int j=1;j<=n;j++)
        {
           if(i!=j)
            w[i][j]=1000;
        }
    }
    cout<<"Enter the number of edge :"<<endl;
    cin>>edge;
    for(int i=1;i<=edge;i++)
    {
        int v1,v2,weight;
        cout<<"Enter vertices between the edge exist :"<<endl;
        cin>>v1>>v2;
        cout<<"Enter the weight of that edge :"<<endl;
        cin>>weight;
        w[v1][v2]=weight;
    }
    /*for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<w[i][j]<<" ";
        }cout<<endl;
    }*/
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            d[i][j]= w[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<d[i][j]<<" ";
        }cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i==j) || w[i][j]==1000)
                p[i][j]=0;
            else if((i!=j) &&  w[i][j]<1000)
                p[i][j]= i ;
        }
    }

    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(d[i][k]+ d[k][j] < d[i][j])
                {
                    d[i][j]=d[i][k]+ d[k][j];
                    p[i][j]=p[k][j];
                }
            }
        }
    }
    cout<<"So, the shortest path matrix :"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<d[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"Path matrix :"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<p[i][j]<<" ";
        }cout<<endl;
    }
    int source,destination;
    cout<<"Enter source & destination :"<<endl;
    cin>>source>>destination;
    cout<<"Shortest path between source & destination is :"<< d[source][destination]<<endl;



}
