#include <iostream>
using namespace std;

int main(){
    double num = 2.4;
    double* ptrNum = &num;

    cout << "Variable value: " << num << "\n";
    cout << "Address: " << &num << "\n";
    cout << "\n";
    cout << "Pointer value: " << ptrNum << "\n";
    cout << "Address: " << &ptrNum << "\n";
    cout << "Dereference: " << *ptrNum;

}