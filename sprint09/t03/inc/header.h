#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

bool mx_isdigit(int);

bool mx_isspace(char);

int mx_atoi(const char*);

void mx_printchar(char);

void mx_printint(int n);

void mx_printstr(const char *s);

int mx_strcmp(const char *s1, const char *s2);

char *mx_strcpy(char *dst, const char *src);

int mx_strlen(const char *s);

#endif
