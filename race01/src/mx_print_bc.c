#include "../inc/minilibmx.h"

void mx_print_bc(char *first_operand, char *operation, char *second_operand, char *result, int foperand_len, int soperand_len, int result_len) {

    if (*operation == '?') {
        mx_print_bc(first_operand, "+", second_operand, 
            result, foperand_len, soperand_len, result_len);
        mx_print_bc(first_operand, "-", second_operand, 
            result, foperand_len, soperand_len, result_len);
        mx_print_bc(first_operand, "*", second_operand, 
            result, foperand_len, soperand_len, result_len);
        mx_print_bc(first_operand, "/", second_operand, 
            result, foperand_len, soperand_len, result_len);
        return;
    }

    bool is_firstBelowZero = false;
    if (first_operand[0] == '-') {
        is_firstBelowZero = true;
        first_operand++;
        foperand_len--;
    } 

    bool is_secondBelowZero = false;
    if (second_operand[0] == '-') {
        is_secondBelowZero = true;
        second_operand++;
        soperand_len--;
    }

    bool is_thirdBelowZero = false;
    if (result[0] == '-') {
        is_thirdBelowZero = true;
        result++;
        result_len--;
    }

    long long first_num = mx_atoi(first_operand);
    long long second_num = mx_atoi(second_operand);
    long long third_num = mx_atoi(result);

    for (long long i = 0; i < mx_pow(10, foperand_len); i++){
        if (first_num > 0){
            i = first_num;
        }

        char *i_str = mx_itoa(i);
        int i_str_length = mx_strlen(i_str);
        bool is_firstCorrect = true;

        for (int i_i = 0; i_i < foperand_len - i_str_length; i_i++) {
            if (mx_isdigit(first_operand[i_i]) && first_operand[i_i] != '0') {
                is_firstCorrect = false;
                break;
            }
        }

        for (int i_i = foperand_len - i_str_length, i_str_i = 0; i_i < foperand_len; i_i++, i_str_i++) {
            if (first_operand[i_i] != '?' && first_operand[i_i] != i_str[i_str_i]) {
                is_firstCorrect = false;
                break;
            }
        }
        free(i_str);
        i_str = NULL;

        if (!is_firstCorrect) {
            continue;
        }

        for (long long j = 0; j < mx_pow(10, soperand_len); j++) {  
            if (second_num > 0) {
                j = second_num;
            }

            char *j_str = mx_itoa(j);
            int j_str_length = mx_strlen(j_str);
            bool is_secondCorrect = true;

            for (int j_i = 0; j_i < soperand_len - j_str_length; j_i++) {
                if (mx_isdigit(second_operand[j_i]) && second_operand[j_i] != '0') {
                    is_secondCorrect = false;
                    break;
                }
            }

            for (int j_i = soperand_len - j_str_length, j_str_i = 0; j_i < soperand_len; j_i++, j_str_i++) {
                if (second_operand[j_i] != '?' && second_operand[j_i] != j_str[j_str_i]){
                    is_secondCorrect = false;
                    break;
                }
            }

            free(j_str);
            j_str = NULL;

            if (!is_secondCorrect){
                continue;
            }
            
            for (long long k = 0; k < mx_pow(10, result_len); k++){
                if (third_num > 0){
                    k = third_num;
                }

                char *k_str = mx_itoa(k);
                int k_str_length = mx_strlen(k_str);
                bool is_thirdCorrect = true;

                for (int k_i = 0; k_i < result_len - k_str_length; k_i++) {
                    if (mx_isdigit(result[k_i]) && result[k_i] != '0') {
                        is_thirdCorrect = false;
                        break;
                    }
                }

                for (int k_i = result_len - k_str_length, k_str_i = 0; k_i < result_len; k_i++, k_str_i++) {
                    if (result[k_i] != '?' && result[k_i] != k_str[k_str_i]) {
                        is_thirdCorrect = false;
                        break;
                    }
                }

                free(k_str);
                k_str = NULL;

                if (!is_thirdCorrect) {
                    continue;
                }

                if (is_firstBelowZero) {
                    i *= -1;
                }
                else if (is_secondBelowZero) {
                    j *= -1;
                }
                else if (is_thirdBelowZero) {
                    k *= -1;
                }

                if (*operation == '+') {
                    if (mx_add(i ,j) == k) {
                        mx_printint(i);
                        mx_printstr(" + ");
                        mx_printint(j);
                        mx_printstr(" = ");
                        mx_printint(k);
                        mx_printchar('\n');
                    }
                }
                else if (*operation == '-') {
                    if (mx_sub(i, j) == k) {
                        mx_printint(i);
                        mx_printstr(" - ");
                        mx_printint(j);
                        mx_printstr(" = ");
                        mx_printint(k);
                        mx_printchar('\n');
                    }
                }
                else if (*operation == '*') {
                    if (mx_mul(i, j) == k) {
                        mx_printint(i);
                        mx_printstr(" * ");
                        mx_printint(j);
                        mx_printstr(" = ");
                        mx_printint(k);
                        mx_printchar('\n');
                    }
                }
                else if (*operation == '/') {
                    if (j != 0 && mx_div(i, j) == k) {
                        mx_printint(i);
                        mx_printstr(" / ");
                        mx_printint(j);
                        mx_printstr(" = ");
                        mx_printint(k);
                        mx_printchar('\n');
                    }
                }
                
                if (is_firstBelowZero) {
                    i *= -1;
                }
                else if (is_secondBelowZero) {
                    j *= -1;
                }
                else if (is_thirdBelowZero) {
                    k *= -1;
                }
                else if (third_num > 0) {
                    break;
                }
            }
            if (second_num > 0) {
                break;
            }
        }
        if (first_num > 0) {
            break;
        }
    }

    if (is_firstBelowZero) {
        first_operand--;
    }
    else if (is_secondBelowZero) {
        second_operand--;
    }
    else if (is_thirdBelowZero) {
        result--;
    }
}

