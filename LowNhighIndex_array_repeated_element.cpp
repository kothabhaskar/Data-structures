#include<iostream>
#include<vector>
using namespace std;

void LowNhighIndexArayofgivenkey(vector<int>v1, int n)
{
    int i=0, j = 0,  k = 0;
    for(int i = 0; i <v1.size(); i++)
    {
        if(v1[i] == v1[i+1])
        {
            j = i+1;
            while(v1[i] == v1[j])j++;
            cout<<"val "<<v1[i]<<"Low "<<i<<" high "<<j-1<<endl;
            i = j-1;
        }
    }
}

int main()
{
    
    vector<int> vec = {1, 2,2,2, 3, 3, 3, 3, 7, 8, 9};
    LowNhighIndexArayofgivenkey(vec, 3);
    return 0;
    
}