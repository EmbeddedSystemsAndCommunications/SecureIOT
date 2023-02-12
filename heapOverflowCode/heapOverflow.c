
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

#define BUFFERSIZE 64

struct data {
    char name[BUFFERSIZE];
};

struct fp {
    void (*fp)();
};

void winner() {
    printf("level passed");
}

void nowinner() {
    printf("level has not been passed");
}

int main(int argc, char **argv) {
    struct data *d;
    struct fp *f;
    d = malloc(sizeof(struct data));
    f = malloc(sizeof(struct fp));
    f->fp = nowinner;
    printf("data is at %p, fp is at %p\n", d, f);
    strcpy(d->name, argv[1]);
    f->fp();
}
