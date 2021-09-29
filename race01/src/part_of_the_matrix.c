#include "../inc/minilibmx.h"

// bool mx_isdigit(int c); - Преобразует число типа чар в число инт
// bool mx_isspace(char c); - Проверка на  пробелы
// int mx_atoi(const char*); - Вывод чисел из строки
// void mx_printchar(char); - Принтует символ
// void mx_printint(int); - Принтует большое количество чилел например 12345 или -9543
// int mx_strncmp(const char*, const char*, int);
// unsigned long mx_strlen(const char*); - Выводит длину строки
// char *mx_strnew(const int); - Выделяет память
// char *mx_strcpy(char*, const char*); - Делает копию строки 
// char *mx_strtrim(const char*); - Выделяем память и перезаписывает
// char *mx_strndup(const char*, int);
// char *mx_strncpy(char*, const char*, int); - перазписывает из константы в обычный масив чаров


int main (int argc, char *argv[]) {
    if (argc != 5) {
        mx_printerr("usage: ./part_of_the_matrix [operand1] [operatoin] [operand2] [result]");
        exit(0);
    }
    
    enum e_error error;

    bool is_error;

    char *first_operand = mx_strtrim(argv[1]);
    char *operation = mx_strtrim(argv[2]);
    char *second_operand = mx_strtrim(argv[3]);
    char *result = mx_strtrim(argv[4]);
    int foperand_len = mx_strlen(first_operand);
    int operation_len = mx_strlen(operation);
    int soperand_len = mx_strlen(second_operand);
    int result_len = mx_strlen(result);
    int x = mx_atoi(argv[1]);
    int y = mx_atoi(argv[3]);

    if (foperand_len <= 0) 
    {
        is_error = true;
        error = INVALID_OPERAND_1;
    }
    else if (operation_len != 1) 
    {
        is_error = true;
        error = INVALID_OPERATION;
    }
    else if (soperand_len <= 0) 
    {
        is_error = true;
        error = INVALID_OPERAND_2;
    }
    else if (result_len <= 0) 
    {
        is_error = true;
        error = INVALID_RESULT;
    }

    for (int i = 0; i < foperand_len; i++) 
    {
        if (i == 0 && first_operand[i] == '-') 
        {
            continue;
        }
        else if (first_operand[i] != '?' && !mx_isdigit(first_operand[i])) 
        {
            is_error = true;
            error = INVALID_OPERAND_1;
        }
    }


    if (*operation != '?' && *operation != '+' && *operation != '-' && *operation != '*' && *operation != '/') 
    {
        is_error = true;
        error = INVALID_OPERATION;
    }

    for (int i = 0; i < soperand_len; i++) 
    {
        if (i == 0 && second_operand[i] == '-') 
        {
            continue;
        }
        else if (second_operand[i] != '?' && !mx_isdigit(second_operand[i])) 
        {
            is_error = true;
            error = INVALID_OPERAND_2;
        }
    }

    for (int i = 0; i < result_len; i++) 
    {
        if (i == 0 && result[i] == '-') 
        {
            continue;
        }
        else if(result[i] != '?' && !mx_isdigit(result[i])) 
        {
            is_error = true;
            error = INVALID_RESULT;
        }
    }

    //Output by checkboxes
    if (is_error)
        switch (error) {
            case INVALID_OPERAND_1:
                mx_printstr("Invalid operand_1: ");
                mx_printerr(argv[1]);
                mx_printchar('\n');
                exit(0);
            case INVALID_OPERAND_2:
                mx_printstr("Invalid operand_2: ");
                mx_printerr(argv[3]);
                mx_printchar('\n');
                exit(0);
            case INVALID_OPERATION:
                mx_printstr("Invalid operation: ");
                mx_printerr(argv[2]);
                mx_printchar('\n');
                exit(0);
            case DIV_BY_ZERO:
                mx_printstr("Invalid div: ");
                mx_printerr(argv[3]);
                mx_printchar('\n');
                exit(0);
               
            case INVALID_RESULT:
                mx_printstr("Invalid result: ");
                mx_printerr(argv[4]);
                mx_printchar('\n');
                exit(0);
               
        }


    mx_print_bc(first_operand, operation, second_operand, result, foperand_len, soperand_len, result_len);

    mx_strdel(&first_operand);
    mx_strdel(&operation);
    mx_strdel(&second_operand);
    mx_strdel(&result);





    
/////////////////////////////////////////////////////////////////////////////////////////////////////























//     int space_operation = 0;
//     enum e_operation operation;
//     enum e_error error;

//     bool is_operation;
//     bool is_error;
    
//     int x = mx_atoi(argv[1]);
//     int y = mx_atoi(argv[3]);
//     int z = mx_atoi(argv[4]);


//     // Check opration 
//     if(mx_strlen(mx_strtrim(argv[2])) != 1){
//         is_error = true;
//         error = INVALID_OPERATION;
//     }

//     if (mx_strncmp(mx_del_extra_whitespaces(argv[2]), "+", 1) == 0) {
//         operation = ADD;
//         is_operation = true;
        
//     }
//     else if (mx_strncmp(mx_del_extra_whitespaces(argv[2]), "-", 1) == 0) {
//         operation = SUB;
//         is_operation = true;
        
//     }
//     else if (mx_strncmp(mx_del_extra_whitespaces(argv[2]), "*", 1) == 0) {
//         operation = MUL;
//         is_operation = true;
        
//     }
//     else if (mx_strncmp(mx_del_extra_whitespaces(argv[2]), "/", 1) == 0) {
//         operation = DIV;
//         is_operation = true;
        
//     }
//     else {
//         is_error = true;
//         error = INVALID_OPERATION;
        
//     }
//     /////////////////////////////////////////////////////////////////////////////////////////////////////
    
//     // Check div on 0 
//     if (z == 0 && operation == DIV) {
//         is_error = true;
//         error = DIV_BY_ZERO;
//     }
//     /////////////////////////////////////////////////////////////////////////////////////////////////////

//     // Check operands


//     // for (int i = 0; i < mx_strlen(mx_del_extra_whitespaces(argv[1])); ++i){
//     //     for (int j = 0; argv[1][j] != '\0'; j++){
//     //         if (argv[1][j] != '?' || ){
//     //             error = INVALID_OPERAND_1;
//     //             is_error = true;
//     //         }
//     //     }
//     // }
//     /////////////////////////////////////////////////////////////////////////////////////////////////////
    
//     //Output by checkboxes
//     if (is_error)
//         switch (error) {
//             case INVALID_OPERAND_1:
//                 mx_printstr("Invalid operand_1: ");
//                 mx_printerr(argv[1]);
//                 mx_printchar('\n');
//                 exit(0);
//             case INVALID_OPERAND_2:
//                 mx_printstr("Invalid operand_2: ");
//                 mx_printerr(argv[3]);
//                 mx_printchar('\n');
//                 exit(0);
//             case INVALID_OPERATION:
//                 mx_printstr("Invalid operation: ");
//                 mx_printerr(argv[2]);
//                 mx_printchar('\n');
//                 exit(0);
//             case DIV_BY_ZERO:
//                 mx_printstr("Invalid div: ");
//                 mx_printerr(argv[3]);
//                 mx_printchar('\n');
//                 exit(0);
               
//             case INVALID_RESULT:
//                 mx_printstr("Invalid result: ");
//                 mx_printerr(argv[4]);
//                 mx_printchar('\n');
//                 exit(0);
               
//         }

//     if (is_operation){
//         switch (operation) {
//             case ADD:
//                 mx_printint(mx_add(x, y));
//                 break;
//             case SUB:
//                 mx_printint(mx_sub(x, y));
//                 break;
//             case MUL:
//                 mx_printint(mx_mul(x, y));
//                 break;
//             case DIV:
//                 mx_printint(mx_div(x, y));
//                 break;
//         }
//     }
// }
// /////////////////////////////////////////////////////////////////////////////////////////////////////
}
