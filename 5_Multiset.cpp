#include<iostream>
#include<set>
using namespace std;

//constructor

// int main(){
//     multiset<int> first;  //empty multiset of ints

//     int myInts[] = {10,20,30,20,20};
//     multiset<int> second (myInts, myInts+5);  //Pointers used as iterators

//     multiset<int> third(second);   //A copy of second

//     multiset<int> fourth(second.begin(), second.end());

// }

// Iterators
int main(){
    multiset<int> mul = {42,71,71,71, 12};
    multiset<int> :: iterator it;
    it = mul.begin();
    cout<<"mul contains : "<<endl;
    for(it; it!=mul.end(); it++){
        cout<<*it<<" ";
    }
   
    cout<<endl;
    cout<<" Iterating through rbegin() and rend()"<<endl;
    multiset<int> :: reverse_iterator rit;
    for(rit=mul.rbegin(); rit!=mul.rend(); rit++){
        cout<<*rit<<" ";
    }

    mul.erase(mul.find(71));
    cout<<"\nAfter erase 71 : "<<endl;
    for(it = mul.begin(); it!=mul.end(); it++){
        cout<<*it<<" ";
    }
    mul.emplace(30);
    mul.emplace(40);
    mul.emplace(30); 
    cout<<"\n after inserting some elements : "<<endl;   
    for(it = mul.begin(); it!=mul.end(); it++){
        cout<<*it<<" ";
    }

cout<<"\n71 appears "<<mul.count(71)<<" times in mul multiset container";
    return 0;
}
//
