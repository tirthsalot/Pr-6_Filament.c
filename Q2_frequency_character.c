#include <stdio.h>

int main() {
    char str[100];
    int i, j, length = 0;
    int visited[100] = {0};

    printf("Enter any string :\n ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    printf("\nFrequency of each letter:\n");

    for (i = 0; i < length; i++) {
        if (visited[i] == 1)
            continue;

        int count = 1;

        for (j = i + 1; j < length; j++) {
            if (str[i] == str[j]) {
                count++;
                visited[j] = 1;  
            }
        }

        printf("%c => %d\n", str[i], count);
    }

    return 0;
}