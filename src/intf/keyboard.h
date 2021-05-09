/** @author Levente Kurusa <levex@linux.com> **/
#ifndef __KEYBOARD_H_
#define __KEYBOARD_H_

#include <stdint.h>

void keyboard_init();
uint8_t keyboard_enabled();
char keyboard_get_key();
uint8_t keyboard_to_ascii(uint8_t key);

#endif
