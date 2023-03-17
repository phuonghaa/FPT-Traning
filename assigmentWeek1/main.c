#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//pratice 1
void sumOfDigits(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int sum = 0;
    while (n>0){
        sum += n%10;
        n /= 10;
    }

    printf("=> Sum of those digits = %d", sum);
}

//pratice 2
void numberOfZero(){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int count = 0;
    while (n>0){
        if (n%10 == 0){
            count += 1;
        }
        n /= 10;
    }

    printf("=> Number of digit 0 = %d", count);
}

//pratice 3
void SumEqualK_Count(){
    int n, k;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the components of this array: ");
    for (int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter an integer (k): ");
    scanf("%d", &k);

    int count = 0;
    for (int i = 0; i<n; i++){
        for (int j = i+1; j<n; j++){
            if (arr[i] + arr[j] == k){
                count += 1;
            }
        }
    }
    printf("=> Number of pairs whose sum is equal to %d = %d",k, count);
}

//pratice 4
void SumEqualK_Position(){
    int n, k;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the components of this array: ");
    for (int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter an integer (k): ");
    scanf("%d", &k);

    int indexArr1[n];
    int indexArr2[n];
    int index = 0;
    for (int i = 0; i<n; i++){
        for (int j = i+1; j<n; j++){
            if (arr[i] + arr[j] == k){
                indexArr1[index] = i;
                indexArr2[index] = j;
                index ++;
            }
        }
    }
    if (index == 0){
        printf("There are no pairs whose sum is equal to %d", k);
    } else {
        printf("=> Position of pairs whose sum is equal to %d: ", k);
        for (int i = 0; i<index; i++){
            printf("{arr[%d], arr[%d]} || ", indexArr1[i], indexArr2[i]);
        }
    }

}


//pratice 5
void symmetricalString(){
char s[100];
    printf("Enter a word: ");
    scanf("%s", s);


    for (int i = 0; i < strlen(s)/2 ; i ++){
        if (s[i] != s[strlen(s)-i-1])  {
            printf("%s is NOT symmetrical",s);
            break;
        }

        if (i == strlen(s)/2 - 1){
            printf("%s is symmetrical",s);
        }
    }
}


int main(){

    int n = -1;
    do {
        printf("There are 5 exercises from 1 to 5!\n");
        printf("Enter the exercice No (1-5): ");
        scanf("%d", &n);
    } while (n>5 || n <1);

    switch (n){
    case 1:
        sumOfDigits();
        break;
    case 2:
        numberOfZero();
        break;
    case 3:
        SumEqualK_Count();
        break;
    case 4:
        SumEqualK_Position();
        break;
    case 5:
        symmetricalString();
        break;
    }

    return 0;

}



