# include <stdio.h>
# include <math.h>

int main() {
    int score;
    prtintf("Enter your score: ");
    scanf("%d", &score);
    if (score < 0 || score >100){
        printf("Invalid score.");}

    if (score>0 && score <= 49){
        printf("Low Confidence");
    }
    if (score >= 50 && score <= 79){
        printf("Moderate Confidence");
    }
    if (score >= 80 && score <= 100){
        printf("High Confidence");
    }
}