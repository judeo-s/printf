#include <unistd.h>
#include <string.h>

void write_in_chunks(const char* str) {
    size_t len = strlen(str);
    size_t written = 0;

    while (written < len) {
        size_t to_write = len - written;
        if (to_write > 1024) {
            to_write = 1024;
        }

        ssize_t result = write(STDOUT_FILENO, str + written, to_write);
        if (result == -1) {
            // Handle the error.
            break;
        }

        written += result;
    }
}


int main(int argc, char *argv[]) {
	write_in_chunks("M");
    return 0;
}
