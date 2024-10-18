//new chapter-pointer
#include <iostream>
using namespace std;
void changeA(int a){//pass by value
    a=20;
}
void changeAref(int &a){//lecture sol-*a
    a=20;
}
int main(){
    // int a=2;
    // int *ptr=&a;
    // int **ptr2=&ptr;
    // cout<<ptr<<endl;
    // cout<<&a<<endl;
    // cout<<&ptr<<endl;
    // cout<<ptr2<<endl;
    // cout<<*ptr<<endl;
    // cout<<**ptr2<<endl;
    // cout<<*ptr2<<endl;
    // int ptr3=NULL;
    // cout<<ptr3<<endl;
    // int a=10;
    // changeA(a);
    // cout<<a<<endl;//pass by value
    // changeAref(a);//take &a here for lecture sol
    // cout<<a<<endl;//pass by reference
    int a=5;
    int *ptr=&a;
    int *ptr1=ptr+2;
    cout<<(ptr-ptr1)<<endl;
    cout<<(ptr==ptr1)<<endl;

    //array pointers
    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    // arr=&a//show error as it is constant

    return 0;
}