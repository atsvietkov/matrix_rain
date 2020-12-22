#include "matrix_rain.h"

int main() {
    initscr();
    curs_set(0);

    start_color();
    init_pair(1, COLOR_WHITE, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);

    clear();
    refresh();

    for (int i = 1 ; i < 30; i++) {
        
        attron(COLOR_PAIR(1));
        mvaddch(i, 9, 'X');
        attroff(COLOR_PAIR(1));

        attron(COLOR_PAIR(2));
        mvaddch(i-1, 9, 'X');
        attroff(COLOR_PAIR(2));

        usleep(100000);
        refresh();
    }
    getch();
    endwin();
}
