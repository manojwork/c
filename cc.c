#include <stdio.h>

int main() {
    int number1, number2, number3;
    scanf("%d %d %d", &number1, &number2, &number3);
    
    int trackedAndIgnored = 0;
    int untrackedAndUnignored = 0;
    
    if ((number1 % 10 == 0) && (number1 % 100 == 0)) {
        trackedAndIgnored++;
    }
    if ((number2 % 10 == 0) && (number2 % 100 == 0)) {
        trackedAndIgnored++;
    }
    if ((number3 % 10 == 0) && (number3 % 100 == 0)) {
        trackedAndIgnored++;
    }
    
    if ((number1 % 10 != 0) && (number1 % 100 != 0)) {
        untrackedAndUnignored++;
    }
    if ((number2 % 10 != 0) && (number2 % 100 != 0)) {
        untrackedAndUnignored++;
    }
    if ((number3 % 10 != 0) && (number3 % 100 != 0)) {
        untrackedAndUnignored++;
    }
    
    printf("%d %d", trackedAndIgnored, untrackedAndUnignored);
    
    return 0;
}