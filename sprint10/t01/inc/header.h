#pragma once

#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>

int mx_check_filepath(char*);

void mx_print_from_file(int, int);

void mx_printerr(const char*);

int mx_strlen(const char*);

#endif

