#include "array.h"

int main() {
    Array a;
    std::vector<int> arr = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    std::cout << a.maxIndexDiff(arr) << std::endl;
    return 0;
}