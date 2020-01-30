//iterative function for ternary search in an integer array

#include<iostream>

//this function takes sorted array, first index, last index, and value to search as parameters 
//if the element is found, function returns index of this element
//if the element is not found, function returns -1
int ternarySearch (int arr[], int firstIndex, int lastIndex, int value)
{
    
    if(value < arr[firstIndex] or value > arr[lastIndex]) return -1;

    while (lastIndex >= firstIndex)
    {
        int midIndex1 = firstIndex + (lastIndex - firstIndex) / 3;
        int midIndex2 = midIndex1 + (lastIndex - firstIndex) / 3;

        if (arr[midIndex1] == value) return midIndex1;

        if (arr[midIndex2] == value) return midIndex2;

        else if (value < arr[midIndex1])
        {
            lastIndex = midIndex1 - 1;  
        }
        else if (value < arr[midIndex2])
        {
            lastIndex = midIndex2 - 1;
            firstIndex = midIndex1 + 1;
        }
        else
        {
            firstIndex = midIndex2 + 1;    
        }
        
    }

    return -1;

}

int main ()
{


    int array [] {1, 3, 3, 4, 5, 6, 6, 7, 8, 10, 11, 12, 12, 12, 15, 17, 18, 20, 21};

    int vartoSearch = 9;
    int var = ternarySearch(array, 0, 18, vartoSearch);

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