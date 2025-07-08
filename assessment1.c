#include <stdio.h>
#include <string.h>
#include <ctype.h>

//  Reverse the string
void reverseString(char str[]) {
    int len = strlen(str);
    printf(" Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

//  Concatenate with another string
void concatenateStrings(char str[]) {
    char str2[100];
    printf("Enter another string to concatenate: ");
    gets(str2);
    strcat(str, str2);
    printf(" Result after concatenation: %s\n", str);
}

//  Check if the string is a palindrome
void checkPalindrome(char str[]) {
    int len = strlen(str), flag = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf(" The string is a Palindrome.\n");
    else
        printf(" The string is NOT a Palindrome.\n");
}

//  Copy the string
void copyString(char str[]) {
    char copy[100];
    strcpy(copy, str);
    printf(" Copied string: %s\n", copy);
}

//  Get the length of the string
void stringLength(char str[]) {
    printf(" Length of the string: %lu\n", strlen(str));
}

//  Find frequency of a character
void charFrequency(char str[]) {
    char ch;
    int count = 0;
    printf("Enter the character to find frequency: ");
    scanf("%c", &ch);
    getchar(); // Clear buffer

    for (int i = 0; str[i]; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf(" Frequency of '%c' = %d\n", ch, count);
}

// Count vowels and consonants
void countVowelsConsonants(char str[]) {
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i]; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }
    printf(" Vowels = %d, Consonants = %d\n", vowels, consonants);
}

//  Count spaces and digits
void countSpacesDigits(char str[]) {
    int spaces = 0, digits = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ')
            spaces++;
        if (isdigit(str[i]))
            digits++;
    }
    printf(" Spaces = %d, Digits = %d\n", spaces, digits);
}

//  Main function
int main() {
    char str[100];
    int choice;
    int cont;

    printf("Enter a string: ");
    gets(str);

    do {
        // Menu display
        printf("\n========  String Operations Menu ========\n");
        printf("1. Reverse the string\n");
        printf("2. Concatenate with another string\n");
        printf("3. Check for Palindrome\n");
        printf("4. Copy the string\n");
        printf("5. Find length of the string\n");
        printf("6. Frequency of a character\n");
        printf("7. Count vowels and consonants\n");
        printf("8. Count spaces and digits\n");
        printf("===========================================\n");

        printf("Enter your choice (1-8): ");
        scanf("%d", &choice);
        getchar(); // Clear buffer

        switch (choice) {
            case 1: reverseString(str); 
            break;
            case 2: concatenateStrings(str);
            break;
            case 3: checkPalindrome(str); 
            break;
            case 4: copyString(str); 
            break;
            case 5: stringLength(str); 
            break;
            case 6: charFrequency(str); 
            break;
            case 7: countVowelsConsonants(str); 
            break;
            case 8: countSpacesDigits(str); 
            break;

            default:
                printf(" Invalid choice. Please select between 1 and 8.\n");
        }

        printf("\nDo you want to continue? Press 1 to continue,0 to exit:: ");
        scanf("%d", &cont);
        getchar(); // Clear buffer

    } while (cont == 1);

    printf("\nThank you for using the String Operations Program! \n");
    return 0;
}
