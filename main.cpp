#include "test.h"
#include<iostream>
void printList()
{
        std::cout<<"2:  maxIndexDiff_test()"<<std::endl;

        std::cout<<"3:  largestAndSecondLargest_test()"<<std::endl;
        std::cout<<"4:  checkRotatedAndSorted_test()"<<std::endl;
        std::cout<<"5:  reverseInGroups_test()"<<std::endl;
        std::cout<<"6:  equilibrium_point_test()"<<std::endl;
        std::cout<<"7:  axSubArraySum_test()"<<std::endl;
        std::cout<<"8:  mergeTwoSortedArrays_test()"<<std::endl;
        std::cout<<"9:  largestElement_test()"<<std::endl;
        std::cout<<"10:  secondLargestElement_test()"<<std::endl;
        std::cout<<"11: isArraySorted_test()"<<std::endl;
        std::cout<<"12: reverseArray_test()"<<std::endl;
        std::cout<<"13: removeDuplicates_test()"<<std::endl;
        std::cout<<"14: moveZeroesToEnd_test()"<<std::endl;
        std::cout<<"15: leftRotationByOne_test()"<<std::endl;
        std::cout<<"16: leftRotationByD_test()"<<std::endl;
        std::cout<<"17: leadersInArray_test()"<<std::endl;
        std::cout<<"18: maxDiffwithgreaterNumOnLeft_test()"<<std::endl;
        std::cout<<"19: freqOfElementInSortedArray_test()"<<std::endl;
        std::cout<<"20: maxProfitFromStock_test()"<<std::endl;
        std::cout<<"21: waterTraped_test()"<<std::endl;
        std::cout<<"22: subArraywithMaxSum_test()"<<std::endl;
        std::cout<<"23: longestEvenOddSubarray_test()"<<std::endl;

}
int main() 
{
    int index=-1; 
    Test t;   
    do
    {
        /* code */
        
        std::cout<<"select The test case To run by using number infront of them :"<<std::endl;
        std::cout<<" press 1 to print list of function"<<std::endl;
        
        std::cin>>index;
        switch(index)
        {
            case 1:
                printList();
            break;
            case 2:
                t.maxIndexDiff_test();
            break;
            case 3:
                t.largestAndSecondLargest_test();
            break;
            case 4:
                t.checkRotatedAndSorted_test();
            break;
            case 5:
                t.reverseInGroups_test();
            break;
            case 6:
                t.equilibrium_point_test();
            break;
            case 7:
                t.maxSubArraySum_test();
            break;
            case 8:
                t.mergeTwoSortedArrays_test();
            break;
            case 9:
                t.largestElement_test();
            break;
            case 10:
                t.secondLargestElement_test();
            break;
            case 11:
                t.isArraySorted_test();
            break;
            case 12:
                t.reverseArray_test();
            break;
            case 13:
                t.removeDuplicates_test();
            break;
            case 14:
                t.moveZeroesToEnd_test();
            break;
            case 15:
                t.leftRotationByOne_test();
            break;
            case 16:
                t.leftRotationByD_test();
            break;
            case 17:
                t.leadersInArray_test();
            break;
            case 18:
                t.maxDiffwithgreaterNumOnLeft_test();
            break;
            case 19:
                t.freqOfElementInSortedArray_test();
            break;
            case 20:
                t.maxProfitFromStock_test();
            break;
            case 21:
                t.waterTraped_test();
            break;
            case 22:
                t.subArraywithMaxSum_test();
            break;
            case 23:
                t.longestEvenOddSubarray_test();
            break;
        }
        
    } while (index!=0);
    
    
    

    return 0;
}

