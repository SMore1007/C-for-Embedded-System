#include <stdio.h>

union SensorData {
    int int_val;
    float float_val;
};

int main() {
    union SensorData sensor;

    sensor.int_val = 250;
    printf("Integer sensor value: %d\n", sensor.int_val);

    sensor.float_val = 36.5;
    printf("Float sensor value: %.2f\n", sensor.float_val);

    return 0;
}
