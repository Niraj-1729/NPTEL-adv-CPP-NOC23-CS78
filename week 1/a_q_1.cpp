#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main() {
    char str[20];
    char ch;
    cin >> str;
    
    stack<char> s; // LINE-1: Corrected stack declaration
    
    for (int i = 0; i < strlen(str); i += 2)
        s.push(str[i]); // LINE-2: Push every other character into the stack
    
    int len = s.size();
    
    for (int i = 0; i < len; i++) {
        ch = s.top(); // LINE-3: Corrected to call top() method
        
        cout << ch;
        
        s.pop();
    }
    return 0;
}