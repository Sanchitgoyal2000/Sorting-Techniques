#include <iostream>
#include<stack>
using namespace std;
#include<stdio.h>
void heapsort(int arr[],int n);
void heapify(int arr[],int n,int i);
int main()
{
 int a[5]={4,1,3,9,7};
 int n=5;                 //array size
 heapsort(a,n);
 for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}
void heapsort(int arr[],int n)
{
 for(int i=n/2-1;i>=0;i--)   // upto half array as further elements will not have children they are leafs
  heapify(arr,n,i);
 for(int i=n-1;i>=0;i--)
 {
  swap(arr[0],arr[i]);
  heapify(arr,i,0);
 }
}
void heapify(int arr[],int n,int i)
{
 int max=i;
 int l=2*i+1;
 int r=2*i+2;
 if(l<n&&arr[l]>arr[max])
  max=l;
 if(r<n&&arr[r]>arr[max])
 max=r;
 if(max!=i)
 {
  swap(arr[i],arr[max]);
  heapify(arr,n,max);
 }
}
