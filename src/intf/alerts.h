#include "print.h"

void error(char* error_str) {
    print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
    print_str("\n[!]");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str(error_str);
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
}

void warining(char* warn_str) 
{
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("\n[#]");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str(warn_str);
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
}


void loading(char* loading_str) 
{
    print_set_color(PRINT_COLOR_LIGHT_BLUE, PRINT_COLOR_BLACK);
    print_str("\n[*]");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str(loading_str);
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
}


void success(char* success_str)
{
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
    print_str("\n[+]");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str(success_str);
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
}
