// Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    int day, month, year;
    char date[20];

    // Read date as string
    scanf("%s", date);

    // Extract day, month, year
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Array of month names
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    // Print in new format
    printf("%02d-%s-%d", day, months[month - 1], year);

    return 0;
}
