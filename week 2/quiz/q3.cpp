#include<iostream>
#define X 1

using namespace std;

int main() {

    int i;
    const int i1 = 2;
    const int i2 = i1;  

    i2 = X + 5; 
    i = i1;  
    i1 = 4 + 5;  

    return 0;
}

//line 2 & 4