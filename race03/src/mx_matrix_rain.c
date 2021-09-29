#include "../inc/header.h"

int main(int argc, char *argv[]) 
{

    bool screensaver = false;
    if(argc == 2) { 
        if(mx_strlen(argv[1]) == 2 && (argv[1])[0] == '-' && (argv[1])[1] == 's'){
            screensaver = true;
        }

        else {
            mx_printerr("usage: ./matrix_rain [-s]\n");
            return 0;
        }
    }
    if(argc > 2){
        mx_printerr("usage: ./matrix_rain [-s]\n");
        return 0;
    }

    WINDOW * mainwin = initscr();
    curs_set(0);
    
    mx_intro();

    init_pair(2, COLOR_WHITE, COLOR_BLACK);
   
    
    int length_y = 0;
    int length_x = 0; 

    getmaxyx(stdscr, length_y, length_x);

    start_color();
	init_pair(1, COLOR_GREEN, COLOR_BLACK);
	init_pair(2, COLOR_WHITE, COLOR_BLACK);
	init_pair(3, COLOR_YELLOW, COLOR_BLACK);
	init_pair(4, COLOR_RED, COLOR_BLACK);
	init_pair(5, COLOR_CYAN, COLOR_BLACK);
	init_pair(6, COLOR_BLUE, COLOR_BLACK);
	init_pair(7, COLOR_MAGENTA, COLOR_BLACK);

    int start[length_x];
    int length[length_x];
    int tmp[length_x];

    for (int i = 0; i < length_x; i++){
        start[i] = (rand() % 70) * -1; // rain up
        tmp[i] = start[i];
        length[i] = rand() % 50 - 1;
    }
    
    
    int speed = 100;
    int color = 1;

    while (true){
        for (int i = 0; i < length_x; i++) {       
            wchar_t rand_symbol = (rand() % 93 + 33);
            if (i % 2 == 0) {
                rand_symbol = ' ';
            }
            mvwaddch(mainwin, tmp[i], i, rand_symbol | COLOR_PAIR(color));

            mvwaddch(mainwin, tmp[i] + 1, i, rand_symbol | COLOR_PAIR(2));      
            
            mvwaddch(mainwin, tmp[i] - length[i], i, ' ' | COLOR_PAIR(color));

            if (tmp[i] - length[i] > length_y) {
                tmp[i] = start[i];
            }
            tmp[i]++;
        }

        usleep(1000 * speed);
        nodelay(stdscr,TRUE);
        noecho();

        char exit_matrix= getch();
        if (exit_matrix == 'q') 
        {
            clear();
            break;
        }
        switch (exit_matrix ) 
        {
            case '+':
                if (speed > 1) {
                    if (speed <= 11)
                        speed--;
                    else
                        speed -= 10;
                }
                break;
            case '-':
                if (speed < 300) {
                    if (speed <= 10)
                            speed++;
                        else
                            speed += 10;
                }
                break;
            case '1':
				color = 1;
				break;
			case '2':
				color = 2;
				break;
			case '3':
				color = 3;
				break;
			case '4':
				color = 4;
				break;
			case '5':
				color = 5;
				break;
			case '6':
				color = 6;
				break;
			case '7':
				color = 7;
				break;
        }
        refresh();
    }

    endwin();  
    return 0;
}

