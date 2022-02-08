#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
using namespace std;

int main(){
    //for array
    array<int, 5> arr = {1,2,4,6,45};
    int n = sizeof(arr)/sizeof(int);
    int elm = 6;
    bool isFound = binary_search(arr.begin(), arr.end(), elm);
    if(isFound) cout<<"element found";
    else cout<<"element not found";

    //for vector
    vector<int> vec = {1,2,3,4,5,6};
    int elem = 10;
    if(binary_search(vec.begin(), vec.end(), elem)) cout<<"\nelement found";
    else cout<<"\nNot found";
    return 0;
}