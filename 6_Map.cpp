#include<iostream>
#include<map>
#include<string>
using namespace std;

// Iterating function
// --------------------------------------------------------------------------
void printMap1(map<char, int> mp){
    // map<char, int> :: iterator it;
    for(auto it : mp){
        cout<< it.first<<" "<< it.second<< endl;
    }
}

// void printMap2(map<string, int> mp_f){
//     for(map<char, int> :: iterator it = mp_f.begin(); it!=mp_f.end(); it++){
//         cout<<it->first<<" "<<it->second<<endl;
//     }
// }
// ---------------------------------------------------------------------------

int main(){
// Constructor--------------------------
    map<char, int> mp = {{'a', 1}, {'b', 2}, {'c', 3}, {'d', 4}, {'e', 5}};
    map<char, int> mp1;
    mp1['a'] = 1;
    mp1['b'] = 2;
    mp1['c'] = 3;
    mp1['d'] = 4;
    mp1['e'] = 5;

    map<char, int> mp2(mp1.begin(), mp1.end());

    map<char, int> mp3(mp1);
    map<char, int> mp4;
    mp4 = mp3;
    // ------------------------------------------------------------------
    //Iterating
    cout<<"Map 1 : "<<endl;
    printMap1(mp1);
    cout<<"Map 2 : "<<endl;
    printMap1(mp2);
    cout<<"Map 3 : "<<endl;
    printMap1(mp3);
    cout<<"Map 4 : "<<endl;
    printMap1(mp4);
    // size() , max_size(), empty()
    cout<<"size of mp3 : "<<mp3.size()<<endl;
    cout<<"size of mp4 : "<<mp4.size()<<endl;
    map<int, int> intMap;
    cout<<"intMap map container is empty or not : "<<intMap.empty()<<endl;
    cout<<"Max Size of intMap container is  : "<<intMap.max_size()<<endl;

    //Inserting new elements---------------
    mp1.insert(std::pair<char, int>('f', 6));
    mp1.emplace('g', 7);
    mp1.emplace('h', 8);
    cout<<"After inserting some elements in mp1 : "<<endl;
    printMap1(mp1);

}