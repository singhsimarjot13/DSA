#include <iostream>
using namespace std;
//literal means jo sae hii rehte h
// function defination(use function to avoid redundancy)
void printhello(){
    cout<<"hello world"<<endl;
}
void printname(string n1,string n2,string n3){
    cout<<n1<<endl;
    cout<<n2<<endl;
    cout<<n3<<endl;
}
//min of 2 number
double findMinimuumNumber(double n1,double n2){//copies of values are passed
    if(n1<n2){
        return n1;
    }else{
        return n2;
    }
}
void sumN(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<"here is your sum "<<sum<<endl;
}
int factorial(int f){
    int i=f,fact=1;
    while(i!=1){
        fact=fact*i;
        i--;
    }
    return fact;
}
int sum(int a,int b){
    a+=10;
    b+=10;
    return a+b;
}
int sumOfDigits(int a){
    int num,sum=0;
    while(a >0){
    num=a%10;
    sum=sum+num;
    a=a/10;}
cout<<"here is your sum of digits "<<sum<<endl;
}
int binomialCoeff(int n,int r){
int fact_n=factorial(n);
int fact_r=factorial(r);
int diff=factorial(n-r);
int sol=fact_n/(fact_r*diff);
return sol;
}

//homework problems
// fibonacci series
void fibbonacci_series(int n){
    int temp1,temp2,sum;
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<i<<" ";
            temp1=i;
        }else if(i==1){
            cout<<i<<" ";
            temp2=i;
        }else{
            sum=temp1+temp2;
            temp1=temp2;
            temp2=sum;
            cout<<sum<<" ";
        }
    }
}
//to check prime or not
bool tocheckprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
//print prime from 2 to n
void printPrime(int n){
    for(int i=2;i<=n;i++){
        bool isprime=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
        if(isprime==true){
            cout<<i<<" ";
        }
    }
}
int main(){//automatically called by compiler
    //function call
    // printhello();
    // printname("waheguruji","guru gobind singh ji","guru granth sahib ji");
    // cout<<"here is your minimum number "<<findMinimuumNumber(5.87942794,7.7845672346);//actual values passed
    // sumN(5);
    // factorial(5);
    // int x=3,y=4;
    // cout<<"here is your sum "<<sum(x,y)<<endl;//pass by value
    // cout<<x<<'\n'<<y<<endl;//it will not cahnge after function call because it is in separate memory
    // sumOfDigits(1555);
    // cout<<"here is your bionomail coeff "<<binomialCoeff(6,3)<<endl;
    // fibbonacci_series(10);cout<<'\n';
    // cout<<tocheckprime(29);
    printPrime(100);
    return 0;
}