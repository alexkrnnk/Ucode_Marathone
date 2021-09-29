#include "../inc/header.h"

void mx_intro(){
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    

    int top = 5;
    int left = 4;

    char f_output[] = "Wake up , Neo..";
    int f_count = mx_strlen(f_output);
    char s_output[] = "The Matrix has you..";
    int s_count = mx_strlen(s_output);
    char th_output[] = "Follow the white rabbit";
    int th_count = mx_strlen(th_output);
    char fth_output[] = "Knock, knock, Neo";
    int fth_count = mx_strlen(fth_output);
    refresh();

    for(int i = 0; i < f_count; i++){        
        mvaddch(top, i + left, f_output[i] | COLOR_PAIR(1));
        refresh();
        usleep(200000);
    }
    usleep(100000);
    clear();
    refresh();

    for(int i = 0; i < s_count; i++){
        mvaddch(top, i + left, s_output[i] | COLOR_PAIR(1));
        refresh();
        usleep(200000);
    }
    usleep(100000);
    clear();
    refresh();

    for(int i = 0; i < th_count; i++){      
        mvaddch(top, i + left, th_output[i] | COLOR_PAIR(1));
        refresh();
        usleep(200000);
    }
    usleep(100000);
    clear();
    refresh();
    
    for(int i = 0; i < fth_count; i++){      
        mvaddch(top, i + left, fth_output[i] | COLOR_PAIR(1));
        refresh();
        usleep(200000);
    }
    usleep(100000);
    clear();
}

