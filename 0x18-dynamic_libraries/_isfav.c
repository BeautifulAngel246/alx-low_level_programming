#include <unistd.h>

void custom_print(char *str) {
    // Custom print function using write
    write(1, str, strlen(str));
}

int custom_strlen(char *str) {
    // Custom string length function
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

void custom_puts(char *str) {
    // Custom puts function using custom_print
    custom_print(str);
    custom_print("\n");
}

int custom_strcmp(char *str1, char *str2) {
    // Custom string comparison function
    while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

void custom_reverse(char *str) {
    // Custom string reverse function
    int len = custom_strlen(str);
    int start = 0;
    int end = len - 1;

    while (start < end) {
        // Swap characters at start and end
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the center
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, World!";
    
    custom_print("Original String: ");
    custom_print(str);
    custom_print("\n");

    custom_puts("Custom Puts: Hello, World!");

    custom_print("String Length: ");
    char len_str[10];
    sprintf(len_str, "%d", custom_strlen(str));
    custom_print(len_str);
    custom_print("\n");

    char str2[] = "Hello, World!";
    custom_reverse(str2);
    custom_print("Reversed String: ");
    custom_print(str2);
    custom_print("\n");

    int cmp_result = custom_strcmp("Hello", "World");
    custom_print("String Comparison Result: ");
    char cmp_str[10];
    sprintf(cmp_str, "%d", cmp_result);
    custom_print(cmp_str);
    custom_print("\n");

    return 0;
}


