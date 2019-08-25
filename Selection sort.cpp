#include<iostream>
using namespace std;
void selectionsort(int *a,int n);
int main()
{
 int n;
 cout<<"Enter size ";
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
  cin>>a[i];
 selectionsort(a,n);
 for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}
void selectionsort(int *a,int n)
{
 int mini,index;
 for(int i=0;i<n;i++)
 {
  mini=a[i];
  index=i;
  for(int j=i+1;j<n;j++)
  {
    if(a[j]<mini)
    {
     mini=a[j];
     index=j;
    }
  }
  if(i!=index)
  {
  a[index]=a[i];
    a[i]=mini;
  }
 }
}
