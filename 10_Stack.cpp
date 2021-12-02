#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main(){
//Initialize stack
    stack<int> st;
//Insert elements through push()
    for(int i=0; i<10; i++){
        st.push(i);     //st.emplace(i)
    }
//print queue
    printStack(st);
    cout<<"Size of the stack st is : "<<st.size()<<endl;
    bool flag = st.empty();
    cout<<((flag==0) ? "Stack is not empty" : "Stack is empty")<<endl;

}