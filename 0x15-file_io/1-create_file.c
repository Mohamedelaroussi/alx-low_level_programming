#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int create_file(const char *filename, char *text_content) {
    if (filename == NULL) {
        return -1;  // Invalid filename
    }

    int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1) {
        return -1;  // File creation failed
    }

    if (text_content != NULL) {
        size_t content_len = strlen(text_content);
        ssize_t bytes_written = write(fd, text_content, content_len);
        if (bytes_written == -1) {
            close(fd);
            return -1;  // Writing content failed
        }
    }

    close(fd);
    return 1;  // Success
}

int main() {
    const char *filename = "example.txt";
    char *text_content = "Hello, world! This is some content.";

    int result = create_file(filename, text_content);
    if (result == 1) {
        printf("File created successfully.\n");
    } else {
        printf("File creation failed.\n");
    }

    return 0;
}
