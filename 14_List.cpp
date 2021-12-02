#include<iostream>
#include<list>
using namespace std;


void printList(list<int> ls){
    auto it = ls.begin();
    while(it!=ls.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
}

int main(){
    list<int> ls;
    for(int i=0; i<5; i++) ls.push_back(i);  //ls.emplace_back()
    printList(ls);
    for(int i=5; i<10; i++) ls.push_front(i);  //ls.emplace.front()
    printList(ls);
    ls.pop_back();
    printList(ls);
    ls.pop_front();
    printList(ls);
    cout<<"Front element : "<<ls.front()<<endl;
    cout<<"Rare element : "<<ls.back()<<endl;
    return 0;
}