#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <iterator>

using namespace std;

int main()
{
    long long N;
    cin >> N;
    long long M;
    cin >> M;

    vector< vector<long long> > a(N);
    vector< vector<long long> > b(N);
    multiset<long long> c;
    long long res[N];

    long long L;
    long long R;
    long long V;

    for (long long i = 0; i < M; ++i)
    {
        cin >> L;
        cin >> R;
        cin >> V;

        L--;
        R--;

        a[L].push_back(V);
        b[R].push_back(V);
    }

    for (long long i = 0; i < N; ++i)
    {
        for (long long j = 0; j < a[i].size(); ++j)
        {
            c.insert(a[i][j]);
        }

        if (c.size() != 0)
        {
            res[i] = *c.rbegin();
        } else {
            res[i] = 1;
        }
        

        for (long long j = 0; j < b[i].size(); ++j)
        {
            c.erase(c.find(b[i][j]));
        }
    }

    for (long long i = 0; i < N; ++i)
    {
        cout << res[i] << " ";
    }

    cout << endl;

    return 0;
}