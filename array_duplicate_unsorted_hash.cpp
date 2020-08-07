//find the duplicate elements in an unsorted array using hash

#include <iostream>
#include<vector>
using namespace std;


// missing element in unsorted array using hash 
void duplicate_numbers_and_count_hash(vector<int>arr, int maxVal)
{
    int hash[maxVal] = {0};
    
    for(int i = 0; i <arr.size(); i++)
    {
        hash[arr[i]]++;
    }
    for(int i = 0; i <maxVal; i++)
    {
        if(hash[i] > 1)
        {
            cout<<" element "<<i<<" count : " << hash[i]<<endl;
        }
    }
}

int main()
{
    cout<<"Hello World\n";
    
    vector<int>  arraMisMoreNum = {1, 3,5,2,4,4,3,2,4,8,7,7,7,6,0,9,7,5,7,10};// duplicate more then one element but  not start from 1
    duplicate_numbers_and_count_hash(arraMisMoreNum, 10);
    return 0;
}
