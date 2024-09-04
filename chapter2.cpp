#include <iostream>
using namespace std;
int main(){
    cout<<"Simarjot\n"<<"Singh"<<endl;
    int age=25;
    float pi=3.1244f;
    cout<<true<<endl;//true->1,false->0
    cout<<sizeof(age)<<endl;
    return 0;

    //homework
    cout<<"Enter\n 0 for addition\n 1 for subtraction\n 2 for multiplication\n 3 for division \n 4 for remainder where first number will be  divident and second will be divisor\n";
    int decision;
    cin >> decision;
    if (decision == 0)
    {
        cout << "enter 2 number for operation\n";
        int a, b;
        cin >> a;
        cin >> b;
        cout << "Result-" << a + b << endl;
    }
    else if (decision == 1)
    {
        cout << "enter 2 number for operation\n";
        int a, b;
        cin >> a;
        cin >> b;
        cout << "Result-" << a + b << endl;
    }
    else if (decision == 2)
    {
        cout << "enter 2 number for operation\n";
        int a, b;
        cin >> a;
        cin >> b;
        cout << "Result-" << a * b << endl;
    }
    else if (decision == 3)
    {
        cout << "enter 2 number for operation\n";
        int a, b;
        cin >> a;
        cin >> b;
        cout << "Result-" <<((double) a / b)<< endl;
    }
    else if (decision == 4)
    {
        cout << "enter 2 number for operation\n";
        int a, b;
        cin >> a;
        cin >> b;
        cout << "Result-" << a % b << endl;
    }
    else
    {
        cout << "invalid input" << endl;
    }
}