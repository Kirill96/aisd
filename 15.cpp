#include <iostream>
#include <cctype>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
    char s[100001];
    int Q;
    int L;
    int R;
    bool flag = false;
    scanf("%s", s);
    scanf("%d", &Q);

    int arr[100001];
    for (int i = 0; i < 100001; ++i)
    {
        arr[i] = 0;
    }
    int w = 0;

    for (int i = 0; i < Q; ++i)
    {
        scanf("%d %d", &L, &R);

        if (L > R)
        {
            w = L;
            L = R;
            R = w;
        }

        arr[L-1] += 1;
        arr[R] += 1;
    }

    int r = 'a' - 'A';
    int len = strlen(s);
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] % 2 == 1) flag = !flag;
        
        if (flag){ 
            if (s[i] < 'a'){
                s[i] = s[i] + r;
            } else{
                s[i] = s[i] - r;                
            }
        }
    }

    printf("%s", s);

    return 0;
}