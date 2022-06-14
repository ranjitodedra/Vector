#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // push_back() --> add element at the end
    // time complexcity - O(1)
    vector<int>d{1,2,4,10,50};
    d.push_back(16);

    //pop_back() --> remove elment from the end
    d.pop_back();

    //insert() --> insert element in middle of array
    d.insert(d.begin()+3,7);

    //for multiple --> O(N)
    d.insert(d.begin()+3,4,5);

    //erase() --> remove element from middle 
    d.erase(d.begin()+2);
    d.erase(d.begin()+1,d.begin()+6);


    //size() , capacity()
    cout << d.size() << endl;
    cout << d.capacity() << endl;

    //front() --> first element ,back() --> last element
    cout<< d.front() <<endl;
    cout<< d.back()  <<endl;

    d.clear(); // delete all

    if(d.empty()){
        cout << "d is empty now !" << endl;
    }

    for(int x:d){
        cout << x << " , ";
    }
    cout << endl;

    //reserve --> to avoid doubling

    vector<int>v;
    v.reserve(500);

    int n,no;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> no;
        v.push_back(no);
        cout << " capacity = " << v.capacity() << endl;
    }

    for(int y:v){
        cout << y << " , ";
    }
    cout << endl;

    return 0;
}