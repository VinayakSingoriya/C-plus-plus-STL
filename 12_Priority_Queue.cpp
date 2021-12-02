#include<iostream>
#include<queue>
using namespace std;

void printQ_max(priority_queue<int> q){
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

void printQ_min1(priority_queue<int> q){
    while(!q.empty()){
        cout<<-1*q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

void printQ_min2(priority_queue<int, vector<int>, greater<int>> q){
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
//--------------Max Priority_Queue---------------
    //Initialize
    priority_queue<int> pq;
    //pushing elements
    pq.push(10);
    pq.push(5);
    pq.push(100);
    pq.push(12);
    pq.push(78);
    //Print elements
    cout<<"Max Priority queue : "<<endl;
    printQ_max(pq);
//------------------------------------------------

//-------------Min Priority_Queue from Max Priority_Queue------------
    priority_queue<int> pq1;
    //pushing elements with negation
    pq1.push(-10);
    pq1.push(-5);
    pq1.push(-100);
    pq1.push(-12);
    pq1.push(-78);
    //print elements
    cout<<"Min priority queue from Max Priority Queue : "<<endl;
    printQ_min1(pq1);
//-------------------------------------------------------------------

//-----------------Max Priority Queue-----------------------------
priority_queue<int, vector<int>, greater<int>> pq2;
    //Pushing elements
    pq2.push(10);
    pq2.push(5);
    pq2.push(100);
    pq2.push(12);
    pq2.push(78);
    //Printing Elements
    cout<<"Max Priority Queue : "<<endl;
    printQ_min2(pq2);
//----------------------------------------------------------------
return 0;

}