//find the missing elements in an array 

#include <iostream>
#include<vector>
#include<deque>
using namespace std;


// missing element in unsorted array using hash 
void missing_number_using_hash(vector<int>arr, int maxVal)
{
    //take hash of max value of an array
    int hashArray[maxVal] = {0,};
    
    for(int i = 0; i <arr.size(); i++)
    {
       hashArray[arr[i]]++;
    }
    for(int i = 0; i <maxVal; i++)
    {
      if(hashArray[i] == 0)
      {
          cout<<"Missing element: "<<i<<endl;
      }
    }
    
}
int main()
{
    cout<<"Hello World\n";
    
    vector<int>  arraMisMoreNum = {0,3,2,7,6,9,6,1,5,10};// missing more then one element but  not start from 1
    missing_number_using_hash(arraMisMoreNum, 10);//max value here is 10 in a array
    return 0;
}
