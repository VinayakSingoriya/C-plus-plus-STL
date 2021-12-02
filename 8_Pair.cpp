#include<iostream>
using namespace std;
//std::pair, std::make_pair

int main(){
    pair<int, int> pr = {1,2};
    cout<<pr.first<<endl;
    cout<<pr.second<<endl;

    pair<int, int> pr1;
    pr1 = make_pair(3,4);
    cout<<pr1.first<<endl;
    cout<<pr1.second<<endl;
    

    cout<<"Nested Pair :"<<endl;
    pair<pair<int, int>, int> pr2;
    pr2 = make_pair(make_pair(5,6),7);
    cout<<pr2.first.first<<endl;
    cout<<pr2.first.second<<endl;
    cout<<pr2.second<<endl;
    
}