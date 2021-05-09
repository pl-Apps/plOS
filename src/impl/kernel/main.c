#include "print.h"
#include "Drivers/keyboard.h"

char* cli = NULL;
const int true = 1 == 1;
const int false = 2 == 1;

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
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("==============[ PL-CLI ]==============\n\n");
    keyboard_get_key();
    /*
    while(true)
    {
        print_str("/root/@plOS>");
        
        if (cli == "clear" || cli == "cls")
        {
            print_clear();
        }
        else if (cli == NULL)
        {
            continue;
        }
        else 
        {
            print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
            print_str("\n[!]");
            print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
            print_str(" Unknow command \" ");
            print_str(cli);
            print_str("\"\n");
        }
    }
    */
}