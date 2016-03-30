#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, M, x1, y1, x2, y2;
    cin >> N >> M >> x1 >> y1 >> x2 >> y2;

    if (abs(x2 - x1) == abs(y2 - y1)) {
        cout << "NO";
    } else {
        cout << "YES";
    }

    return 0;
}