#include "test.h"
#include "array.h"
void Test::maxIndexDiff_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
    std::vector<int> arr = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    std::cout << a.maxIndexDiff(arr) << std::endl;
    std::cout << a.maxIndexDiff2(arr) << std::endl;

}
void Test::largestAndSecondLargest_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
    int arr2[] = {1, 2, 3, 4, 5};
    std::vector<int> res = a.largestAndSecondLargest(5, arr2);
    for (int i = 0; i < res.size(); ++i) {
        std::cout << res[i] << " ";
    }
    std::cout << std::endl;
}
void Test::checkRotatedAndSorted_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
    std::cout<<"checkRotatedAndSorted"<<std::endl;
    std::vector<int> arr3 = {30, 40, 50, 60, 20};
    std::cout << a.checkRotatedAndSorted(arr3) << std::endl;
    a.printVector(arr3);
     arr3 = {60,50,40,30,70};
    std::cout << a.checkRotatedAndSorted(arr3) << std::endl;
     
}
void Test::reverseInGroups_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
    std::vector<long long int> arr4 = {1, 2, 3, 4, 5};
    a.reverseInGroups(arr4, 3);
    for (int i = 0; i < arr4.size(); ++i) {
        std::cout << arr4[i] << " ";
    }
    std::cout << std::endl;
}
void Test::equilibrium_point_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
    int arr5[] = {4, 5, 3, 2, 5};
    // a.range_sum(arr5,5);
    std::cout<<"equilibrium point"<<std::endl;
    int arr6[] = {2,-5,3,1,-4};
    a.equilibrium_point(arr6,5);
    std::cout<<"equilibrium point2"<<std::endl;
    a.equilibrium_point2(arr6,5);
}
void Test::maxSubArraySum_test()
{ 
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;   
    std::cout<<"maxSubArraySum"<<std::endl;
    int arr8[] = {-3,4,-1,-2,1,5};
    std::cout << a.maxSubArraySum(arr8,6) << std::endl;
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    std::cout << a.maxSubArraySum(arr,8) << std::endl;
}
void Test::mergeTwoSortedArrays_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
    std::cout<<"mergeTwoSortedArrays"<<std::endl;
    int arr9[] = {1,3,5,7};
    int arr10[] = {0,2,6,8,9};
    a.printArray(arr9,4);
    a.printArray(arr10,5);
    a.mergeTwoSortedArrays(arr9,arr10,4,5);
    std::cout<<std::endl;
}

void Test::largestElement_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
    std::cout<<"largestElement"<<std::endl;
    int arr11[] = {1,3,5,7};
    std::cout << a.largestElement(arr11,4) << std::endl;
    std::cout<<"largestElement2"<<std::endl;
    std::cout << a.largestElement2(arr11,4) << std::endl;
}
void Test::secondLargestElement_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
    int arr12[] ={12,35,1,10,34,1};
    std::cout<<"secondLargestElement"<<std::endl;
    std::cout << a.secondLargestElement(arr12,6) << std::endl;
}

void Test::isArraySorted_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
    int arr12[] ={12,35,1,10,34,1};
    std::cout<<"is Array Sorted"<<std::endl;
    std::cout << a.isArraySorted(arr12,6) << std::endl;
    std::cout<<"is Array Sorted2"<<std::endl;
    std::cout << a.isArraySorted2(arr12,6) << std::endl;
}
void Test::reverseArray_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
    std::vector<int> arr13 = {1,2,3,4,5};
    std::cout<<"reverseArray"<<std::endl;
    a.reverseArray(arr13.data(),5);
    a.printVector(arr13);
}
void Test::removeDuplicates_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
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
}
void Test::moveZeroesToEnd_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
    int arr16[] = {0,1,0,3,12};
    std::cout<<"moveZeroesToEnd"<<std::endl;    
    a.moveZeroesToEnd(arr16,5);
    a.printArray(arr16,5);
}
void Test::leftRotationByOne_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
    int arr17[] = {1,2,3,4,5,6,7};
    std::cout<<"leftRotationByOne"<<std::endl;
    a.leftRotationByOne(arr17,7);
    a.printArray(arr17,7);
}

