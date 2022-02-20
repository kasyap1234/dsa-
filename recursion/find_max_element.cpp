#include <iostream>
#include <vector>
using namespace std;
int FindMax(vector<int> array, int index)
{
    if (index ==array.size() - 1)
    {
        return array[index];
    }
   
    int maxi = FindMax(array, index + 1);
    if (array[index] > maxi)
    {
        return array[index];
    }
    else
    {
        return maxi;
    }
}
int main() {}
