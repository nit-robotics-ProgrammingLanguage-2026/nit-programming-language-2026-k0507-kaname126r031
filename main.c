#include <stdio.h>

int main(void)
{
    int score;
    scanf("%d", &score);
    if (score > 100)
        printf("NG");
    else if (score >= 90)
        printf("AA");
    else if (score >= 80)
        printf("A");
    else if (score >= 70)
        printf("B");
    else if (score >= 60)
        printf("C");
    else if (score >= 1)
        printf("D");
    else if (score == 0)
        printf("/");
    else
        printf("NG");
    return 0;
}
