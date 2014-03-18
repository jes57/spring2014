
#include <stdio.h>     /* for convenience */
#include <stdlib.h>    /* for convenience */

void err_sys1(const char* x) 
{ 
    perror(x); 
    exit(1); 
}

#define MAXLINE 4096

int 
main(int argc, char* argv[])
{
    int n, int1, int2;
    char line[MAXLINE];

    printf("%s\n", "shut it up you!"); 

/*
    while ((n = read(STDIN_FILENO, line, MAXLINE)) > 0) {
        line[n] = 0;    // null terminate 
        if (sscanf(line, "%d%d", &int1, &int2) == 2) {
            if(int1>int2)
		sprintf(line,"%d\n", int1);
	    else
		sprintf(line,"%d\n", int2);
            n=strlen(line);
            if (write(STDOUT_FILENO, line, n) != n)
                perror("write error");
        } else {
            if (write(STDOUT_FILENO, "invalid args\n", 13) != 13)
                perror("write error");
        }
    }*/
    exit(0);
}
