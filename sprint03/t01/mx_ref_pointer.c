void mx_ref_pointer(int i, int ******ptr);

void mx_ref_pointer(int i, int ******ptr)
{
    int *chptr1;
    int **chptr2;
    int ***chptr3; 
    int ****chptr4; 
    int *****chptr5; 
    chptr1 = &i;
    chptr2 = &chptr1;
    chptr3 = &chptr2;
    chptr4 = &chptr3;
    chptr5 = &chptr4;
    ptr = &chptr5;
    printf("%d", ******ptr);
}

