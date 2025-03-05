# Array
Problem 1: Range Sum Queries using Prefix Sum

Description : We are given an Array of n integers, We are given q queries having indices l and r . We have to find out sum between the given range of indices.
Input 
[4, 5, 3, 2, 5]
3
0 3
2 4
1 3
Output
14 (4+5+3+2)
10 (3+2+5)
10 (5+3+2)
void Array::range_sum(int array[],int size)

Problem #2 : Equilibrium index of an array

Description - Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. We are given an Array of integers, We have to find out the first index i from left such that -
A[0] + A[1] + ... A[i-1] = A[i+1] + A[i+2] ... A[n-1]


Input
[-7, 1, 5, 2, -4, 3, 0]
Output
3
A[0] + A[1] + A[2] = A[4] + A[5] + A[6]

void equilibrium_point(int arr[], int n);
void equilibrium_point2(int arr[], int n);


Problem #3 : Largest Sum Subarray

Description : We are given an array of positive and negative integers. We have to find the subarray having maximum sum.
Input
[-3, 4, -1, -2, 1, 5]
Output
7
(4+(-1)+(-2)+1+5)

int maxSubArraySum(int a[], int size);

Problem #4 : Merge two sorted Arrays

    Description : We are given two sorted arrays arr1[ ] and arr2[ ] of size m and n respectively. We have to merge these arrays and store the numbers in arr3[ ] of size m+n.
    Input
    1 3 4 6
    2 5 7 8
    Output
    1 2 3 4 5 6 7 8
    void mergeTwoSortedArrays(int arr1[], int arr2[], int n, int m);

Largest Element in an Array 

    Given an array arr of size N, the task is to find the largest element in the given array. 

    Example: 

    Input: arr[] = {10, 20, 4}
    Output: 20

    Input : arr[] = {20, 10, 20, 4, 100}
    Output : 100
    int largestElement(int arr[], int n);
        int largestElement2(int arr[], int n);

Second Largest Element in Array

    Given an array of integers, our task is to write a program that efficiently finds the second largest element present in the array. 

    Example:

    Input: arr[] = {12, 35, 1, 10, 34, 1}
    Output: The second largest element is 34.
    Explanation: The largest element of the 
    array is 35 and the second 
    largest element is 34

    Input: arr[] = {10, 5, 10}
    Output: The second largest element is 5.
    Explanation: The largest element of 
    the array is 10 and the second 
    largest element is 5

    Input: arr[] = {10, 10, 10}
    Output: The second largest does not exist.
    Explanation: Largest element of the array 
    is 10 there is no second largest element
    Efficient Solution:

    Approach: Find the second largest element in a single traversal. 
    Below is the complete algorithm for doing this:  

    1) Initialize the first as 0(i.e, index of arr[0] element
    2) Start traversing the array from array[1],
    a) If the current element in array say arr[i] is greater
        than first. Then update first and second as,
        second = first
        first = arr[i]
    b) If the current element is in between first and second,
        then update second to store the value of current variable as
        second = arr[i]
    3) Return the value stored in second.

    int secondLargestElement(int arr[], int n);

Check if an Array is Sorted

    Given an array of size n, write a program to check if it is sorted in ascending order or not. Equal values are allowed in an array and two consecutive equal values are considered sorted.

    Examples: 

    Input : 20 21 45 89 89 90
    Output : Yes

    Input : 20 20 45 89 89 90
    Output : Yes

    Input : 20 20 78 98 99 97
    Output : No

     bool isArraySorted(int arr[], int n);
     bool isArraySorted2(int arr[], int n);

Reverse an Array

    Given an array (or string), the task is to reverse the array/string.
    Examples : 
    

    Input  : arr[] = {1, 2, 3}
    Output : arr[] = {3, 2, 1}

    Input :  arr[] = {4, 5, 1, 2}
    Output : arr[] = {2, 1, 5, 4}

Remove duplicates from a sorted array

    Given a sorted array, the task is to remove the duplicate elements from the array.

    Examples: 

    Input  : arr[] = {2, 2, 2, 2, 2}
    Output : arr[] = {2}
            new size = 1

    Input  : arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}
    Output : arr[] = {1, 2, 3, 4, 5}
            new size = 5
        int removeDuplicates(int arr[], int n);
        int removeDuplicates2(int arr[], int n);

Move Zeros to End

    Given an array of n numbers. The problem is to move all the 0’s to the end of the array while maintaining the order of the other elements. Only single traversal of the array is required.
    Examples: 
    

    Input : arr[]  = {1, 2, 0, 0, 0, 3, 6}
    Output : 1 2 3 6 0 0 0

    Input: arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9}
    Output: 1 9 8 4 2 7 6 9 0 0 0 0 0
    void Array::moveZeroesToEnd(int arr[], int n)
Left Rotate an Array by D places

    Given an array of integers arr[] of size N and an integer, the task is to rotate the array elements to the left by d positions.

    Examples:  

    Input: 
    arr[] = {1, 2, 3, 4, 5, 6, 7}, d = 2
    Output: 3 4 5 6 7 1 2

    Input: arr[] = {3, 4, 5, 6, 7, 1, 2}, d=2
    Output: 5 6 7 1 2 3 4

    void leftRotationByOne(int arr[], int n);
    void leftRotationByD(int arr[], int n, int d);
    void leftRotationByD2(int arr[], int n, int d);
    void leftRotationByD3(int arr[], int n, int d);

