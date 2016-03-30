#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    long long int x;
    long long int number;
    scanf("%lld", &x);

    if (x % 10 == 0) {
        cout << "NO";
    } else {
        number = x % 10;
        cout << number;
    }

    return 0;
}