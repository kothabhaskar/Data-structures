//find the duplicate elements in an sorted array 

#include <iostream>
#include<vector>
using namespace std;


// missing element in unsorted array using hash 
void duplicate_numbers_and_count(vector<int>arr)
{
    
    for(int i = 0; i <arr.size(); i++)
    {
       if(arr[i] == arr[i+1])
       {
           int j = i+1;
           while(arr[i] == arr[j]) j++;
           cout<<" element "<<arr[i]<<" repeete "<<j-i<<endl;
           i = j-1;
       }
    }
}

int main()
{
    cout<<"Hello World\n";
    
    vector<int>  arraMisMoreNum = {1,1,1,1,1,1,1,1,3,4,4,5,5,5,5,6,7,8,9,9,9,9,9};// duplicate more then one element but  not start from 1
    duplicate_numbers_and_count(arraMisMoreNum);
    return 0;
}
