#include <stdio.h>

#define MAX_ROUTES 100

int totalDistance(int distances[], int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        total += distances[i];
    }
    return total;
}

float averageDistance(int total, int n) {
    return (float) total / n;
}

int longestRoute(int distances[], int n) {
    int longest = distances[0];

    for (int i = 1; i < n; i++) {
        if (distances[i] > longest) {
            longest = distances[i];
        }
    }
    return longest;
}

int countAboveLimit(int distances[], int n, int limit) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (distances[i] > limit) {
            count++;
        }
    }
    return count;
}

int recursiveSum(int distances[], int n) {
    if (n == 0) {
        return 0;
    }
    return distances[n - 1] + recursiveSum(distances, n - 1);
}

int main() {
    int distances[MAX_ROUTES];
    int n;
    int limit;

    printf("Enter number of routes: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_ROUTES) {
        printf("Invalid number of routes.\n");
        return 1;
    }

    printf("Enter distances of the routes:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &distances[i]);
    }

    printf("Enter distance limit: ");
    scanf("%d", &limit);

    int total = totalDistance(distances, n);
    float average = averageDistance(total, n);
    int longest = longestRoute(distances, n);
    int aboveLimit = countAboveLimit(distances, n, limit);
    int recursiveTotal = recursiveSum(distances, n);

    printf("\n===== DELIVERY DISTANCE ANALYSIS =====\n");
    printf("Total distance: %d km\n", total);
    printf("Average distance: %.2f km\n", average);
    printf("Longest route: %d km\n", longest);
    printf("Routes above %d km: %d\n", limit, aboveLimit);
    printf("Recursive sum: %d km\n", recursiveTotal);

    return 0;
}