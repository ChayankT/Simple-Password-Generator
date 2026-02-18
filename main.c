#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower[] = "abcdefghijklmnopqrstuvwxyz";
    char digits[] = "0123456789";
    char special[] = "!@#$%";
    char all[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%";

    char password[100];
    int length;

    printf("Enter password length (min 4): ");
    scanf("%d", &length);

    if (length < 4) {
        printf("Length too short.\n");
        return 1;
    }

    srand(time(NULL));

    // Ensure required characters
    password[0] = upper[rand() % 26];
    password[1] = digits[rand() % 10];
    password[2] = special[rand() % 5];
    password[3] = lower[rand() % 26];

    // Fill remaining characters
    for (int i = 4; i < length; i++) {
        password[i] = all[rand() % 67];
    }

    password[length] = '\0';

    printf("Generated Password: %s\n", password);

    return 0;
}
