#include <stdio.h>
#include <stdarg.h>

int my_print_int(int val) {
    int count = 0;
    char buffer[12]; 
    int length = sprintf(buffer, "%d", val); 
    
    for (int i = 0; i < length; i++) {
        putchar(buffer[i]); 
        count++;
    }

    return count;
}


int my_printf(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);

    while (*fmt) {
        putchar(*fmt);
        fmt++;
    }

    int count = va_arg(args, int);
    int printed_chars = 0;

    for (int i = 0; i < count; i++) {
        putchar(' ');
        int val = va_arg(args, int);
        printed_chars += my_print_int(val);
    }

    putchar('\n');
    va_end(args);

    return printed_chars;
}

int main() {
    int param1 = 0x1111, param2 = 0x2222, param3 = 0x3333, param4 = 0x4444;
    int cnt;

    my_printf("Suhas H M - 1RVU22CSE168");

    cnt = 1;
    my_printf("Passing one param", cnt, param1);

    cnt = 2;
    my_printf("Passing two params", cnt, param1, param2);

    cnt = 3;
    my_printf("Passing three params", cnt, param1, param2, param3);

    cnt = 4;
    my_printf("Passing four params", cnt, param1, param2, param3, param4);
    return 0;
}
