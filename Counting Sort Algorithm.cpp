#include<iostream>
using namespace std;
void countsort(int *a,int n,int *b,int k);
int main()
{
 int n;
 cout<<"Enter size ";
 cin>>n;
 int a[n],b[n],k=INT_MIN;
 for(int i=0;i<n;i++)
  cin>>a[i];
 for(int i=0;i<n;i++)
 {
  if(a[i]>k)
   k=a[i];
 }
 countsort(a,n,b,k+1);  // k+1 as we want to make array of c[k] 0 can also be in array
 for(int i=0;i<n;i++)
  cout<<b[i]<<" ";
}

void countsort(int *a,int n,int *b,int k)
{
 int c[k],i;
 for(i=0;i<k;i++)
  c[i]=0;
 for(i=0;i<n;i++)
  c[a[i]]=c[a[i]]+1;  //using hashing
 for(i=1;i<k;i++)
  c[i]=c[i]+c[i-1];
 for(i=0;i<n;i++)
 {
  b[c[a[i]]-1]=a[i];
  c[a[i]]=c[a[i]]-1;
 }
}
