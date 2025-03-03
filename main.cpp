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

}
int main() 
{
    int index=-1;    
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
                maxIndexDiff_test();
            break;
            case 3:
                largestAndSecondLargest_test();
            break;
            case 4:
                checkRotatedAndSorted_test();
            break;
            case 5:
                reverseInGroups_test();
            break;
            case 6:
                equilibrium_point_test();
            break;
            case 7:
                maxSubArraySum_test();
            break;
            case 8:
                mergeTwoSortedArrays_test();
            break;
            case 9:
                largestElement_test();
            break;
            case 10:
                secondLargestElement_test();
            break;
            case 11:
                isArraySorted_test();
            break;
            case 12:
                reverseArray_test();
            break;
            case 13:
                removeDuplicates_test();
            break;
            case 14:
                moveZeroesToEnd_test();
            break;
            case 15:
                leftRotationByOne_test();
            break;
            case 16:
                leftRotationByD_test();
            break;
            case 17:
                leadersInArray_test();
            break;
            case 18:
                maxDiffwithgreaterNumOnLeft_test();
            break;
            case 19:
                freqOfElementInSortedArray_test();
            break;
            case 20:
                maxProfitFromStock_test();
            break;
        }
        
    } while (index!=0);
    
    
    

    return 0;
}

