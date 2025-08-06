#include <iostream>
using namespace std;
#include <vector>

vector<int> numToBinary(int num)
{
    vector<int> v;

    while (num > 1)
    {
        int rem = num % 2;
        v.insert(v.begin(), rem);
        num = num / 2;
    }
    v.insert(v.begin(), 1);
    return v;
}

int main()
{
    int num = 15;
    vector<int> res = numToBinary(num);

    for (int i : res)
    {
        cout << i;
    }
}