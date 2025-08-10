#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

#define BUFSIZE 512

void ping_pong(int fd) 
{
    // ------------------------- Write your code here -------------------------
    char buffer[BUFSIZE];
    char word[100];
    int wCounter = 0;
    int ans = 0;
    int n;
    int inword = 0;

    while((n = read(fd, buffer, sizeof(buffer))) > 0){
        for(int i=0; i<n; i++){
            if(strchr(" .\r\t\n\v", buffer[i])) {
                inword = 0;
                word[wCounter] = '\0';
                if(strcmp(word, "ping") == 0) ans++;
                wCounter = 0;
            }
            else if(!inword){
                word[wCounter++] = buffer[i];
                inword = 1;
            }

            else word[wCounter++] = buffer[i];
        }
    }

    for(int i=0; i<ans; i++) printf(1,"pong\n");
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf(1, "Usage: %s <input_file>\n", argv[0]);
        exit();
    }

    int fd = open(argv[1], O_RDONLY);
    
    if (fd < 0) {
        printf(1, "Error opening file %s\n", argv[1]);
        exit();
    }

    ping_pong(fd);
    close(fd);

    exit();
}
