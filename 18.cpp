#include <vector>
#include <iostream>

using namespace std;

int main()
{
    long long int N;
    cin >> N;
    long long int M;
    cin >> M;
    long long int mas[10000];
    long long int x;
    long long int y;
    long long int w;
    long long int ln = 0;
    long long int ln2 = -1;
    long long int ln3 = 0;

    for (long long int i = 0; i < N; ++i)
    {
        mas[i] = -1;
    }

    for(long long int i = 0; i < M; i++)
    {
        x = 0;
        y = 0;

        cin >> x;
        cin >> y;

        if (x > N || y > N)
        {
            continue;
        }

        x--;
        y--;

        if (x == y)
        {
         ln3++;
            continue;
        }

        if (mas[x] == mas[y] && mas[x] != -1 && mas[y] != -1)
        {
            ln3++;
            continue;
        }

        if (mas[x] != -1 || mas[y] != -1)
        {
            if (mas[x] == -1 || mas[y] == -1)
            {
                if (mas[x] != -1)
                {
                    mas[y] = mas[x];
                } else {
                    mas[x] = mas[y];
                }
            } else {
                w = mas[y];
                for (long long int j = 0; j < N; ++j)
                {
                    if (w == mas[j])
                    {
                        mas[j] = mas[x];
                    }
                }
                ln2--;
            }
        } else {
            mas[x] = ln;
            mas[y] = ln;
            ln++;
            ln2++;
        }      
    }

    for (long long int i = 0; i < N; ++i)
    {
        if (mas[i] == -1)
        {
            ln2++;
        }
    }

    if (ln2 != 0)
    {
        cout << -1 << endl;
    } else {
        cout << ln3 << endl;
    }

    return 0;
}