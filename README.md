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