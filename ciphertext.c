#include <stdio.h>

void encrypt(char *a, int k) {
    int i;
    for(i = 0; a[i] != '\0'; i++) {
        // Encrypt uppercase letters
        if(a[i] >= 'A' && a[i] <= 'Z') {
            a[i] = (a[i] - 'A' + k) % 26 + 'A';
        }
        // Encrypt lowercase letters
        else if(a[i] >= 'a' && a[i] <= 'z') {
            a[i] = (a[i] - 'a' + k) % 26 + 'a';
        }
    }
    }
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

    // Simple input using scanf
    printf("Enter the plaintext: ");
    scanf("%s", a);  // This reads a single word
    
    printf("Enter the shift value: ");
    scanf("%d", &k);
    
    // Encrypt the text
    encrypt(a, k);
    printf("Encrypted text: %s\n", a);

    decrypt(a, k);
    printf("Decrypted text: %s\n", a);

    
    return 0;
}

