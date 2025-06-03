#include <stdio.h>

typedef char String[50];

int main()
{
    /*
    typedef = reserved keyword that gives an existing datatype a "nickname"
        Helps simplify complex types and improves code readabilitiy

        typedef existing_type new_name;
    */

    String name = "Boby Setiawan";
    printf("%s", name);

    return 0;
}