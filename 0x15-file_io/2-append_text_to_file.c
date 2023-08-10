#include <stdio.h>
#include <stdlib.h>

int append_text_to_file(const char *filename, char *text_content) {
    if (filename == NULL) {
        return -1;
    }

    if (text_content == NULL) {
        return 1; // Nothing to add, return 1 (success)
    }

    // Open the file in append mode
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        return -1; // Failed to open the file
    }

    // Write the text_content to the file
    int result = fputs(text_content, file);

    // Close the file
    fclose(file);

    if (result == EOF) {
        return -1; // Failed to write to the file
    }

    return 1; // Success
}

int main() {
    const char *filename = "example.txt";
    char *text_content = "This text will be appended to the file.";

    int result = append_text_to_file(filename, text_content);
    if (result == 1) {
        printf("Text appended successfully.\n");
    } else {
        printf("Failed to append text.\n");
    }

    return 0;
}
