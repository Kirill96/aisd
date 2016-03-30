#include <iostream>
using namespace std;

int main()
{
    long long int N;
    long long int A;
    bool x1 = false;
    bool x2 = false;
    bool x3 = false;
    bool x4 = false;
    bool x5 = false;
    bool x6 = false;
    bool tmp = false;
    cin >> N;

    for (long long int i = 0; i < N; ++i)
    {
        cin >> A;
        if (A == 1033){
            x1 = true;
            if (x2 == true || x3 == true || x5 == true){ tmp = true; }
        } else if (A == 1021*1031){
            x2 = true;
            if (x1 == true){ tmp = true; }
        } else if (A == 1031){
            x3 = true;
            if (x4 == true || x1 == true || x5 == true){ tmp = true; }
        } else if (A == 1021*1033){
            x4 = true;
            if (x3 == true){ tmp = true; }
        } else if (A == 1021){
            x5 = true;
            if (x6 == true || x1 == true || x3 == true){ tmp = true; }
        } else if (A == 1031*1033){
            x6 = true;
            if (x5 == true){ tmp = true; }
        } else if (A == 1031*1033*1021){
            tmp = true;
        }
    }

    if (tmp == true){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}