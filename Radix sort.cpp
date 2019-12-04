/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<limits.h>
using namespace std;
void radixcount(int *a,int exp1,int n);
int main()
{
    int a[6]={2,115,3,1,10,3};
    int n=6;

    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }

    for(int exp1=1;max/exp1>0;exp1=exp1*10)
    {
        radixcount(a,exp1,n);
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
void radixcount(int *a,int exp1,int n)
{
    int count[10]={0};
    int output[n];

    for(int i=0;i<n;i++)
    {
        count[(a[i]/exp1)%10]++;
    }

    for(int i=1;i<10;i++)
    {
        count[i]=count[i]+count[i-1];         //fr particular position
    }

    for(int i=n-1;i>=0;i--)              //to maintain stability
    {
        output[count[(a[i]/exp1)%10]-1]=a[i];
        count[(a[i]/exp1)%10]--;

    }
    for(int i=0;i<n;i++)
    {
        a[i]=output[i];
    }
}
