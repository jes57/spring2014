
#include <stdio.h>     /* for convenience */
#include <stdlib.h>    /* for convenience */
#include <string.h>    /* for convenience */
#include <unistd.h>    /* for convenience */

#define MAXLINE 4096

int 
main(void)
{
    int n, int1, int2;
    char line[MAXLINE];

    // while ((n=read(STDIN_FILENO, line, MAXLINE)) > 0){
    //     if(sscanf(line, "%d%d", &int1, &int2)){
    //         sprintf(line, "%d, %d", int1, int2);
    //     }
    // }


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
    }
    exit(0);
}
