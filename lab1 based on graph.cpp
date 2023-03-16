#include<bits/stdc++.h>
using namespace std;
#define Inf 20000
#define limit 100
int dist[limit][limit], testcase=0;
int main()
{
    int c,s,q;
    while(true){

        cin>>c>>s>>q;
        if(c==0 && s==0 && q==0){
            break;
        }
        testcase++;
        for(int i=1;i<=c;i++){
                for(int j=1;j<=c;j++)
                    if(i!=j){
                    dist[i][j] = Inf;}
                    else dist[i][j]=0;
                    }
        int c1,c2,d;
        for(int i=0;i<s;i++){
            cin>>c1>>c2>>d;
            dist[c1][c2]=d;
            dist[c2][c1]=d;}
            for(int i=1;i<=c;i++){
                for(int j=1;j<=c;j++){
                    cout<<dist[i][j]<<" ";
                }cout<<endl;
            }
        for(int k=1; k<=c; k++)
                for(int i=1; i <=c; i++)
                    for(int j=1; j<=c; j++)
                    {
                        //if(j==i) continue;

                        if(dist[i][k] >  + dist[k][j])
                        {
                            dist[i][j] = min(dist[i][k],dist[i][j]);
                        }
                        else
                        {
                             dist[i][j] = min(dist[k][j],dist[i][j]);
                        }
                    }


        for(int i=0;i<q;i++){
                int c1,c2;
            cin>>c1>>c2;
            if(dist[c1][c2]==Inf)
                cout<<"no path"<<endl;
            else
            cout<<dist[c1][c2]<<endl;
        }
        testcase++;

    }
}
