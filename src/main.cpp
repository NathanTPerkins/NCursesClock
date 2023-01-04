#include <curses.h>
#include <clock.h>

int main(){
    initscr();
    while(1){
        char * c_time = getTime();
        clear();
        mvprintw(LINES/2, (COLS/2) - 4, "%s", c_time);
        move(0,0);
        free(c_time);

        refresh();
    }
	endwin();

    return 0;

}