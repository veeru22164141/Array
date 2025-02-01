#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <vector>

// Your code goes here
class Array {

    public:
        Array()=default;
        ~Array()=default;
        int maxIndexDiff(std::vector<int> arr);
        int maxIndexDiff2(std::vector<int> arr);
        std::vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]);
        bool checkRotatedAndSorted(const std::vector<int>& arr);
        void reverseInGroups(std::vector<long long int> &arr, int k);
};

#endif // ARRAY_H