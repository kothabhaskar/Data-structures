#include<iostream>
#include<vector>
using namespace std;

void findCommonNum(vector<int>v1, vector<int>v2, vector<int>v3 )
{
    int i=0, j = 0,  k = 0;
    while(i< v1.size() && j< v2.size() && k < v3.size())
    {
         cout<<"values  is : "<<v1[i]<<" "<<v2[j]<<" "<<v3[k]<<endl;
        if(v1[i] == v2[j] && v2[j] == v3[k])
        {
            cout<<"Common index is : "<<i<<" "<<j<<" "<<k<<endl;
            break;
        }
        else if(v1[i] <= v2[j] && v1[i] <= v3[k])
        {
            i++;
        }
        
        else if(v2[j] <= v1[i] && v2[j] <= v3[k])
        {
            j++;
        }
        else if(v3[k] <= v2[j] && v3[k] <= v1[i])
        {
            k++;
        }
    }
}

int main()
{
    
    vector<int> vec = {1, 2,3,4,5,6,7,8,9};
    vector<int> vec1 = {4,5,6,7,8,9};
    vector<int> vec2= {3,4,5,6,7,8,9};
    findCommonNum(vec, vec1, vec2);
    return 0;
    
}