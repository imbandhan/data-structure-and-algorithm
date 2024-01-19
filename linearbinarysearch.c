#include<stdio.h>

int linearsearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int binarysearch(int arr[], int size, int element){
    int low, mid, high;
    low=0;
    high = size-1;
    //start searching
    while(low<=high){
    mid = (low + high)/2;
    if(arr[mid] == element){
        return mid;
    }
    if(arr[mid]<element){
        low = mid+1;
    }
    else{
        high = mid -1;
    }
    
    
}
return -1;
}

int main(){
    //unsorted array for linear search
    // int arr[] = {1,3,43,46,52,56,59,64,78,81,92,95};
    // int size= sizeof(arr)/sizeof(int);

    //sorted array for binary search
    int arr[] = {1,3,43,46,52,56,59,64,78,81,92,95};
    int size= sizeof(arr)/sizeof(int);
    int element= 56;
    int searchindex= binarysearch(arr, size, element);
    printf("the element %d was found at least %d \n",element, searchindex);
return 0;
}