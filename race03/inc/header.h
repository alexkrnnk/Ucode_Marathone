#pragma once


#ifndef HEADER_H
#define HEADER_H

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <locale.h>

void mx_printerr(const char *s);
int mx_strlen(const char *s);
void mx_intro();

#endif

