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
    std::cout<<"checkRotatedAndSorted"<<std::endl;
    std::vector<int> arr3 = {30, 40, 50, 60, 20};
    std::cout << a.checkRotatedAndSorted(arr3) << std::endl;
    a.printVector(arr3);
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

    std::cout<<"largestElement"<<std::endl;
    int arr11[] = {1,3,5,7};
    std::cout << a.largestElement(arr11,4) << std::endl;
    std::cout<<"largestElement2"<<std::endl;
    std::cout << a.largestElement2(arr11,4) << std::endl;

    int arr12[] ={12,35,1,10,34,1};
    std::cout<<"secondLargestElement"<<std::endl;
    std::cout << a.secondLargestElement(arr12,6) << std::endl;
    std::cout<<"is Array Sorted"<<std::endl;
    std::cout << a.isArraySorted(arr12,6) << std::endl;
    std::cout<<"is Array Sorted2"<<std::endl;
    std::cout << a.isArraySorted2(arr12,6) << std::endl;

    std::vector<int> arr13 = {1,2,3,4,5};
    std::cout<<"reverseArray"<<std::endl;
    a.reverseArray(arr13.data(),5);
    a.printVector(arr13);

    std::cout<<"removeDuplicates"<<std::endl;
    int arr14[] = {1,2,2,3,4,4,4,5,5};
    int new_size = a.removeDuplicates(arr14,9);
    std::cout << new_size << std::endl;
    a.printArray(arr14,new_size);
    int arr15[] = {2,2,2,2,2,2,2};
    std::cout<<"removeDuplicates2"<<std::endl;
    new_size = a.removeDuplicates2(arr15,7);
    std::cout << new_size << std::endl;
    a.printArray(arr15,new_size);

    int arr16[] = {0,1,0,3,12};
    std::cout<<"moveZeroesToEnd"<<std::endl;    
    a.moveZeroesToEnd(arr16,5);
    a.printArray(arr16,5);

    int arr17[] = {1,2,3,4,5,6,7};
    std::cout<<"leftRotationByOne"<<std::endl;
    a.leftRotationByOne(arr17,7);
    a.printArray(arr17,7);

    int arr18[] = {1,2,3,4,5,6,7};
    std::cout<<"leftRotationByD"<<std::endl;
    a.leftRotationByD(arr18,7,2);
    a.printArray(arr18,7);

    int arr19[] = {1,2,3,4,5,6,7};
    std::cout<<"leftRotationByD2"<<std::endl;
    a.leftRotationByD2(arr19,7,2);
    a.printArray(arr19,7);

    int arr20[] = {1,2,3,4,5,6,7};
    std::cout<<"leftRotationByD3"<<std::endl;
    a.leftRotationByD3(arr20,7,2);
    a.printArray(arr20,7);

    int arr21[] = {1,2,3,4,5,6,7};
    std::cout<<"leadersInArray"<<std::endl;
    a.leadersInArray(arr21,7);

    int arr22[] = {16, 17, 4, 3, 5, 2};
    std::cout<<"leadersInArray2"<<std::endl;
    a.leadersInArray2(arr22,6);

    
    





    return 0;
}

