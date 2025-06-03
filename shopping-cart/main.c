#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void convertRp(long integerNum, char *output)
{
    char temp[30];
    sprintf(temp, "%ld", integerNum);

    int len = strlen(temp);
    int commaCount = (len - 1) / 3;

    int i = len - 1;
    int j = len + commaCount;
    output[j--] = '\0';

    int digitCount = 0;
    while (i >= 0)
    {
        output[j--] = temp[i--];
        digitCount++;
        if (digitCount % 3 == 0 && i >= 0)
        {
            output[j--] = '.';
        }
    }
};

int main()
{
    // Shopping cart program

    char item[50] = "";
    char formatted[30];
    long price = 0;
    int quantity = 0;
    long total = 0;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each?:");
    scanf("%ld", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;
    convertRp(total, formatted);

    printf("You have bought %d %s\n", quantity, item);
    printf("The total is: Rp%s,00\n", formatted);

    return 0;
}