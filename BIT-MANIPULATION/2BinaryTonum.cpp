#include <iostream>
using namespace std;
#include <vector>
#include <math.h>
#include <algorithm>

int binaryToNum(vector<int> v)
{

    reverse(v.begin(), v.end());
    int res = 0;

    for (int i = 0; i < v.size(); i++)
    {
        int bit = v[i];
        res = res + bit * pow(2, i);
    }
    return res;
}

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
    int num = 7;
    vector<int> res = numToBinary(num);

    for (int i : res)
    {
        cout << i;
    }
    cout << endl;

    cout << binaryToNum(res);
}