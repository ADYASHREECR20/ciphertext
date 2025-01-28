#include <stdio.h>

void decrypt(char *a, int k) {
    int i;
    for (i = 0; a[i] != '\0'; i++) {
        // Decrypt uppercase letters (0-25 for A-Z)
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] = (a[i] - 'A' - k + 26) % 26 + 'A';
        }
        // Decrypt lowercase letters (0-25 for a-z)
        else if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] = (a[i] - 'a' - k + 26) % 26 + 'a';
        }
    }
}

int main() {
    char a[100];
    int k;

    // Get the ciphertext (encrypted text) and shift value from user
    printf("Enter the ciphertext: ");
    scanf("%s", a);  // This reads a single word (encrypted message)

    printf("Enter the shift value: ");
    scanf("%d", &k);

    // Decrypt the text
    decrypt(a, k);

    // Output the decrypted text
    printf("Decrypted text: %s\n", a);

    return 0;
}
