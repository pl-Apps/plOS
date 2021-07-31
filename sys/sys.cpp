#include "lib.h"

int main(void) {
    main:
    clear();
    print("\tplOS\n", "31");
    print("[1] Install plOS", "0");
    print("[2] Boot options", "0");
    string line;
    getline(cin, line);
    if(line == "1") {
        install:
        clear();
        print("\tInstall plOS\n", "31");
        print("[1] Configure Users", "0");
        print("[2] Configure Network", "0");
        getline(cin, line);
        if(line == "1") {
            power::off();
        }
        else if(line == "2") {
            power::autoboot();
        }
        else
        {
            goto bootopts;
        }
    }
    else if(line == "2") {
        bootopts:
        clear();
        print("\tBoot options\n", "31");
        print("[1] Shutdown" ,"0");
        print("[2] Reboot", "0");
        getline(cin, line);
        if(line == "1") {
            power::off();
        }
        else if(line == "2") {
            power::autoboot();
        }
        else
        {
            goto bootopts;
        }
    }
    goto main;
    return 0;
}