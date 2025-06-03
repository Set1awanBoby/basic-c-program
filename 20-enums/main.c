#include <stdio.h>

typedef enum
{
    SUCCESS,
    FAILURE,
    PENDING
} Status;

void connectStatus(Status status);

int main()
{
    // enum = A user-defined data type that consist
    //      of a set of named integer constants.
    //      Benefit: Replaces numbers with readable names

    Status status = PENDING;

    connectStatus(status);

    return 0;
}

void connectStatus(Status status)
{

    switch (status)
    {
    case SUCCESS:
        printf("Successfully Connected\n");
        break;
    case FAILURE:
        printf("Failed Connected\n");
    case PENDING:
        printf("Connecting...\n");
    default:
        break;
    }
}