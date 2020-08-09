#include<iostream>
#include<vector>
using namespace std;
void swap(int &x, int &y)
{
    x = x^y;
    y=x^y;
    x=x^y;
}
void moveAllzerosToFrontofAray(vector<int>v1)
{
    int i=0, j = 0;
    for(int i = 0; i <v1.size(); i++)
    {
        if(v1[i] == 0)
        {
           swap(v1[i], v1[j]);
           j++;
        }
    }
    for(int i : v1)
    cout<<" "<<i;
}

int main()
{
    
    vector<int> vec = {1, 2,0,0, 3, 0, 0, 0, 7, 0, 9};
    moveAllzerosToFrontofAray(vec);
    return 0;
    
}