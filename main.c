#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

#define TRY if (!setjmp(env))
#define CATCH else 

jmp_buf env;

int main (int argc, char** argv){
    int x;
    TRY{
        printf("usao u try");
        
        //throw exception
        longjmp(env,1);

    }
    CATCH{
        printf("catch");
    }
}