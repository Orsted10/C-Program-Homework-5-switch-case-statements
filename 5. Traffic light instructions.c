#include <stdio.h>

int main() {
    char color;
    printf("Enter traffic light color (R/Y/G): ");
    scanf(" %c", &color);
    
    switch (color) {
        case 'R':
        case 'r':
            printf("Stop\n");
            break;
        case 'Y':
        case 'y':
            printf("Wait\n");
            break;
        case 'G':
        case 'g':
            printf("Go\n");
            break;
        default:
            printf("Invalid color\n");
    }
    
    return 0;
}
