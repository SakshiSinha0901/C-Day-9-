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

// Write SIP calculator using function concept
// #include <iostream>
// #include <cmath>
// using namespace std;

// double SI(double monthlyinvestment,double annualinterestrate,int year){
//     //convert annual interest rate to monthly interest rate
//     double monthlyinterestrate = annualinterestrate/12/100;
//     //total number of months
//     int months = year * 12;

//     double futurevalue = monthlyinvestment * (pow(1 + monthlyinterestrate, months) - 1) / monthlyinterestrate * (1 + monthlyinterestrate);
//     return futurevalue;
// }
// int main(){
//     double monthlyinvestment;
//     double annualinterestrate;
//     int years;

//     cout<<"Enter the monthly investment amount:"<<endl;
//     cin>>monthlyinvestment;
//     cout<<"Enter the annual interest rate:"<<endl;
//     cin>>annualinterestrate;
//     cout<<"Enter the number of years:"<<endl;
//     cin>>years;

//     double futurevalue = SI( monthlyinvestment, annualinterestrate, years);
//     cout<<"The future value of your investment is:"<<futurevalue<<endl;

//     return 0;
// }   

// Write a function to print prime number between 1 to 100
#include <iostream>
using namespace std;

bool isprime(int number){
    if (number<=1){
        return false;
    }
    for (int i= 2; i<=number/2;++i){
        if (number%i ==0){
            return false;
        }
    }
    return true;
}
void printprimes(){
    cout<<"The prime numbers are:"<<endl;
    for(int i = 1;i<=100;++i){
        if (isprime(i)){
            cout<<i<<"";
        }
        cout<<endl;
    }
    
}
int main(){
    printprimes();
    return 0;
}
