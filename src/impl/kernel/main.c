#include "print.h"
#include "alerts.h"
#include "string.h"
#include "memory.h"
#include "display.h"
#include "x86/gdt.h"
#include "x86/idt.h"
#include "pit.h"
#include "pic.h"
#include "hal.h"
#include "tasking.h"
#include "levos.h"
#include "keyboard.h"
#include "device.h"
#include "rtc.h"
#include "x86/v86.h"
#include "floppy.h"
#include "ext2.h"
#include "proc.h"
#include "ata.h" 
#include "vfs.h"
#include "proc.h"
#include "loader.h"
#include "module.h"
#include "elf.h"
#include "pci.h"

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
    print_str("1) none\n2) none\n3) none\n");
}

void ShutdownOptions()
{
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("==============[ Shutdown Options ]==============\n\n");
    print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
    print_str("[1] Shutdown\n"); //color: red
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("[2] Reboot\n"); //color: yellow
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
    print_str("[3] Back\n"); //color: green
}

void plcli()
{
    print_clear();
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
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