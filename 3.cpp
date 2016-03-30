#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    bool palindrom = true;
    bool palindrom_same_letters = false;
    int palindrom_same_letter = 0;
    int len_of_no_palindrom;
    cin >> s;
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left++] != s[right--])
            palindrom = false;
    }

    int len = s.length();
    for (int i = 0; i < len; ++i) 
    {
        if (s[i] == s[i+1])
            palindrom_same_letter++;
    }

    if (palindrom_same_letter == len - 1)
        palindrom_same_letters = true;


    if (palindrom == true && palindrom_same_letters == false) {
        len_of_no_palindrom = s.length() - 1;
        cout << len_of_no_palindrom;
    } else if (palindrom_same_letters == true) {
        cout << -1;
    } else {
        cout << s.length();
    }

    return 0;
}