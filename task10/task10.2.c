#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* trim(char* str, size_t len_s) {
    size_t i = 0;
    while (str[i] == 32) {
        i++;
    }
    size_t j = len_s;
    while (str[j-1] == 32) {
        j--;
    }
    char* new_str = (char*) malloc((j-1) * sizeof(char));
    for (size_t q = 0; q < (j-i); q++) {
        new_str[q] = str[i+q];
    }
    new_str[j-i] = 0;
    return new_str;
}

int main() {
    char* str = "   ahgldscjkgh as;dojha;sojdg      ";
    size_t len_s = strlen(str);
    char* new_str = trim(str, len_s);
    printf("%s ", new_str);
    free(new_str);
}