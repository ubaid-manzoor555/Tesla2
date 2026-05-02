#include <stdio.h>

int main() {
    int current_speed, choice, battery, target_speed;

    printf("Enter starting battery  ");
    scanf("%d", &battery);
    printf("Enter target speed ");
    scanf("%d", &target_speed);
    printf("Choose mode: 1 for Eco, 2 for Sport ");
    scanf("%d", &choice);

    int acceleration;
    switch (choice) {
        case 1:
            acceleration = 2;
            printf("Mode: Eco Activated\n");
            break;
        case 2:
            acceleration = 10;
            printf("Mode: Sport Activated\n");
            break;
        default:
            acceleration = 1;
            printf("Default Mode\n");
    }

    for (current_speed = 0; current_speed <= target_speed; current_speed += acceleration) {
        
        
        if (current_speed == 100) {
            printf("--- [Gear Syncing at 100km/h] ---\n");
            continue; 
        }

        if (battery <= 10) {
            printf("!!! BATTERY CRITICAL (%d%%) - EMERGENCY STOP !!!\n", battery);
            break; 
        }

        printf("Speed: %d km/h | Battery: %d%%\n", current_speed, battery);
        
        battery--; 
    }

    printf("\nFinal Status -> Speed: %d | Battery: %d\n", current_speed, battery);

    return 0;
}
