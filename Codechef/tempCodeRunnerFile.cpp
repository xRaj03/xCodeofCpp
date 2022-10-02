#include <stdio.h>

int main(void)
{
    int n, c, flag, max = 0, z = 0, k = 0;
    scanf("%d", &n);

    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        z += a[i];
        k += b[i];
        c = z - k;
        if (c > 0)
        {

            if (max < c)
            {
                max = c;
                flag = 1;
            }
        }
        else
        {
            c = -c;
            if (max < c)
            {
                max = c;
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("%d %d", 1, max);
    }
    else
    {
        printf("%d %d", 2, max);
    }
    return 0;
}
