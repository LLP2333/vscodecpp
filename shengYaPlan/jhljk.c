#include<stdio.h>
#include<stdlib.h>
#define MAX 100000000

char arr[MAX];

int main()
{
    int ans = 0;

    scanf("%s", arr);
    for (int i = 0; arr[i] != '\0'; i++)
        ans += arr[i] - '0';
    while (ans > 9) {
        int tmp = ans;
        ans = 0;
        while (tmp > 0) {
            ans += tmp % 10;
            tmp /= 10;
        }
    }
    printf("%d\n", ans);

    return 0;
}