#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    long long int N;
    int N_max = 100000;
    long long int A[N_max];
    long long int answer;
    cin >> N;

    for (long long int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    sort(A, A + N);

    if ((abs(A[0]) >= A[N-1]) && (abs(A[1]) >= A[N-2])){
        answer = A[0]*A[1];
    } else {
        answer = A[N-1]*A[N-2];
    }

    cout << answer;
    
    return 0;
}