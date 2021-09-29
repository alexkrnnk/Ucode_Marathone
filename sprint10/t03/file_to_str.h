#pragma once

#ifndef CALC_H
#define CALC_H

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>

char *mx_file_to_str(const char*);

char *mx_strcat(char*, const char*);

char *mx_strcpy(char*, const char*);

char *mx_strdup(const char*);

char *mx_strjoin(char const*, char const*);

int mx_strlen(const char*);

char *mx_strnew(const int);

#endif

