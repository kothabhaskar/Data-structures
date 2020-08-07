//Implement Binary Search on a Sorted Array

#include <iostream>

using namespace std;
void binrySearch(int arr[], int arrSize, int searchNum)
{
    int i = 0;
    int j = arrSize-1;
    int mid = (i+j)/2;
    while(i<=j)
    {
        int mid = (i+j)/2;
        if(arr[mid] == searchNum)
        {
            cout<<"Found the element"<<endl;
            return;
        }
        else if(arr[mid] > searchNum)
        {
            j = mid -1;
        }
        else
        {
            i = mid+1;
        }
    }
    cout<<"Element not present"<<endl;
}
int main()
{
    cout<<"Hello World";
    int arrOdd[] = {2,4,5,6,7,9,10,13,14}; // number of element odd
    
    int arrEven[] = {2,4,5,6,7,9,10,13,14, 16};// number of element even
    binrySearch(arrOdd, sizeof(arrOdd)/sizeof(arrOdd[0]), 2);
    binrySearch(arrEven, sizeof(arrEven)/sizeof(arrEven[0]), 16);
    
    return 0;
}
