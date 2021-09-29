#pragma once

#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <errno.h>

int mx_check_filepath(char*);

bool mx_isspace(char);

void mx_printchar(char);

void mx_printerr(const char*);

void mx_printint(int);

void mx_printstr(const char*);

int mx_strlen(const char*);

#endif

