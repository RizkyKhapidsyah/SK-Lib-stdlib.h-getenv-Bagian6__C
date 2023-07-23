#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    const char* name = "PATH";
    const char* env_p = getenv(name);

    if (env_p) {
        printf("%s = %s\n", name, env_p);
    }
        
    _getch();
    return 0;
}