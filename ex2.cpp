#include <iostream>
#include <cstring>
using namespace std;

void reverse(char s[], int size) {
    char* address_ptr = s;
    for(int i=0; i< size/2; i++){
        char j = s[i];
        s[i] = s[(size - 1) - i];
        s[size - i - 1] = j;
    }

}

int main(){
    char name[] = "Shanell";
    int size = strlen(name);
    reverse(name, size);
    cout << name << "\n"; 
}
