#include<bits/stdc++.h>
using namespace std;
int main()
{
    int coins[12]={1,2,5,10,20,40,50,60,100,200,500,1000};
    int v,count=0;
    cout<<"Enter the desired currency :";
    cin>>v;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {


        if(v<coins[j])
        {

            cout<<coins[j-1]<<" ";
            v=v-coins[j-1];
           // j++;
            count++;
            break;
        }
        else if(v==coins[i])
        {
            count++;
            v=v-coins[j];
            cout<<coins[j]<<" ";
            break;
        }
    }
    if(v==0)
        break;
    }
    cout<<endl<<"Total coins needed: "<<count<<endl;

}
