# include <stdio.h>
# include <math.h>

int main() {
int Modelaccuracy;
int predictionlatency;
int modelapprovalstatus;
printf("Enter the model accuracy (as a percentage): ");
scanf("%d", &Modelaccuracy);
printf("Enter the prediction latency (in milliseconds): ");
scanf("%d", &predictionlatency);
printf("Enter the model approval status (1 for approved, 0 for not approved): ");
scanf("%d", &modelapprovalstatus);
if (Modelaccuracy >= 90 && predictionlatency <= 100 && modelapprovalstatus == 1) {
    printf("The model is suitable for deployment.\n");
} else {
    printf("The model is not suitable for deployment.\n");
}
return 0;