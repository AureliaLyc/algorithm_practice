#include <cstdio>
#include <cstring>

const int maxd = 20; // 最大深度
int s[1<<maxd];
int main(int argc, char const *argv[])
{
    int D, I;
    while( scanf("%d%d", &D, &I) == 2 ){
        memset(s, 0, sizeof(s));
        int k, n = (1<<D)-1;
        for (int i = 0; i < I; ++i)
        {
            k = 1;
            for (;;)
            {
                s[k] = !s[k];
                k = s[k] ? 2*k : 2*k+1;
                if (k > n)
                {
                    break;
                }
            }
        }
        printf("%d\n", k/2);
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int D, I;
    while( scanf("%d%d", &D, &I) == 2 ){
        int k = 1;
        // depth starts from 0.
        for (int i = 1; i < D; ++i)
        {
            k = I % 2 ? 2*k : 2k+1;
            I = I+1/2;
        }
        printf("%d\n", k);
    }
    return 0;
}