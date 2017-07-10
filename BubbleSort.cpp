#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector <int> ar, int n) {
  int temp, c = 0;

  for(int i = 0; i < n - 1; i++) {
    for(int j = 0; j < n - i - 1; j++) {
      if(ar[j] > ar[j+1]) {
        temp = ar[j];
        ar[j] = ar[j + 1];
        ar[j + 1] = temp;
        c++;
      }
    }
  }

for(int i = 0; i < n; i++) {
  cout<<ar[i]<<" ";
}
cout<<"\n"<<c;
}

int main() {
  int n;
  cin>>n;
  vector <int> ar(n);

  for(int i = 0; i < n; i++) {
    cin>>ar[i];
  }

  bubbleSort(ar, n);
   return 0;
}
