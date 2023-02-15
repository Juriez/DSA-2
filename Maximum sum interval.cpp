#include<bits/stdc++.h>
using namespace std;
int A[100];
int pre[100];
int sum[100];
int n;
int maxSum(int A[100], int n);
int print_maxSum(int pre[100],int i);

int main()
{
      sum[0]=0;
      cout<<"Enter number of elements :"<<endl;
      cin>>n;
      cout<<"Enter the numbers :"<<endl;
      for(int i=0;i<n;i++)
      {
          cin>>A[i];
      }
      for(int i=0;i<=n;i++)
      {
          pre[i]=0;
      }
      maxSum(A,n);
      //print_maxSum(pre,1);
      for(int i=0;i<=n;i++)
      {
          print_maxSum(pre,i);
      }

}

int maxSum(int A[100], int n)
{
    for(int i=1;i<n;i++)
    {
        sum[i]=sum[i-1] + A[i];
        pre[i]=i-1;

        if(A[i]>sum[i])
        {
            sum[i]=A[i];
            pre[i]=0;
        }
        //print_maxSum(pre,i);

    }
    /*int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(sum[j]>sum[j+1])
            {
                temp=sum[j+1];
                sum[j+1]=sum[j];
                sum[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<sum[i]<<" ";
    }*/
    cout<<endl;
}

int print_maxSum(int pre[100],int i)
{
    if(pre[i]>0)
    {
        print_maxSum(pre,pre[i]);
        cout<<A[i]<<" ";
    }
   // cout<<endl<<A[i]<<" ";
}
//9 -3 1 7 -15 2 3 -4 2 -7 6 -2 8 4 -9
