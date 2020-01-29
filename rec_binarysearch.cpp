//recursive function for binary search in an integer array
#include<iostream>


//this function takes sorted array, first index, last index, and value to search as parameters 
//if the element is found, function returns index of this element
//if the element is not found, function returns -1
int recursiveBinarySearch (int arr [], int firstIndex, int lastIndex, int value)
{
    int tempIndex = (firstIndex + lastIndex) / 2;;

    if(firstIndex < lastIndex)
    {
        if (arr[tempIndex] == value)
        {
            return tempIndex;
        }
        else if (arr[tempIndex] > value)
        {
            return recursiveBinarySearch (arr, firstIndex, lastIndex -1, value);
        }   
        else
        {
            return recursiveBinarySearch (arr, firstIndex + 1, lastIndex, value);
        }
            
    }
    else if (arr[tempIndex] == value) return tempIndex;

    else return -1;     
        
}    



int main ()
{

     int array [] {1, 3, 3, 4, 5, 6, 6, 7, 8, 10, 11, 12, 12, 12, 15};

    int vartoSearch = 7;
    int var = recursiveBinarySearch(array, 0, 14, vartoSearch);

    if(var != -1)
    {
    std::cout <<"at least one occurence of element " << 
    vartoSearch <<" is found at position " << var << std::endl;
    }
    else
    {
    std::cout << "the element " << vartoSearch << " is NOT found" << std::endl;
    }   

    return 0;
}