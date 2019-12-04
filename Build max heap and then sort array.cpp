#include <iostream>
#include<limits.h>
using namespace std;
void heapify(int *a,int i,int n);
void swap(int *a,int *b);
int main()
{
    int a[8]={2,115,3,1,10,3,55,46};
    int n=8;
    int index=n/2;                 //0 to n/2 nodes to be heapified
    for(int i=index;i>=0;i--)      //nodes from n/2+1 to n are leaf nodes So no need to heapify
    {
        heapify(a,i,n);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(&a[0],&a[i]);
        heapify(a,0,i);
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
void heapify(int *a,int i,int n)                          //building max heap here
{
    int left=2*i+1;
    int right=2*i+2;
    int largest=i;
    if(left<n&&a[left]>a[largest])
    {
        largest=left;
    }
    if(right<n&&a[right]>a[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(&a[i],&a[largest]);
        heapify(a,largest,n);
    }
}
void swap(int *a,int *b)
{
    int temp=*b;
    *b=*a;
    *a=temp;
}
