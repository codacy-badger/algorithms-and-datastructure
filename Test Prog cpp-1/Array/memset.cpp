/* memset example */
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char str[] = "almost every programmer should know memset!";
    memset(str, '-', 12);
    cout << str;
    return 0;
}
