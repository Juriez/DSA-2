
#include<bits/stdc++.h>
using namespace std;
#define INF 100000


int rod_cutting(int c[], int n,int cost)
{

    int r[n+1];
    r[0] = 0;
  for(int i=1; i<=n; i++) {
    r[i] = -1*INF;
  }
    if (r[n] >= 0)
    {
        return r[n];
    }

    int maximum_benefit = -1*INF;
    int i;

    for(i=1; i<=n; i++)
    {
        // maximum_revenue = MAX(maximum_revenue, c[i] + top_down_rod_cutting(c, n-i));
        maximum_benefit=max(maximum_benefit,c[i]-cost + rod_cutting(c, n-i,cost));
    }

    r[n] = maximum_benefit;
    return r[n];
}

int main()
{
    cout<<"Enter the total number of rods :"<<endl;
    int n;
    cin>>n;
    int price[n];
    price[0]=0;

    cout<<"Enter corresponding prices of the rods :"<<endl;
    for(int i=1; i<=n; i++)
        cin>>price[i];
    int cost;

    int m;
    cout<<"Enter your desired size :"<<endl;
    cin>>m;
    cost=m;
    int max_benefit=rod_cutting(price,m,cost);
    cout<<"Maximum profit"<<endl;
    cout<<max_benefit+cost<<endl;
    return 0;
}
// 1 5 8 9 10 17 17 20 24 30


