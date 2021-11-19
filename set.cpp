#include<iostream>
#include<set>
using namespace std;

//Declaration and initialization of set
// int main(){
//     set<int> first;   //empty sets of ints
//     set<int> second = {1,2,3,4,5};  //set of 5 ints

//     int myints[] = {10,20,30,40,45};
//     set<int> third(myints, myints+5);  //range

//     set<int> fourth(third);  //copy of third

//     set<int> fifth(second.begin(), second.end());  //iterator

// }

// --------------------------------------------------------------------

// int main(){
//     set<int> first;
//     cout<<"is empty ?"<<first.empty()<<endl;
//     cout<<"Size : "<<first.size()<<endl;
//     cout<<"Max_size : "<<first.max_size()<<endl;
//     first.insert(2);
//     first.insert(5);
//     first.insert(4);
//     first.insert(1);
//     first.insert(10);
//     cout<<"Size : "<<first.size()<<endl;
//     for (auto it : first){
//         cout<<it<<" ";
//     }
//     first.insert(2);
//     cout<<"\n";
//     for (auto it : first){
//         cout<<it<<" ";
//     }

//     first.erase(5);
//     cout<<endl;
//     for (auto it : first){
//         cout<<it<<" ";
//     }
//     auto it = first.find(4);
//     first.erase(first.begin(), it);
//     cout<<endl;
//     for (auto it : first){
//         cout<<it<<" ";
//     }

//     first.clear();
//     cout<<"clearing the content ..."<<endl;
//     for (auto it : first){
//         cout<<it<<" ";
//     }
// }