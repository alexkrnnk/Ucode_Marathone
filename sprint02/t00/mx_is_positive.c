void mx_is_positive(int i);

void mx_is_positive(int i)
{
    if(i > 0)
    {
        mx_printstr("Positive");
    }
    else if(i < 0)
    {
        mx_printstr("Negative");
    }
    else if(i == 0)
    {
        mx_printstr("zero");
    }
}
