#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Revstr(char *t);

int main()  {
    FILE *fp;
    char text[25];
    fp = fopen("D:\\Github\\C-Programs-Slot-B\\Day 5\\ReverseStringFile\\sample.txt", "a+");
    fscanf(fp, "%s", &text);
    Revstr(text);
    fprintf(fp, "\t%s");
    printf("succesful");
}

void Revstr(char *t) {
    int i, len, temp;
    len = strlen(t);
    for(i=0; i < len/2; i++)    {
        temp = t[i];
        t[i] = t[len-i-1];
        t[len-i-1] = temp;
    }
}