void Test::leftRotationByD_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
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
}

void Test::leadersInArray_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
    int arr21[] = {1,2,3,4,5,6,7};
    std::cout<<"leadersInArray"<<std::endl;
    a.leadersInArray(arr21,7);

    int arr22[] = {16, 17, 4, 3, 5, 2};
    std::cout<<"leadersInArray2"<<std::endl;
    a.leadersInArray2(arr22,6);
}
void Test::maxDiffwithgreaterNumOnLeft_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
    int arr23[] = {2,3,10,6,4,8,1};
    std::cout<<"maxDiffwithgreaterNumOnLeft"<<std::endl;
    std::cout << a.maxDiffwithgreaterNumOnLeft(arr23,7) << std::endl;

    std::cout<<"maxDiffwithgreaterNumOnLeft1"<<std::endl;

    std::cout<< a.maxDiffwithgreaterNumberLeft1(arr23,7)<< std::endl;

}

void Test::freqOfElementInSortedArray_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
    int arr24[]={1,1,1,2,3,3,5,5,8,8,8,9,9,10};
    std::cout<<"freqOfElementInSortedArray"<<std::endl;
    a.freqOfElementInSortedArray(arr24,14);

    std::cout<<"freqOfElementInSortedArray1"<<std::endl;
    a.freqOfElementInSortedArray1(arr24,14);
}
void Test::maxProfitFromStock_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    Array a;
    std::cout<<"maxProfitFromStock"<<std::endl;
    int arr25[]={1,5,3,8,12};
    std::cout<<a.maxProfitFromStock(arr25,5)<<std::endl;
    int arr26[]={30,20,10};
    std::cout<<a.maxProfitFromStock(arr26,3)<<std::endl;

    int arr27[]={1,5,3,1,2,8};
    std::cout<<"maxProfitFromStock"<<std::endl;
    std::cout<<a.maxProfitFromStock(arr27,6)<<std::endl;
    std::cout<<"maxProfitFromStock"<<std::endl;
    std::cout<<a.maxProfitFromStock(arr27,0,5)<<std::endl;
    std::cout<<"maxProfitFromStock1"<<std::endl;
    std::cout<<a.maxProfitFromStock1(arr27,6)<<std::endl;
}

void Test::waterTraped_test()
{
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;   
    Array a;

    std::cout<<"waterTraped "<<std::endl;
    int arr[] = {2, 0, 2};
    a.printArray(arr,3);
    std::cout<<"Total water trapped:"<<a.waterTraped(arr,3)<<std::endl;
    std::cout<<"waterTraped1 "<<std::endl;
    std::cout<<"Total water trapped:"<<a.waterTraped1(arr,3)<<std::endl;
    int arr1[]   = {3, 0, 2, 0, 4};
    a.printArray(arr1,5);
    std::cout<<"waterTraped1 "<<std::endl;
    std::cout<<"Total water trapped:"<<a.waterTraped1(arr1,5)<<std::endl;
    int arr2[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    a.printArray(arr2,12);
    std::cout<<"waterTraped "<<std::endl;
    std::cout<<"Total water trapped:"<<a.waterTraped(arr2,12)<<std::endl;
    std::cout<<"waterTraped1 "<<std::endl;
    std::cout<<"Total water trapped:"<<a.waterTraped1(arr2,12)<<std::endl;
    


}

void Test::subArraywithMaxSum_test()
{
    Array a;
    std::cout<<"========================================="<<__FUNCTION__<<"======================================================="<<std::endl;
    std::cout<<"subArraywithMaxSum "<< std::endl;
    std::vector<int>arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    a.subArraywithMaxSum(arr);
    arr={-2, -5, 6, -2, -3, 1, 5, -6};
    a.subArraywithMaxSum(arr);
}

void Test::longestEvenOddSubarray_test()
{

}