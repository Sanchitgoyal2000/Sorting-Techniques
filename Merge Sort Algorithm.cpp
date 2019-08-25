#include<iostream>
using namespace std;
void mergesort(int *a,int s,int e);
void mergearray(int *a,int s,int e);
int main()
{
 int n;
 cout<<"Enter size ";
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
  cin>>a[i];
 mergesort(a,0,n-1);
 for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}
void mergesort(int *a,int s,int e)
{
 if(s>=e)
  return;
 int mid=(s+e)/2;
 mergesort(a,s,mid);
 mergesort(a,mid+1,e);
 mergearray(a,s,e);
}
void mergearray(int *a,int s,int e)
{
 int mid=(s+e)/2;
 int i,j,k;
 i=s;
 j=mid+1;
 k=s;
 int temp[100];
 while(i<=mid&&j<=e)
 {
  if(a[i]<=a[j])
  {
   temp[k]=a[i];
   i++;
   k++;
  }
  else
  {
   temp[k]=a[j];
   j++;
   k++;
  }
 }
 while(i<=mid)
 {
  temp[k]=a[i];
   i++;
   k++;
 }
 while(j<=e)
 {
   temp[k]=a[j];
   j++;
   k++;
 }
 for(i=s;i<=e;i++)
 {
  a[i]=temp[i];
 }
}
