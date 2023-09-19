#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int print(const char *format, ...)
{
    va_list args;
    int done;

    va_start (args, format);
    done = vfprintf (stdout, format, args);
    va_end (args);
    
    return done;
}

int main()
{
    print("Testing CBT\n");
    printf("Duhhh, \"hello\"\n");
}