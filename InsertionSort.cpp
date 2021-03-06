#include<iostream>

using namespace std;

void insertionSort(int ar[], int n) {
  int key, j = 0;

  for(int i = 1; i < n; i++) {
    key = ar[i];
    j = i - 1;
    while(j >= 0 && ar[j] > key) {
      ar[j + 1] = ar[j];
      j = j - 1;
    }
    ar[j + 1] = key;
  }
}

int main() {
  int n;
  cin>>n;

  int ar[n];
  for(int i = 0; i < n; i++) {
    cin>>ar[i];
  }

  insertionSort(ar, n);

  for(int i = 0; i < n; i++) {
    cout<<ar[i]<<" ";
  }

  return 0;
}
