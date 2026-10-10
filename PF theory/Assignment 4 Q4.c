#include <stdio.h>

int main() {
    double accuracy, latency;
    int approval_status;
    int valid = 1;

    printf("Enter model accuracy (%%): ");
    scanf("%lf", &accuracy);
    printf("Enter prediction latency (ms): ");
    scanf("%lf", &latency);
    printf("Enter model approval status (1 = Approved, 0 = Not Approved): ");
    scanf("%d", &approval_status);

    if (accuracy < 90.0) {
        printf("Accuracy too low\n");
        valid = 0;
    }
    if (latency > 100.0) {
        printf("Latency too high\n");
        valid = 0;
    }
    if (approval_status != 1) {
        printf("Model not approved\n");
        valid = 0;
    }

    if (valid) {
        printf("Model is approved for deployment.\n");
    }

    return 0;
}