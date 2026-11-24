
#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& v, int start, int end) {

    int pivot = end;

    int i = start - 1;

    for(int j = start; j < end; j++) {

        if(v[j] < v[pivot]) {
            i++;

            //swap v[i] and v[j]
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }

    i++;

    //swap pivot into its correct position
    int temp = v[i];
    v[i] = v[pivot];
    v[pivot] = temp;

    return i;
}

void quicksort(vector<int>& v, int start, int end) {

    if(end <= start) {
        return;
    }

    int pivot = partition(v, start, end);

    quicksort(v, start, pivot - 1);
    quicksort(v, pivot + 1, end);
}

int main() {

    vector<int> v = {83, 57, 28, 95, 38, 58, 95, 29};

    quicksort(v, 0, v.size() - 1);

    for(int num : v) {
        cout << num << endl;
    }

    return 0;
}
