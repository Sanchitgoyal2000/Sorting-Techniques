#include<iostream>
using namespace std;
void insertsort(int *a,int n);
int main()
{
 int n;
 cout<<"Enter size ";
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
  cin>>a[i];
 insertsort(a,n);
 for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}
void insertsort(int *a,int n)
{
 int temp,j;
 for(int i=1;i<n;i++)
 {
  temp=a[i];
  for(j=i-1;j>=0&&temp<a[j];j--)
  {
   a[j+1]=a[j];
  }
  a[j+1]=temp;
 }
}
