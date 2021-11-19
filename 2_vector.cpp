#include<iostream>
#include<vector>
using namespace std;

//CONSTRUCTOR98

// int main(){
//     vector<int> first;   // empty vector of ints
//     vector<int> second(4, 100);    // four ints with value 100
//     vector<int> third(second.begin(), second.end());    // iterating through second
//     vector<int> fourth(third);         // a copy of third

//     cout<< "Second_vector : \n";
//     for(auto it = second.begin(); it!=second.end(); it++){
//         cout<< *it<<" ";
//     }
//     cout<< "\nSecond_vector : \n";
//     for(auto it = third.begin(); it!=third.end(); it++){
//         cout<< *it<<" ";
//     }
// }
// ------------------------------------------------------------------------------------------

//Begin(), end()

// int main(){
//     vector<int> dArray;
//     for(int i=0; i<=5; i++) dArray.push_back(i);

//     for(vector<int>::iterator it = dArray.begin(); it!=dArray.end(); it++){
//         cout<< *it<<" ";
//     }
// }
// ---------------------------------------------------------------------------------------------

// rbegin() , rend()
// int main(){
//     vector<int> dArray = {23,24,25,26,27};
//     for(vector<int> :: reverse_iterator it = dArray.rbegin(); it != dArray.rend(); it++){    //prints in reverse order
//         cout<< *it<<" ";
//     }
// }

//Access elements
// int main(){
//     vector<int> arr = {1,2,3,4,5};

//     for(int i = 0; i<5; i++){
//         cout<<arr.at(i)<<" ";
//     }
//     cout<<"\n";

//     //front()
//     cout<<arr.front()<<endl;
//     //back()
//     cout<<arr.back()<<endl;
//     int *p = arr.data();

//     //data()
//     for(int i =0; i<5; i++){
//         cout<<*p<<" ";
//         ++p;
//     }
// }
// -------------------------------------------------------------------------
//Modifiers

// ---assign()
// int main(){
//     vector<int> first  = {1,2,3,4,5,6};
//     vector<int> second;
//     // first.assign(7, 100);         // 7 ints with a value of 100
//     vector<int>::iterator it = first.begin()+1;
//     second.assign(it, first.end()-1);  // the 5 central values of first

//     for(auto it: second){
//         cout << it<<" ";
//     }
// }

//---push_back(), pop_back()
int main(){
    vector<int> arr;
    //pushing elements
    for(int i=0; i<=5; i++) arr.push_back(i);
    for(int i = 0; i<5; i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<"\n";
    //poping elements
    arr.pop_back();
    arr.pop_back();
    for(int it : arr){
        cout<<it<<" ";
    }


}

//