#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& left, vector<int>& right, vector<int>& v) {
  cout << "Merge called" << endl;
  int leftSize = v.size() / 2;
  int rightSize = v.size() - leftSize;

  int i = 0, l = 0, r = 0;

  // add smaller of left and right
  while (l < leftSize && r < rightSize) {
    if (left.at(l) < right.at(r)) {
      v.at(i) = left.at(l);
      l++;
    } else {
      v.at(i) = right.at(r);
      r++;
    }
    i++;
  }

  // add remianing left
  while (l < leftSize) {
    v.at(i) = left.at(l);
    i++;
    l++;
  }

  while (r < rightSize) {
    v.at(i) = right.at(r);
    i++;
    r++;
  }
}

// recursively break into halves until base case, then call merge
void mergesort(vector<int>& v) {
  cout << "mergesort called" << endl;
  int length = v.size();

  // base case
  if (length <= 1) return;

  vector<int> left, right;

  for (int i = 0; i < floor(length / 2); i++) {
    left.push_back(v.at(i));
  }

  for (int i = floor(length / 2); i < length; i++) {
    right.push_back(v.at(i));
  }

  mergesort(left);
  mergesort(right);
  merge(left, right, v);
}

int main() {
  vector<int> v = {83, 57, 28, 95, 38, 58, 95, 29};

  mergesort(v);

  for (int num : v) {
    cout << num << endl;
  }

  return 0;
}