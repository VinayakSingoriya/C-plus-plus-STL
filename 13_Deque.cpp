#include<iostream>
#include<deque>
using namespace std;

void printDQ(deque<int> dq){
    auto it = dq.begin();
    while(it!=dq.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
}

int main(){
    deque<int> dq;
    for (int i=0; i<5; i++) dq.push_back(i);
    printDQ(dq);
    for (int i=5; i<10; i++) dq.push_front(i);
    printDQ(dq);
    dq.pop_back();
    printDQ(dq);
    dq.pop_front();
    printDQ(dq);
    cout<<"Front element : "<<dq.front()<<endl;
    cout<<"Rare element : "<<dq.back()<<endl;
    return 0;
}