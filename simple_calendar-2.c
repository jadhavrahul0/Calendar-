
#include <stdio.h>

// Function to check leap year
int isLeapYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

// Function to get number of days in a month
int getDays(int month, int year) {
    switch(month) {
        case 1: return 31;
        case 2: return (isLeapYear(year)) ? 29 : 28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
        default: return 0;
    }
}

int main() {
    int month, year, days, i;

    printf("Enter Month (1-12): ");
    scanf("%d", &month);

    printf("Enter Year: ");
    scanf("%d", &year);

    days = getDays(month, year);

    if (days == 0) {
        printf("Invalid Month!\n");
        return 0;
    }

    printf("\nCalendar for %d/%d\n", month, year);
    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    // Assuming month starts on Sunday (simple version)
    for (i = 1; i <= days; i++) {
        printf("%3d ", i);
        if (i % 7 == 0)
            printf("\n");
    }

    return 0;
}
