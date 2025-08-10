#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])

{

    if (argc < 2)

    {

        printf(1, "Usage: %s <program> [arguments...]\n", argv[0]);

        exit();

    }

    //  --------------------------- Write your code here ---------------------------

    int pid = fork();

    if(pid<0) {
        printf(1,"Error while creating child process.\n");
        exit();
    }

    if(pid == 0) {
        char *args[argc];
        for(int i=1; i < argc; i++) args[i - 1] = argv[i];
        args[argc-1] = 0;
        exec(argv[1], args);
    }

    else wait();
    exit();
}