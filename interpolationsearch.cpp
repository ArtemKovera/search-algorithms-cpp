//interpolation search in an integer array
//interpolation search can be efficiently used only when the elements in the array are relatively uniformly distributed

#include<iostream>

//this function takes sorted array, first index, last index, and value to search as parameters 
//if the element is found, function returns index of this element
//if the element is not found, function returns -1
int interpolationSearch (int arr[], int firstIndex, int lastIndex, int value)
{
    int midleIndex;
     
    while (firstIndex <= lastIndex && value >= arr[firstIndex] && value <= arr[lastIndex])
     { 
        if (firstIndex == lastIndex) 
        { 
            if (arr[firstIndex] == value)
            {
              return firstIndex;   
            }
             
            return -1; 
        } 
        
        //find midleIndex
        midleIndex = firstIndex + (((lastIndex - firstIndex) / 
            (arr[lastIndex] - arr[firstIndex])) * (value - arr[firstIndex])); 
          
        
        if (arr[midleIndex] == value)
        {
            return midleIndex; 
        } 
        else if (arr[midleIndex] < value)
        {
            firstIndex = midleIndex + 1;
        } 
        else
        {
            lastIndex = midleIndex - 1;
        }
             
    } 
    return -1; 
} 



int main ()
{
    int array [] {1, 3, 5, 7, 8, 10, 11, 13, 14, 17, 19, 23, 25, 27, 30};

    int vartoSearch = 11;
    int var = interpolationSearch(array, 0, 14, vartoSearch);

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