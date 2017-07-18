#include<iostream>

using namespace std;

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int ar[], int n) {
  int min;

  for(int i = 0; i < n - 1; i++) {
    min = i;

    for(int j = i + 1; j < n; j++) {
      if(ar[j] < ar[min]) {
        min = j;
      }
    }

    swap(&ar[i], &ar[min]);

  }
}

int main() {
  int n;
  cin>>n;

  int ar[n];
  for(int i = 0; i < n; i++) {
    cin>>ar[i];
  }

  selectionSort(ar, n);

  for(int i = 0; i < n; i++) {
    cout<<ar[i]<<" ";
  }

  return 0;
}
