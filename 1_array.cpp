#include <iostream>
#include <array>
using namespace std;

//array::begin(), array:end()
// int main(){
//     array<int, 5> arr = {23,24,25,26,27};
//     cout<<"Elements are : ";
//     for(auto it = arr.begin(); it!=arr.end(); it++){
//         cout<<" "<<*it;
//     }
//     cout<<"\n";
//     cout<<"front element : "<<arr.front()<< endl;

//     cout<<"last element : "<<arr.back()<< endl;
//     return 0;
// }
// ------------------------------------

//array:rbegin()
// int main(){
//     array<int, 5> arr = {23,24,25,26,27};
//     cout<<"Elements are : ";
//     for (auto it = arr.rbegin(); it!=arr.rend(); it++){
//         cout<<" "<<*it;
//     }
// }
// -----------------------------------
// int main(){
//     array<int, 5> arr = {23,24,25,26,27};
//     cout<<"Elements are : ";
//     for(auto it = arr.end()-1; it>=arr.begin(); it--){
//         cout<<" "<<*it;
//     }

// }
// -----------------------------------

// int main(){
//     array<int, 5> arr = {23,24,25,26,27};
//     cout<<"Elements are : ";
//     for (auto it = arr.rbegin(); it!=arr.rend(); it++){
//         cout<<" "<<*it;
//     }
// ----------------------------------------------------------

// }

//For each loop
// int main(){
//      array<int, 5> arr = {23,24,25};
//     cout<<"Elements are : ";
//     for(auto it : arr){
//         cout<<" "<<it;
//     }
//     cout<<"\n";
//     cout<<"size : "<<arr.size()<<endl;  //Number of elements
//     cout<<"size : "<<sizeof(arr)<<endl;   //total number of bytes consumed by array
//     cout<<"size : "<<sizeof(arr[0])<<endl;     //size of a particular element
//     cout<<"Size : "<<arr.max_size();
//     return 0;
// }

//------------------------------------------------
//empty array
// int main(){
//     array<int, 0> first_array;
//     array<int, 5> second_array = {1,2,3};
//     cout<<"first array is : "<<(first_array.empty() ? "empty" : "not empty")<<endl;
//     cout<<"second array is : "<<(second_array.empty() ? "empty" : "not empty")<<endl;

//     for(auto it : first_array){
//         cout<<" "<<it;
//     }
//     cout<<"\n";
//     for(auto it : second_array){
//         cout<<" "<<it;
//     }

//     for (int i=0; i<5; i++) cout<<second_array.at(i)<<endl;
// }

//------------------------------------------

// Front, back, data
// int main(){
//     array<int, 5> arr = {45,46,47,48,49};
//     cout<<"Front : "<<arr.front()<<endl;
//     cout<<"back : "<<arr.back()<<endl;
//     int *data = arr.data(); 
//     cout<<"data : "<<*data<<endl;

// }

//------------------------------------------------------

//fill
// int main(){
//     array<int, 5> arr;
//     arr.fill(4);
//     for(int i : arr) cout<<i<<" ";
//     return 0;
// }

// --------------------------------------------------------

// swap
int main(){
    array<int , 5> arr_1 = {1,2,3,4,5};
    array<int,  5> arr_2 = {6,7,8,9,10};
    arr_1.swap(arr_2);
    for(int i : arr_1) cout<<" "<<i;  
    cout<<endl;
    for(int j : arr_2) cout<<" "<<j;  
    return 0;

}

