//array rotation towards right
#include <iostream>
using namespace std;
void rightrotatebyone(int arr[], int n)
{

int temp = arr[n - 1], i;
for (i = n - 1; i > 0; i--)
arr[i] = arr[i - 1];
arr[0] = temp;
}
void arrayrightrotate(int arr[], int noofrotations, int n)
{
for (int i = 0; i < noofrotations; i++)
rightrotatebyone(arr, n); 
}
int main()
{
int arr[] = { 1, 2, 3, 4, 5, 6};
int n = sizeof(arr) / sizeof(arr[0]);    
cout<<"\nArray elements before rotating : \n";
for(int i = 0; i < n; i++)
{
cout<<arr[i]<<"\t";
}
int noofrotations = 2;
arrayrightrotate(arr, noofrotations, n);
cout<<"\n\nArray elements after rotating : \n";
for(int i = 0; i < n; i++)
{
cout<<arr[i]<<"\t";   
cout<<"\n";
return 0;
} 
}


