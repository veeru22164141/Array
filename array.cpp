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
    std::cout<<"isIncreasingRotated: "<<isIncreasingRotated<<std::endl;
    for (int i = increasing + 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            isIncreasingRotated = false;
            break;
        }
    }

    // Check if the array is sorted and rotated in decreasing order
    bool isDecreasingRotated = (decreasing != 0) && (arr[n - 1] >= arr[0]);
    std::cout<<"isDecreasingRotated: "<<isDecreasingRotated<<std::endl;
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

    void Array::range_sum(int array[],int size)
    {
        int prefix[size];
        prefix[0]=array[0];
        for(int i=1;i<size;i++)
        {
            prefix[i]=prefix[i-1]+array[i];
        }
        int q;
        cout<<"enter the number of queries"<<endl;
        cin>>q;
        for(int i=0;i<q;i++)
        {
            int l,r;
            cout<<"enter the range"<<endl;
            cin>>l>>r;
            if(l==0)
            {
                cout<<prefix[r]<<endl;
            }
            else
            {
                cout<<prefix[r]-prefix[l-1]<<endl;
            }
        }
    }

//naive approach
void Array::equilibrium_point2(int arr[], int n)
{
   
    for(int i=0;i<n;i++)
    {
        int lsum=0;
        int rsum=0;
        for(int j=0;j<i;j++)
        {
            lsum+=arr[j];
        }
        for(int j=i+1;j<n;j++)
        {
            rsum+=arr[j];
        }
        if(lsum==rsum)
        {
            cout<<i+1<<endl;
            return;
        }
    }
}

//efficient approach
    void Array::equilibrium_point(int arr[], int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        int left_sum=0;
        for(int i=0;i<n;i++)
        {
            sum-=arr[i];
            if(left_sum==sum)
            {
                cout<<i+1<<endl;
                return;
            }
            left_sum+=arr[i];
        }
        cout<<-1<<endl;
    }

    int Array::maxSubArraySum(int a[], int size)
    {
        int max_so_far = INT_MIN, max_ending_here = 0;
        for (int i = 0; i < size; i++)
        {
         //   cout<<max_so_far<<" "<<max_ending_here<<endl;
            max_ending_here = max_ending_here + a[i];
            if (max_so_far < max_ending_here)
                max_so_far = max_ending_here;
            if (max_ending_here < 0)
                max_ending_here = 0;
        }
        return max_so_far;
    }

    void Array::mergeTwoSortedArrays(int arr1[], int arr2[], int n, int m)
    {
        int i=0,j=0,k=0;
        int array[n+m];
        while(i<n && j<m)
        {
            if(arr1[i]<arr2[j])
            {
                array[k++]=arr1[i];
                i++;
            }
            else
            {
                array[k++]=arr2[j];
                j++;
            }
        }
        while(i<n)
        {
            array[k++]=arr1[i];
            i++;
        }
        while(j<m)
        {
            array[k++]=arr2[j];
            j++;
        }
        for(int i=0;i<n+m;i++)
        {
            cout<<array[i]<<" ";
        }
    }
    //naive approach
    int Array::largestElement(int arr[], int n)
    {
        for(int i=0;i<n;i++)
        {
            bool flag=false;
            for(int j=0;j<n;j++)
            {
                if(arr[j]>arr[i])
                {
                    flag=true;
                    break;
                }
            }
            if(flag==false)
            {
                return arr[i];
            }
        }
        return -1;
    }

    //efficient approach
    int Array::largestElement2(int arr[], int n)
    {
        int res=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[res])
            {
                res=i;
            }
        }
        return arr[res];
    }

    int Array::secondLargestElement(int arr[], int n)
    {
        int res=-1;
        int largest=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[largest])
            {
                res=largest;
                largest=i;
            }
            else if(arr[i]!=arr[largest])
            {
                if(res==-1 || arr[i]>arr[res])
                {
                    res=i;
                }
            }
        }
        return res;
    }

    //naive approach
    bool Array::isArraySorted(int arr[],int n)
    {
        bool ascending=false;
        bool descending=false;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    ascending=true;
                }
                else if(arr[i]>arr[j])
                {
                    descending=true;
                }

            }
        }
        if(ascending==true && descending==false)
        {
            return true;
        }
        else if(ascending==false && descending==true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool Array::isArraySorted2(int arr[], int n)
    {
        bool ascending=false;
        bool descending=false;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
            {
                ascending=true;
            }
            else if(arr[i]<arr[i-1])
            {
                descending=true;
            }
        }
        if(ascending==true && descending==false)
        {
            return true;
        }
        else if(ascending==false && descending==true)
        {
            return true;
        }
        else
        {
            return false;
        }
       
    }

//naive approach
void Array::reverseArray(int arr[], int n)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}

void Array::reverseArray(int arr[], int low, int high)
{
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}

//using extra space
int Array::removeDuplicates(int arr[],int n)
{
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(temp[res-1]!=arr[i])
        {
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++)
    {
        arr[i]=temp[i];
    }
    printArray(arr,res);
    return res;
}

//efficient approach without using extra space
int Array::removeDuplicates2(int arr[], int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res-1]!=arr[i])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    printArray(arr,res);
    return res;

}

void Array::moveZeroesToEnd(int arr[], int n)
{
    int count=0;
    int temp=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp=arr[count];
            arr[count]=arr[i];
            arr[i]=temp;
            
            count++;
        }
    }
    printArray(arr,n);
}

void Array::leftRotationByOne(int arr[], int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    //printArray(arr,n);
}
//naive approach Time complexity : O(d*n)  Auxiliary Space : O(1)

void Array::leftRotationByD(int arr[], int n, int d)
{
    for(int i=0;i<d;i++)
    {
        leftRotationByOne(arr,n);
    }
   // printArray(arr,n);
}

//efficient approach Time complexity : O(n)  Auxiliary Space : O(d)
void Array::leftRotationByD2(int arr[], int n, int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++)
    {
        arr[n-d+i]=temp[i];
    }
  //  printArray(arr,n);
}

//reversal method Time complexity : O(n) Auxiliary Space : O(1)
void Array::leftRotationByD3(int arr[], int n, int d)
{
    reverseArray(arr,0,d-1);
    reverseArray(arr,d,n-1);
    reverseArray(arr,0,n-1);
    //printArray(arr,n);
}

//naive approach Time complexity : O(n*n) Auxiliary Space : O(1)
void Array::leadersInArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            cout<<arr[i]<<" ";
        }
    }
}

//efficient approach Time complexity : O(n) Auxiliary Space : O(1)
void Array::leadersInArray2(int arr[], int n)
{
    int curr_leader=arr[n-1];
    cout<<curr_leader<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(curr_leader<arr[i])
        {
            curr_leader=arr[i];
            cout<<curr_leader<<" ";
        }
    }
}


int Array::maxDiffwithgreaterNumOnLeft(int arr[],int n)
{
    int maxDiff=0;
    for(int i=0;i<n;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
            int currDiff=arr[j]-arr[i];
            if(currDiff>0 && currDiff> maxDiff)
                maxDiff=currDiff;
        }
    }
    return maxDiff;
}
//efficient approach with time Complexity:O(n) and Axuiliry space:O(1)
int Array::maxDiffwithgreaterNumberLeft1(int arr[],int n)
{
    int max_diff= arr[1]-arr[0];
    int min_num= arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i] - min_num > max_diff)
          max_diff = arr[i] - min_num;
        if(min_num>arr[i])
            min_num=arr[i];

    }
    return max_diff;
}



