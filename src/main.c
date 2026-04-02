#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]) {
    char* op;
    double r = 0;

    if (argc < 3) {
        printf("Erreur de parametres");
        return 0;
    }

    op = argv[1];

    if (strcmp(op, "car") == 0) {
        if (argc != 3) {
            printf("Erreur de parametres");
            return 0;
        }

        r = _car(atof(argv[2]));
        printf("%lf", r);
    }
    else {
        if (argc != 4) {
            printf("Erreur de parametres");
            return 0;
        }

        if (strcmp(op, "add") == 0) {
            r = _add(atof(argv[2]), atof(argv[3]));
            printf("%lf", r);
        }
        else if (strcmp(op, "sub") == 0) {
            r = _sub(atof(argv[2]), atof(argv[3]));
            printf("%lf", r);
        }
        else if (strcmp(op, "mul") == 0) {
            r = _mul(atof(argv[2]), atof(argv[3]));
            printf("%lf", r);
        }
        else if (strcmp(op, "div") == 0) {
            r = _div(atof(argv[2]), atof(argv[3]));
            printf("%lf", r);
        }
        else {
            printf("Erreur de parametres");
        }
    }

    return 0;
}
