// code to count the occurrences of integers in an array and print the frequency of each number

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int count[7] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        count[arr[i]]++;
    };

    for (int i = 0; i < n; i++)
    {

        printf("%d - %d\n", i, count[i]);
    }
    // printf("1- %d\n", count[1]);
    // printf("2- %d\n", count[2]);

    return 0;
}