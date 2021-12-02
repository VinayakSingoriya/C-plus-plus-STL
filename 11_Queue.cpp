#include<iostream>
#include<queue>
using namespace std;

void printQ(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    //Initialize
    queue<int> q;
    // push elements into the queue
    for(int i=0; i<10; i++){
        q.push(i);     //q.emplace()
    }
    //print the queue
    printQ(q);
    cout<<"Front element : "<<q.front()<<endl;
    cout<<"Rare element : "<<q.back()<<endl;
    cout<<"Size of a queue : "<< q.size()<<endl;

}