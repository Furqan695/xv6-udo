
#include "types.h"
#include "defs.h"
#include "param.h"
#include "stat.h"
#include "mmu.h"
#include "proc.h"
#include "spinlock.h"
#include "sleeplock.h"
#include "fs.h"
#include "buf.h"
#include "file.h"
int current_console = 0;

void switch_console(int new_console) {
    current_console = new_console;
}

void print_process_info(int console_num, char* process_name) {
   return;
}

int main() {

    print_process_info(current_console, "init");
	screen();


    char input;
    while(1) {
        input =  'c';
        if(input == 'c') {
            int new_console = current_console + 1;
            switch_console(new_console);
            print_process_info(new_console, "new process");
        } else if(input == 's') {
            int new_console;
               new_console =1;
            switch_console(new_console);
        } else if(input == 'q') {
            break;
        } else {
           
        }
    }
    return 0;
}

