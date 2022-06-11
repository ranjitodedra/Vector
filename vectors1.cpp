// vector is dynamic array --> it can increase or descrese size of array
// x -> add a element -> 2x

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // ------ create ------ -> class<datatype>object;
    vector<int> a;                     // way - 1
    vector<int> b(5, 10);              // way - 2
    vector<int> c(b.begin(), b.end()); // way - 3
    vector<int> d{1, 2, 3, 4, 5};      // way - 4

    // ------ iterate ------

    for (int i = 0; i < b.size(); i++)
    { // way - 1
        cout << b[i] << ",";
    }
    cout << endl;

    for (auto it = b.begin(); it != b.end(); it++)
    { // way - 2
        cout << (*it) << ",";
    }
    cout << endl;

    for (int x : b)
    { // way - 3 --> for each
        cout << x << ",";
    }
    cout << endl;

    // ------ taking input ------

    int n, no;
    vector<int> v;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        cin >> no;
        v.push_back(no);
    }

    for (int x : v)
    { // way - 3 --> for each
        cout << x << ",";
    }

    return 0;
}