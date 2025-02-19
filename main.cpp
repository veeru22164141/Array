#include "array.h"

int main() {
    Array a;
    std::vector<int> arr = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    std::cout << a.maxIndexDiff(arr) << std::endl;
    std::cout << a.maxIndexDiff2(arr) << std::endl;
    int arr2[] = {1, 2, 3, 4, 5};
    std::vector<int> res = a.largestAndSecondLargest(5, arr2);
    for (int i = 0; i < res.size(); ++i) {
        std::cout << res[i] << " ";
    }
    std::cout << std::endl;
    std::vector<int> arr3 = {30, 40, 50, 60, 20};
    std::cout << a.checkRotatedAndSorted(arr3) << std::endl;

     arr3 = {60,50,40,30,70};
    std::cout << a.checkRotatedAndSorted(arr3) << std::endl;

    std::vector<long long int> arr4 = {1, 2, 3, 4, 5};
    a.reverseInGroups(arr4, 3);
    for (int i = 0; i < arr4.size(); ++i) {
        std::cout << arr4[i] << " ";
    }
    std::cout << std::endl;
    int arr5[] = {4, 5, 3, 2, 5};
    a.range_sum(arr5,5);


    return 0;
}

