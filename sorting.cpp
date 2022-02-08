#include<iostream>
#include<array>
#include<vector>
// #include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    //For array
    int arr[] = {2,5,1,6,3};
    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr+n); //increasing order
    cout<<"Increasing order(array)"<<endl;
    for(int item : arr) cout<<item<<" ";
    sort(arr, arr+n, greater<int>());//Decreasing order
    cout<<"\nDecreasing order (array)"<<endl;
    for(int item : arr) cout<<item<<" ";

    //vector
    vector<int> vec = {4,3,4,2,1,67,4};
    //increasing order
    sort(vec.begin(), vec.end());
    cout<<"\nIncreasing order(Vector)"<<endl;
    for(int item: vec) cout<<item<<" ";
    //Decreasing order
    sort(vec.begin(), vec.end(), greater<int>());
    cout<<"\nDecreasing order(vector)"<<endl;
    for(int item: vec) cout<<item<<" ";

    //Max Element
    cout<<"\nMax Element in array : ";
    int maxA = *max_element(arr, arr+n); 
    cout<<maxA;
    cout<<"\nMax element in vector : ";
    int maxV = *max_element(vec.begin(), vec.end()); 
    cout<<maxV;

    //Min element
    cout<<"\nMin element in array : ";
    cout<< *min_element(arr, arr+n);
    cout<<"\nMin element in vector : ";
    cout<< *min_element(vec.begin(), vec.end());

    

    return 0 ;
}