Leaders in an Array problem

    Write a program to print all the LEADERS in the array. An element is a leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. 

    For example:

    Input: arr[] = {16, 17, 4, 3, 5, 2}, 
    Output: 17, 5, 2

    Input: arr[] = {1, 2, 3, 4, 5, 2}, 
    Output: 5, 2

    void leadersInArray(int arr[], int n);
    void leadersInArray2(int arr[], int n);

Maximum Difference Problem with Order

    Given an array arr[] of integers, find out the maximum difference between any two elements such that larger element appears after the smaller number. 

    Examples : 

    Input : arr = {2, 3, 10, 6, 4, 8, 1}
    Output : 8
    Explanation : The maximum difference is between 10 and 2.

    Input : arr = {7, 9, 5, 6, 3, 2}
    Output : 2
    Explanation : The maximum difference is between 9 and 7.
    int maxDiffwithgreaterNumOnLeft(int arr[],int n);
    int maxDiffwithgreaterNumberLeft1(int arr[],int n);

Frequencies in a Sorted Array

    Given a sorted array, arr[] consisting of N integers, the task is to find the frequencies of each array element.

    Examples: 

    Input: arr[] = {1, 1, 1, 2, 3, 3, 5, 5, 8, 8, 8, 9, 9, 10} 
    Output: Frequency of 1 is: 3
                Frequency of 2 is: 1
                Frequency of 3 is: 2
                Frequency of 5 is: 2
                Frequency of 8 is: 3
                Frequency of 9 is: 2
                Frequency of 10 is: 1

    Input: arr[] = {2, 2, 6, 6, 7, 7, 7, 11} 
    Output:  Frequency of 2 is: 2
                Frequency of 6 is: 2
                Frequency of 7 is: 3
                Frequency of 11 is: 1
            void freqOfElementInSortedArray(int arr[],int n);
        void freqOfElementInSortedArray1(int arr[],int n);

Stock Buy and Sell Problem

    In a realm where numbers hold secrets, a captivating challenge awaits, which is, Stock Buy and Sell Problem !!!

    Our Task: The cost of a stock on each day is given in an array. Find the maximum profit that you can make by buying and selling on those days. If the given array of prices is sorted in decreasing order, then profit cannot be earned at all.
    Examples:

    Input: arr[] = {100, 180, 260, 310, 40, 535, 695}
    Output: 865
    Explanation: Buy the stock on day 0 and sell it on day 3 => 310 – 100 = 210
                        Buy the stock on day 4 and sell it on day 6 => 695 – 40 = 655
                        Maximum Profit  = 210 + 655 = 865
    Input: arr[] = {4, 2, 2, 2, 4}
    Output: 2
    Explanation: Buy the stock on day 1 and sell it on day 4 => 4 – 2 = 2
                        Maximum Profit  = 2
    int maxProfitFromStock(int arr[],int n);
        int maxProfitFromStock(int arr[],int start,int end);
        int maxProfitFromStock1(int arr[],int n);

Trapping Rain Water

    Given an array of N non-negative integers arr[] representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

    Examples:  

    Input: arr[] = {2, 0, 2}
    Output: 2
    Explanation: The structure is like below.
    | |
    |_|
    202
    We can trap 2 units of water in the middle gap.

    Input: arr[]   = {3, 0, 2, 0, 4}
    Output: 7
    Explanation: Structure is like below.
        |   
    |   |
    | | |
    |_|_|
    30204
    We can trap “3 units” of water between 3 and 2,
    “1 unit” on top of bar 2 and “3 units” between 2 and 4.

    Input: arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}
    Output: 6
    Explanation: The structure is like below.
           |
       |   || |
    _|_||_||||||
    010210132121
    Trap “1 unit” between first 1 and 2, “4 units” between
    first 2 and 3 and “1 unit” between second last 1 and last 2

    int Array::waterTraped(int arr[],int n);
    int Array::waterTraped1(int arr[],int n);

Maximum Subarray Sum

    Given an array arr[], the task is to find the elements of a contiguous subarray of numbers that has the largest sum.

    Examples:

    Input: arr = [-2, -3, 4, -1, -2, 1, 5, -3]
    Output: [4, -1, -2, 1, 5]
    Explanation: 
    In the above input the maximum contiguous subarray sum is 7 and the elements of the subarray are [4, -1, -2, 1, 5]

    Input: arr = [-2, -5, 6, -2, -3, 1, 5, -6] 
    Output: [6, -2, -3, 1, 5] 
    Explanation: 
    In the above input the maximum contiguous subarray sum is 7 and the elements 
    of the subarray are [6, -2, -3, 1, 5]
    void subArraywithMaxSum(std::vector<int>nums);

Longest Even Odd Subarray

    Given an array a[] of N integers, the task is to find the length of the longest Alternating Even Odd subarray present in the array. 

    Examples: 

    Input: a[] = {1, 2, 3, 4, 5, 7, 9} 
    Output: 5 
    Explanation: 
    The subarray {1, 2, 3, 4, 5} has alternating even and odd elements.

    Input: a[] = {1, 3, 5} 
    Output: 0 
    Explanation: 
    There is no such alternating sequence possible. 

