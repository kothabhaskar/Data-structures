//find the pair elements equal to given sum using hash and generic 

#include <iostream>
#include<vector>
using namespace std;


// pair equal to given sum  
void find_pair_element_equl_sum_hash(vector<int>arr, int sum, int maxVal)
{
    int hash[maxVal] = {0};
    
    for(int i = 0; i <arr.size()-1; i++)
    {
        if(hash[sum-arr[i]] != 0)
        {
            cout<<"Pair val "<<sum-arr[i]<<" and "<<arr[i]<<endl;
        }
        hash[arr[i]]++;
    }
   
}
void find_pair_element_equl_sum(vector<int>arr, int sum)
{
    
    for(int i = 0; i <arr.size()-1; i++)
    {
        for(int j = i+1; j<arr.size(); j++)
        if(arr[i] + arr[j] == sum)
        {
            cout<<"Pair val "<<arr[i]<<" and "<<arr[j]<<endl;
        }
    }
   
}

int main()
{
    cout<<"Hello World\n";
    
    vector<int>  arraMisMoreNum = {1,6,5,4,8,2,9,3,7,10};// duplicate more then one element but  not start from 1
    find_pair_element_equl_sum_hash(arraMisMoreNum, 12, 10);
    cout<<"\n----\n";
    find_pair_element_equl_sum(arraMisMoreNum, 12);
    return 0;
}
