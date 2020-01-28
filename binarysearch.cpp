//functions for iterative binary search in an integer array

#include<iostream>


//this function takes sorted array, first index, last index, and value to search as parameters 
//if the element is found, function returns index of this element
//if the element is not found, function returns -1
int binarySearch(int arr[], int firstIndex, int lastIndex, int value) 
{ 
    int tempIndex;

    while (firstIndex <= lastIndex)
    { 
        tempIndex = firstIndex + (lastIndex - firstIndex) / 2;

        if (arr[tempIndex] == value) 
        {
            return tempIndex;
        }     
        else if (arr[tempIndex] < value) 
        {
            firstIndex = tempIndex + 1;
        } 
        else
        {
            lastIndex = tempIndex - 1; 
        }
    } 

    return -1; 
}

int binarySearch2(int arr[], int firstIndex, int lastIndex, int value, int tempIndex = 0) 
{ 

    if(value < arr[firstIndex] or value > arr[lastIndex]) return -1;


    while (firstIndex <= lastIndex)
    { 
        tempIndex = firstIndex + (lastIndex - firstIndex) / 2;

        if (arr[tempIndex] == value) 
        {
            return tempIndex;
        }     
        else if (arr[tempIndex] < value) 
        {
            firstIndex = tempIndex + 1;
        } 
        else
        {
            lastIndex = tempIndex - 1; 
        }
    } 

    return -1; 
}  

int main ()
{
    int array [] {1, 3, 3, 4, 5, 6, 6, 7, 8, 10, 11, 12, 12, 12, 15};

    int vartoSearch = 7;
    int var = binarySearch(array, 0, 14, vartoSearch);

    if(var != -1)
    {
    std::cout <<"at least one occurence of element " << 
    vartoSearch <<" is found at position " << var << std::endl;
    }
    else
    {
    std::cout << "the element " << vartoSearch << " is NOT found" << std::endl;
    }
    
    std::cout << "--------------" << "\n";

    vartoSearch = 17;
    var = binarySearch2(array, 0, 14, vartoSearch);

    if(var != -1)
    {
    std::cout <<"at least one occurence of element " << 
    vartoSearch <<" is found at position " << var << std::endl;
    }
    else
    std::cout << "the element " << vartoSearch << " is NOT found" << std::endl;
     
    return 0;
}