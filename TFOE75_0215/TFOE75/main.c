#include <stdio.h>
int main() {
        int i;
        FILE * fptr;
        char fn[50];
        char str[] = "Duranyik Bence, Mernokinformatikus, TFOE75\n";
        fptr = fopen("Duranyik.txt", "w");
        for (i = 0; str[i] != '\n'; i++) {
            fputc(str[i], fptr);
        }
        FILE * file_pointer;
        char buffer[30], c;

        file_pointer = fopen("fprintf_.txt", "r");
        while ((c = getc(file_pointer)) != EOF) printf("%c", c);
        printf("valami");
        fclose(file_pointer);
        return 0;
    }
