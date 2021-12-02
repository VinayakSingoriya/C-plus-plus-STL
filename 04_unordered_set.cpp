#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;

void print(unordered_set<string> s){
    for(auto it : s) cout<<" "<<it;
    cout<<endl;
}

int main(){
    unordered_set<string> first = {"red", "green", "yellow", "black", "white"};
    cout<<"First unordered set : "<<endl;
    print(first);
    cout<<"Second unordered set : "<<endl;
    unordered_set<string> second(first.begin(), first.end());
    print(second);
    cout<<"Third unordered set : "<<endl;
    unordered_set<string> third(first);
    print(third);
}
//