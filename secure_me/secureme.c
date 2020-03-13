#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char sh[10]="date";

void change_str()
{
strcpy(sh,"/bin/sh");
}

void update()
{
system(sh);
}

int main()
{
char buffer[16];
update();
puts("Enter something");
gets(buffer);
printf(buffer);
return 0;
}
