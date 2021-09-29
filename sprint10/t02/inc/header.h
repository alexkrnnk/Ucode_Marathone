#pragma once

#ifndef CALC_H
#define CALC_H

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>

int mx_check_filepath(char*);

void mx_print_from_file(int);

void mx_printerr(const char*);

int mx_strlen(const char*);

#endif

