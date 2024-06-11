// Write a function to print counting fron 1 to 100.
// #include<iostream>
// using namespace std;
// int counting(){
//     for (int i =1; i<= 100; i++){
//         cout<<i<<endl;
//     }
// }

// int main(){
//     counting();
// }

// Write a funtion to print simple interest.
// #include <iostream>
// using namespace std;
// float simpleinterest(int P, int R, int T){
//     float output = (P*T*R)/100;
//     return output;

// }
// int main(){
//     int ans = simpleinterest(20000,6,7);
//     cout<< "SI is:"<< ans <<endl;

// }

// Write if a person is eligible to vote or not.
#include <iostream>
using namespace std;

bool voting(int age){
    if (age>=18){
        cout<<"You are eligible for voting:"<<age<<endl;
    }
    else{
        cout<<"You are not eligible to vote:"<<age<<endl;
    }
}
int main(){
    voting(8);
}
