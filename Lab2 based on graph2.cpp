#include<bits/stdc++.h>
using namespace std;
#define Inf 20000
#define limit 100
int dist[limit][limit], testcase=0;
int main(){
        int node1, node2;

        while(true)
        {

            cin>>node1>>node2;

            if(node1==0 && node2 ==0)   break;

            testcase++;
            for(int i=0;i<limit;i++){
                for(int j=0;j<limit;j++)
                    dist[i][j] = Inf;}

            do
            {
                dist[node1][node2] = 1;
                dist[node1][node1] = dist[node2][node2] = 0;

                cin>>node1>>node2;
            }while(node1>0 && node2>0);

            for(int k=1; k<limit; k++)
                for(int i=1; i < limit; i++)
                    for(int j=1; j<limit; j++)
                    {
                        if(j==i) continue;

                        if(dist[i][j] >dist[i][k] + dist[k][j])
                        {
                            dist[i][j] = dist[i][k] + dist[k][j];
                        }
                    }

            int nodes=0;
            float sum=0;

            for(int i=1; i < limit; i++)
            {
                for(int j=1;j<limit;j++)
                {
                    if( i==j && dist[i][i] == 0) nodes++;
                    else if(i!=j && dist[i][j] !=Inf)
                    {
                        sum+=dist[i][j];
                    }

                }

            }

            float pairs = nodes * (nodes - 1);
            float avg_dist = sum/pairs;


        printf("Case %d: average length between pages = %.3lf clicks\n", testcase, avg_dist);
      testcase++;
        }
    }
