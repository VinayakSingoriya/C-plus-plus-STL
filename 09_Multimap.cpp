#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<char, int> mp;

    //inserting elements
    mp.insert(pair<char, int>('a',1));
    mp.emplace('b',2);
    mp.emplace('c', 3);
    mp.emplace('c', 3);
    mp.emplace('d', 4);
    mp.emplace('c', 4);

    for(auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}