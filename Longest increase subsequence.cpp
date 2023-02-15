#include<iostream>
using namespace std;
int maxLength=0;
int maxIndex=0;
int lis(int a[], int n)
{
    int i, j;


    int L[n];


    for(i=0;i<n;i++)
        L[i]=1;



    for(i=1;i<n;i++)
    {

        for(j=0;j<i;j++)
        {

            if(a[i]>a[j] && L[i]<L[j]+1)
            {
                L[i]=L[j]+1;
            }
        }
    }




    for(i=0;i<n;i++)
    {
        if(L[i]>maxLength)
            {maxLength=L[i];
            maxIndex=i;}
    }

    return maxLength;


}

int main()
{
    int i,n;

    cout<<"Enter the no. of elements ";
    cin>>n;

    int a[n];

    cout<<"Enter the values"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int result=lis(a,n);

    cout<<"The number of terms in the longest increasing subsequence is "<<result;
    cout<<" Maximum Index :"<<maxIndex;
}
