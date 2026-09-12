# include <stdio.h>
# include <math.h>

int main() {
    int Total_number_of_records;
    int number_of_missing_records;
    int number_of_records_with_duplicates;
    printf("Enter the total number of records: ");
    scanf("%d", &Total_number_of_records);
    printf("Enter the number of missing records: ");
    scanf("%d", &number_of_missing_records);
    printf("Enter the number of records with duplicates: ");
    scanf("%d", &number_of_records_with_duplicates);
    if (Total_number_of_records <=0){
        printf("Invalid total number of records.");
    }
    if ( number_of_missing_records > 0.3 * Total_number_of_records){
        printf("Poor data quality set");
    }
    else if ( number_of_records_with_duplicates > 20% Total_number_of_records){
        printf("Dataset needs cleaning");
    }
    else{
        printf("Dataset is ready for training");
    }



}

