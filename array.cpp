#include "array.h"
#include <algorithm>
using namespace std;
int Array::maxIndexDiff(std::vector<int> arr) {
    int n = arr.size();
    int maxDiff = -1;
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = n - 1; j > i; --j) {
            if (arr[j] > arr[i] && maxDiff < (j - i)) {
                maxDiff = j - i;
            }
        }
    }
    return maxDiff;
}

int Array::maxIndexDiff2(std::vector<int> arr) {
     int n = arr.size();
        if (n == 1) {
            return 0;
        }
        int maxDiff;
        int i, j;

        int *LMin = new int[n];
        int *RMax = new int[n];

        // Constructing LMin[] such that LMin[i] stores the minimum value
        // from (arr[0], arr[1], ... arr[i]).
        LMin[0] = arr[0];
        for (i = 1; i < n; ++i)
            LMin[i] = min(arr[i], LMin[i - 1]);

        // Constructing RMax[] such that RMax[j] stores the maximum value
        // from (arr[j], arr[j+1], ..arr[n-1]).
        RMax[n - 1] = arr[n - 1];
        for (j = n - 2; j >= 0; --j)
            RMax[j] = max(arr[j], RMax[j + 1]);

        i = 0, j = 0, maxDiff = -1;
        // Traversing both arrays from left to right to find optimum j-i.
        // This process is similar to merge() of MergeSort.
        while (j < n && i < n) {
            if (LMin[i] <= RMax[j]) {
                // Updating the maximum difference.
                maxDiff = max(maxDiff, j - i);
                j = j + 1;
            } else
                i = i + 1;
        }
        // returning the maximum difference.
        return maxDiff;
    
}

  vector<int> Array::largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
        
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
         vector<int> maxAndSecondMax;
         max=arr[0];
         max2=-1;
         for(int i=1;i<sizeOfArray;i++)
         {
             if(max<arr[i])
             {
                 max2 = max;
                 max = arr[i];
             }
             if(max2<arr[i] && max!=arr[i])
             {
                 max2 = arr[i];
             }
         }
         maxAndSecondMax.push_back(max);
         maxAndSecondMax.push_back(max2);
         return maxAndSecondMax;
         
    }

bool Array::checkRotatedAndSorted(const vector<int>& arr) {
         int n = arr.size();
    if (n <= 1) return false;

    int increasing = 0, decreasing = 0;

    // Check for increasing order
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            increasing = i;
            break;
        }
        cout<<arr[i]<<"< ";
    }
    
    cout<<endl;
    cout<<"increasing: "<<increasing<<endl;

    // Check for decreasing order
    for (int i = 1; i < n; ++i) {
        if (arr[i] > arr[i - 1]) {
            decreasing = i;
            break;
        }
        cout<<arr[i]<<" >";
    }
    cout<<endl;
    cout<<"decreasing: "<<decreasing<<endl;

    // Check if the array is sorted and rotated in increasing order
    bool isIncreasingRotated = (increasing != 0) && (arr[n - 1] <= arr[0]);
    for (int i = increasing + 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            isIncreasingRotated = false;
            break;
        }
    }

    // Check if the array is sorted and rotated in decreasing order
    bool isDecreasingRotated = (decreasing != 0) && (arr[n - 1] >= arr[0]);
    for (int i = decreasing + 1; i < n; ++i) {
        if (arr[i] > arr[i - 1]) {
            isDecreasingRotated = false;
            break;
        }
    }

    return isIncreasingRotated || isDecreasingRotated;
    }

void Array::reverseInGroups(vector<long long int> &arr, int k) {
        // code here
        int low=0;
        int high=k-1;
        int temp=0;
        bool firstGrpDone=false;
        while(low<high)
        {
            temp=arr[low];
            arr[low]=arr[high];
            arr[high]=temp;
            low++;
            high--;
            if(low>=high && firstGrpDone==false)
            {
                low=k;
                high=arr.size() -1 ;
                firstGrpDone=true;
            }
        }
    }