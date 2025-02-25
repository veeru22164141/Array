#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <vector>

// Your code goes here

class Array {

    public:
        Array()=default;
        ~Array()=default;
        void printVector(std::vector<int> arr)
        {
            for (int i = 0; i < arr.size(); i++)
            {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
        }
        void printArray(int arr[], int n)
        {
            for (int i = 0; i < n; i++)
            {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
        }
        int maxIndexDiff(std::vector<int> arr);
        int maxIndexDiff2(std::vector<int> arr);
        std::vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]);
        bool checkRotatedAndSorted(const std::vector<int>& arr);
        void reverseInGroups(std::vector<long long int> &arr, int k);
        void range_sum(int array[],int size);
        void equilibrium_point(int arr[], int n);
        void equilibrium_point2(int arr[], int n);
        int maxSubArraySum(int a[], int size);

        void mergeTwoSortedArrays(int arr1[], int arr2[], int n, int m);

        int largestElement(int arr[], int n);
        int largestElement2(int arr[], int n);

        int secondLargestElement(int arr[], int n);
        bool isArraySorted(int arr[], int n);
        bool isArraySorted2(int arr[], int n);
        void reverseArray(int arr[], int n);
        void reverseArray(int arr[], int low, int high);

        int removeDuplicates(int arr[], int n);
        int removeDuplicates2(int arr[], int n);

        void moveZeroesToEnd(int arr[], int n);

        void leftRotationByOne(int arr[], int n);
        void leftRotationByD(int arr[], int n, int d);
        void leftRotationByD2(int arr[], int n, int d);
        void leftRotationByD3(int arr[], int n, int d);

        void leadersInArray(int arr[], int n);
        void leadersInArray2(int arr[], int n);

        int maxDiffwithgreaterNumOnLeft(int arr[],int n);
        int maxDiffwithgreaterNumberLeft1(int arr[],int n);
};

#endif // ARRAY_H