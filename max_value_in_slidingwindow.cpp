//find the max valu in each sliding window of an array

#include <iostream>
#include<vector>
#include<deque>
using namespace std;
void maxValuesInslidingWindow(vector<int>arr, int windowSize)
{
    std::vector<int>result;
    std::deque<int>window;//2,-4,5,-6,7,-9,10,13,-14
  for(int i = 0; i < windowSize; i++)
  {
      while(!window.empty() && arr[i]>= arr[window.back()])
      {
          window.pop_back();
      }
      window.push_back(i);
  }
  result.push_back(arr[window.front()]);
  for(int i = windowSize; i <arr.size(); i++)
  {
      
      if(!window.empty() && window.front() <= i- windowSize)
      {
          window.pop_front();
      }
      while(!window.empty() && arr[i] >= arr[window.back()])
      {
          window.pop_back();
      }
      
      window.push_back(i);
      result.push_back(arr[window.front()]);
  }
    for(auto i : result)
        cout<<i<<" ";
    cout<<endl;
    
}
int main()
{
    cout<<"Hello World\n";
    vector<int> arrOdd = {2,-4,5,-6,7,-9,10,13,-14}; // number of element odd
    
    vector<int>  arrEven = {2,4,5,6,7,9,-10,-13,-14, 16,-20,20, -3,32,-22,-32,-43,-43,-5, 5,5,5,5,4,3,43};// number of element even
    maxValuesInslidingWindow(arrOdd, 3);
    maxValuesInslidingWindow(arrEven, 2);
    
    return 0;
}
