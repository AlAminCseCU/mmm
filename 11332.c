#include <stdio.h>

int main ()
{
    long N, Sum;

    while (scanf ("%ld", &N)) {

        if (N==0)
            break;
again:
        Sum = 0;
        while (N) {
            Sum += (N % 10);
            N/=10;
        }

        if (Sum/10==0)
            printf("%ld\n", Sum);
        else {
            N = Sum;
            goto again;
        }
    }

    return 0;
}

