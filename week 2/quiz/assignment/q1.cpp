#include <iostream>
using namespace std;

void print(int a) { cout << a; }
void print(int a, int b)
{ // LINE-1

    int r = b + a;

    cout << r;
}
int main()
{

    int a, b;

    cin >> a >> b;

    if (b < 0)
        print(a);
    else
        print(a, b);
    return 0;
}