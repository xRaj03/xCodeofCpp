#include <stdio.h>

int main(void)
{
    int i, T, j;

    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        char S[1000];
        int count = 0;
        scanf("%s", S);
        for (j = 0; j < strlen(S); j++)
        {
            if (S[j] == 'a' || S[j] == 'i' || S[j] == 'o' || S[j] == 'e' || S[j] == 'u')
            {
                count++;
                if (count > 2)
                {
                    printf("HAPPY\n");
                    break;
                }
            }
            else
                count = 0;
        }
        if (count < 2)
        {
            printf("SAD\n");
        }
    }
    return 0;
}