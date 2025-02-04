#include <iostream>
using namespace std;
void heapify(int arr[], int n, int i)
{
	int largest = i; // Initialize largest as root
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2
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
void deleteRoot(int arr[], int *p)
{
		int lastElement = arr[*p - 1];
  arr[0] = lastElement;
  *p = *p - 1;
  heapify(arr,*p, 0);
}
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}
int main()
{
	int arr[] = { 10, 5, 3, 2, 4 };   //
	int n = sizeof(arr) / sizeof(arr[0]);
	deleteRoot(arr, &n); // we want changes in n so pass address
	printArray(arr, n);
	return 0;
}
