#include <iostream>
using namespace std;
int main(){
    //check for negative and positive number
//     int n;
//     cout<<"enter number"<<endl;
//     cin>>n;
//     if(n>=0){
// cout<<"it is positive number"<<endl;
//     }else{
//         cout<<"it is negative number"<<endl;
//     }

//check for result
// int marks;
// cout<<"enter marks\n";
// cin>>marks;
// if(marks>=90){
//     cout<<"A\n";
// }else if( marks>=80 && marks<=90){
//     cout<<"B\n";
// }else{
//     cout<<"C\n";
// }

// check for uppercase and lowercase
// char a;
// cout<<"enter charactor for a check of uppercase and lowercase\n";
// cin>>a;
// int b=(int) a;
// if(b>=65 && b <=90){
//     cout<<"It is uppercase\n";
// }else if(b>=97 && b<=122){
//     cout<<"it is lowercase letter\n";
// }else{
//     cout<<"It is not a alphabet";
// }

//check for eligibility to vote
// int age;
// cout<<"enter age\n";
// cin>>age;
// if(age>=18){
//     cout<<"eligible to vote\n";
// }else{
//     cout<<"not eligible to vote\n";
// }

//ternary statement
// int n;
// cout<<"enter number\n";
// cin>>n;
// cout<<(n>=0?"positive":"negative");
// }

//while loop
// int n=0;
// int limit;
// int sum=0;
// cout<<"enter limit\n";
// cin>>limit;
// while(n<=limit){
// cout<<n<<endl;
// sum+=n;
// n++;
// }
// cout<<endl<<sum;

//for loop
// int limit;
// cout<<"enter limit\n";
// cin>>limit;
// int sum=0;
// for(int i=0;i<=limit;i++){
//     cout<<i<<" ";
//     sum=sum+i;
// }
// cout<<endl;
// cout<<"your sum is "<<sum<<endl;
// cout<<endl;

//sum of all odd number 
// int limit;
// int i=0,sum=0;
// cout<<"enter limit\n";
// cin>>limit;
// while(i<=limit){
//     if(i%2!=0){
//         sum+=i;
//         cout<<i<<" ";
//     }
//     i++;
// }
// cout<<endl<<sum<<endl;

//do-while(check for prime number)
// int number,i=2;
// cout<<"enter number\n";
// cin>>number;
// do{
//     if(number%i==0){
//         cout<<"it is not prime"<<i;
//         return 0;
//     }
//     i++;
// }while(i*i<=number);
// cout<<"it is prime"<<endl;

//nested loop
// for(int i=1;i<=5;i++){
//     for(int j=5;j>=i;j--){
//         cout<<"*";
//     }
//     cout<<endl;
// }


//homework
//q1(sum of all number from 1 to n whih are divisible by 3)
// int limit;
// int i=0,sum=0;
// cout<<"enter limit\n";
// cin>>limit;
// while(i<=limit){
//     if(i%3==0){
//         sum+=i;
//         cout<<i<<" ";
//     }
//     i++;
// }
// cout<<endl<<sum<<endl;

//q2(print factorial of N)
int number;
unsigned long factorial=1;
cout<<"enter number for factorial\n";
cin>>number;
while(number>1){
    factorial=factorial*number;
    number--;
}
cout<<"here is your factorial "<<factorial<<endl;

}