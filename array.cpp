#include "array.h"
int Array::maxIndexDiff(std::vector<int> arr) {
    int n = arr.size();
    int maxDiff = -1;
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = n - 1; j > i; --j) {
            if (arr[j] > arr[i] && maxDiff < (j - i)) {
                maxDiff = j - i;
            }
        }
    }
    return maxDiff;
}