#pragma once

#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

int mx_add(int x, int y);
int mx_mul(int x, int y);
int mx_div(int x, int y);
int mx_sub(int x, int y);


enum e_error{
    INVALID_OPERAND_1,
    INVALID_OPERAND_2,
    INVALID_OPERATION,
    INVALID_RESULT,
    DIV_BY_ZERO
};

char *mx_itoa(long long number);
int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char);
void mx_printint(int n);
void mx_printstr(const char *s);
char *mx_strcat(char *s1, const char *s2);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
int mx_strncmp(const char *s1, const char *s2, int n);
void mx_printerr(const char *s);
char *mx_strtrim(const char *str);
char *mx_strncpy(char *dst, const char *src, int len);
void mx_strdel(char **str);
char *mx_del_extra_whitespaces(const char *str);
int mx_pow(int num, int pow);
void mx_print_bc(char *first_operand, char *operation, char *second_operand, char *result, int foperand_len, int soperand_len, int result_len);

#endif

