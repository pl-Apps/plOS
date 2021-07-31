#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <unistd.h>
#include <dirent.h>
#include <fstream>
#include <sys/stat.h>
#include <sys/reboot.h>
#include <time.h>
#include <iwlib.h>

using namespace std;

void clear() {
    cout << "\033[2J\033[1;1H";
}

void print_error(string message) {
    cout << "Error: \x1b[31m" + message + "\x1b[0m" << endl;
}

void print_success(string message) {
    cout << "Success: \x1b[32m" + message + "\x1b[0m" << endl;
}

void print(string value, string color) {
    cout << "\x1b[" + (color) + "m" + value + "\x1b[0m" << endl;
}

namespace fs {
    bool isPath(const string s)
    {
        struct stat buffer;
        return (stat(s.c_str(), &buffer) == 0);
    }

    bool isDir(const string dirName) {
        struct stat buffer;
        return (stat(dirName.c_str(), &buffer) == 0 && S_ISDIR(buffer.st_mode));
    }

}

namespace power {
    void off() {
        reboot(RB_POWER_OFF);
    }
    void autoboot() {
        reboot(RB_AUTOBOOT);
    }
}

namespace net {
    void test() {
        wireless_scan_head head;
        char* net = "wlan0";
        wireless_scan *result;
        iwrange range;
        int sock;
        sock = iw_sockets_open();
        if (iw_get_range_info(sock, net, &range) < 0) {
            printf("Error during iw_get_range_info. Aborting.\n");
        }
        if (iw_scan(sock, net, range.we_version_compiled, &head) < 0) {
            printf("Error during iw_scan. Aborting.\n");
        }
        result = head.result;
        while (NULL != result) {
            printf("%s\n", result->b.essid);
            result = result->next;
        }
    }
}