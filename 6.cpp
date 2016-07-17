#include <vector>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int N;
    int M;
    scanf("%d%d", &N, &M);

    vector <vector <pair <int, int> > > mas(N);

    int x;
    int y;
    int c;

    int i, j;
    int count;

    for(i = 0; i < M; i++)
    {
        scanf("%d%d%d", &x, &y, &c);

        mas[x - 1].push_back(make_pair(y - 1, c));
        mas[y - 1].push_back(make_pair(x - 1, c));
    }

    int a;
    int b;
    scanf("%d%d", &a, &b);

    vector<long long> distance(N, 1000000000001);
    vector<bool> visited(N, false);

    int index;
    int min;

    a--;
    b--;

    distance[a] = 0;

    for (count = 0; count < N; count++)
    {
        index = -1; 

        for (i = 0; i < N; i++) {
            if (!visited[i] && (distance[i] < distance[index] || index == -1))
            {
                index = i;
            }
        }

        if (distance[index] == 1000000000001)
            break;

        visited[index] = true;

        for (i = 0; i < mas[index].size(); i++) {
            if (distance[index] + mas[index][i].second < distance[mas[index][i].first]) {
                distance[mas[index][i].first] = distance[index] + mas[index][i].second;
            }
        }
    }

    cout << distance[b] << endl;

    return 0;
}