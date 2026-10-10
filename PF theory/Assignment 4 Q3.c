#include <stdio.h>

int main() {
    double total_records, missing_records, duplicate_records;
    printf("Enter total number of records: ");
    scanf("%lf", &total_records);
    printf("Enter number of missing records: ");
    scanf("%lf", &missing_records);
    printf("Enter number of duplicate records: ");
    scanf("%lf", &duplicate_records);

    if (total_records <= 0) {
        printf("Invalid Dataset\n");
    } else {
        double missing_percentage = (missing_records / total_records) * 100.0;
        double duplicate_percentage = (duplicate_records / total_records) * 100.0;

        if (missing_percentage > 30.0) {
            printf("Poor Quality Dataset\n");
        } else if (missing_percentage <= 30.0 && duplicate_percentage > 20.0) {
            printf("Dataset Requires Cleaning\n");
        } else {
            printf("Dataset Ready for Training\n");
        }
    }

    return 0;
}