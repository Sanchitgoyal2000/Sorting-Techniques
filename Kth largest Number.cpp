#include <iostream>
using namespace std;
void heapSort(int arr[], int n,int k);
void heapify(int *arr,int n,int i);
int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int a[n],i;
	    for(i=0;i<n;i++)
	      cin>>a[i];
	      int k;
	      cin>>k;
	     heapSort(a,n,k);
	}
	return 0;
}
void heapify(int *arr,int n,int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if (l < n && arr[l] > arr[largest])
        largest = l;
   if (r < n && arr[r] > arr[largest])
        largest = r;
  if (largest != i)
    {
        swap(arr[i], arr[largest]);

         heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n,int k)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
        int i,j=n-1;
    for ( i=0;i<k; i++)
    {
        swap(arr[0], arr[j]);
        heapify(arr, j, 0);
        j--;
    }
    cout<<arr[n-k]<<"\n";
}
