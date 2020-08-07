//find the missing elements in an array 

#include <iostream>
#include<vector>
#include<deque>
using namespace std;

//case-1:  Elements start from 1 to n and in that any one number is missing
void missing_element_startsfrom_natural_number1(vector<int>arr)
{
    int n = arr[arr.size() -1]; // last element is n 
    int sumNaturalNum = (n *(n+1))/2;
    int sumArryElem =0;
    for(auto i: arr)
        sumArryElem += i;
    cout<<"Missing Number is : "<<(sumNaturalNum - sumArryElem)<<endl;
    
}
// case-2: Elements start from x i.e any number to n and in that any one number is missing
void missing_element_startsfrom_any_number(vector<int>arr)
{
    //sol: find the vale at each position and fins the difference in each index like value - index pos = difference
    int diff = arr[0] - 0;
    for(int i = 1; i <arr.size(); i++)
    {
        if(arr[i] - i != diff){
            cout<<"Missing Number is : "<<diff + i<<" at index "<<i<<endl;
            break;
        }
    }
    
}
// case-3: Elements start from x i.e any morethen one number is missing 
void missing_more_elements_startsfrom_any_number(vector<int>arr)
{
    //sol: find the vale at each position and fins the difference in each index like value - index pos = difference
    int diff = arr[0] - 0;
    for(int i = 1; i <arr.size(); i++)
    {
        if(arr[i] - i != diff){
            while(diff < arr[i]-i)
            {
                cout<<"Missing Number is : "<<diff + i<<" at index "<<i<<endl;
                diff++;
            }
           
        }
    }
    
}
int main()
{
    cout<<"Hello World\n";
   
    vector<int>  arrNumMis = {1,2,3,4,5, 7,8,9, 10};// missing element from natural numbers starting from 1
    missing_element_startsfrom_natural_number1(arrNumMis); //missing should be 5
    
    vector<int>  ararrNumMis = {4,5, 7,8,9, 10};// missing element but  not start from 1
    missing_element_startsfrom_any_number(ararrNumMis);
    
    vector<int>  arraMisMoreNum = {4,5, 7,8,9, 10, 13, 20};// missing more then one element but  not start from 1
    missing_more_elements_startsfrom_any_number(arraMisMoreNum);
    return 0;
}
