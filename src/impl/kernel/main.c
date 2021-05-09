#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
    print_str("plOS\n\n");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("1) PL-CLI\n");
    print_str("2) Video Settings\n");
    print_str("3) Shutdown Options\n");
}

void videoSettings() 
{
    print_clear();
    print_str("==============[ Video Settings ]==============\n\n");
}

void ShutdownOptions()
{
    print_clear();
    print_str("==============[ Shutdown Options ]==============\n\n");
}

void plcli()
{
    print_clear();
    print_str("==============[ PL-CLI ]==============\n\n");
    const cli = "dwadw";
    if (cli == "clear" || cli == "cls")
    {
        print_clear();
    }
    else 
    {
        print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
        print_str("Unknow command, type \"help\"");
    }
}