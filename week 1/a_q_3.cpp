#include <iostream>
#include <algorithm>
using namespace std;

bool max_str(const std::string& str1, const std::string& str2) { // LINE-1: Define the max_str function
    return str1 > str2; // LINE-2: Return true if str1 is lexicographically greater than str2
}

int main() {
    std::string words[3], word;

    for (int i = 0; i < 3; i++) {
        cin >> word;
        words[i] = word;
    }

    sort(words, words + 3, max_str);

    for (int i = 0; i < 3; i++)
        cout << words[i] << " ";

return 0;
}