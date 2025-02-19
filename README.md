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


Problem #3 : Largest Sum Subarray

Description : We are given an array of positive and negative integers. We have to find the subarray having maximum sum.
Input
[-3, 4, -1, -2, 1, 5]
Output
7
(4+(-1)+(-2)+1+5)

Problem #4 : Merge two sorted Arrays

Description : We are given two sorted arrays arr1[ ] and arr2[ ] of size m and n respectively. We have to merge these arrays and store the numbers in arr3[ ] of size m+n.
Input
1 3 4 6
2 5 7 8
Output
1 2 3 4 5 6 7 8