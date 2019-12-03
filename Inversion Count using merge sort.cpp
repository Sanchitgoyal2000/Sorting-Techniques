#include <iostream>
using namespace std;
long mergearrays(int arr[] , int l , int r);
long merge(int *a,int s,int e);
int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cout<<merge(a,0,n-1)<<"\n";
	}
	return 0;
}

long merge(int *a,int s,int e)
{
    long count=0;
    if(s>=e)
    return 0;

    int mid=(s+e)/2;
    count=count+merge(a,s,mid);
    count=count+merge(a,mid+1,e);

    count=count+mergearrays(a,s,e);

    return count;

}
long mergearrays(int arr[] , int l , int r)
{
     long count=0;
     int mid=(l+r)/2;
     int i=l,j=mid+1,k=0;
     int temp[r-l+1];             //dont make temp[1000] like this,it may give runtime error
     while(i<=mid && j<=r)
     {
         if(arr[i]<=arr[j])
         {
             temp[k]=arr[i];
             k++;
             i++;
         }
         else
         {
             count=count+(mid+1)-i;
             temp[k]=arr[j];
             j++;
             k++;
         }
     }
     while(i<=mid)
     {
             temp[k]=arr[i];
             k++;
             i++;
     }
     while(j<=r)
     {
             temp[k]=arr[j];
             k++;
             j++;
     }
     for(i=0;i<k;i++)
     {
         arr[l+i]=temp[i];
     }
     return count;
}
