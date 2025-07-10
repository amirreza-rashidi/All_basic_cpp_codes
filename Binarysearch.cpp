#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  while (high >= low) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int x;
  cout<<"please enter a key for search:";
  cin>>x;
  //For find the size of array;
  int n = sizeof(array) / sizeof(array[0]);
  //cout<<n;
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    cout<<("Not found");
  else
    cout<<("Element is found at index %d", result);
}