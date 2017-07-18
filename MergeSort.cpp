#include<iostream>

using namespace std;

void simplemerge(int a[], int p, int q, int r) {

  int nl = q-p+1;
  int nr = r-q;

  int left[nl];
  int right[nr];

  int i, j, k;

  for(i = 0; i < nl; i++) {
    left[i] = a[p + i];
  }

  for(j = 0; j < nr; j++) {
    right[j] = a[q + j + 1];
  }

  i = 0;
  j = 0;
  k = p;

  while(i < nl && j < nr) {
    if(left[i] <= right[j]) {
      a[k] = left[i];
      i++;
    }

    else {
      a[k] = right[j];
      j++;
    }
    k++;
  }

  while(i < nl) {
    a[k] = left[i];
    i++;
    k++;
  }

  while(j < nr) {
    a[k] = right[j];
    j++;
    k++;
  }
}


void mergeSort(int a[], int p, int r) {
  int q;
  if(p < r) {
    q = ((p + r) / 2);

    mergeSort(a, p, q);
    mergeSort(a, q + 1, r);
    simplemerge(a, p, q, r);
  }
}


int main() {
  int n, a[225];

  cin>>n;

  for(int i = 0; i < n; i++) {
    cin>>a[i];
  }

  mergeSort(a, 0, n-1);

  for(int i = 0; i < n; i++) {
    cout<<a[i]<<" ";
  }

  return 0;
}
