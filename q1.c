#include <stdio.h>
#include <math.h>

float calculateIndex(float temperature, float turbidity) {
    float temperatureDeviation = fabs(temperature - 25);
    float turbidityPenalty = turbidity / 2.0;

    return 100 - (temperatureDeviation + turbidityPenalty);
}

const char* classifyWater(float index) {
    if (index >= 80)
        return "Good";
    else if (index >= 60)
        return "Warning";
    else
        return "Critical";
}

int main() {
    float temperature;
    float turbidity;
    float index;
    const char* status;

    printf("Enter temperature (°C): ");
    scanf("%f", &temperature);

    printf("Enter turbidity (NTU): ");
    scanf("%f", &turbidity);

    index = calculateIndex(temperature, turbidity);
    status = classifyWater(index);

    printf("\n====================================\n");
    printf("       WATER QUALITY REPORT\n");
    printf("====================================\n");
    printf("Temperature : %.2f °C\n", temperature);
    printf("Turbidity   : %.2f NTU\n", turbidity);
    printf("Water Index : %.2f\n", index);
    printf("Status      : %s\n", status);
    printf("====================================\n");

    return 0;
}