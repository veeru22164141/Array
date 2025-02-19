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
   // a.range_sum(arr5,5);
    std::cout<<"equilibrium point"<<std::endl;
    int arr6[] = {2,-5,3,1,-4};
    a.equilibrium_point(arr6,5);
    std::cout<<"equilibrium point2"<<std::endl;
    a.equilibrium_point2(arr6,5);
    std::cout<<"maxSubArraySum"<<std::endl;
    int arr8[] = {-3,4,-1,-2,1,5};
    std::cout << a.maxSubArraySum(arr8,6) << std::endl;

    std::cout<<"mergeTwoSortedArrays"<<std::endl;
    int arr9[] = {1,3,5,7};
    int arr10[] = {0,2,6,8,9};
    a.mergeTwoSortedArrays(arr9,arr10,4,5);



    return 0;
}

