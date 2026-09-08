#include <stdio.h>

void main()
{
    char username[20];
    char emailID[20];
    char address[50];
    char mobNo[11];
    char dateOfBirth[11];
    char aadharNo[13];
    char occupation[25];
    char income[20];

    printf("Username: ");
    fgets(username, 20, stdin);

    printf("\nEmail ID: ");
    fgets(emailID, 20, stdin);

    printf("\nAddress: ");
    fgets(address, 50, stdin);

    printf("\nMobile No: ");
    fgets(mobNo, 11, stdin);

    printf("\nDate of Birth: ");
    fgets(dateOfBirth, 11, stdin);

    printf("\nAadhar No: ");
    fgets(aadharNo, 13, stdin);

    printf("\nOccupation: ");
    fgets(occupation, 25, stdin);

    printf("\nIncome: ");
    fgets(income, 20, stdin);

    printf("\n \tCustomer Details: \n");
    printf("Username: %s", username);
    printf("Email ID: %s", emailID);
    printf("Address: %s", address);
    printf("Mobile No: %s", mobNo);
    printf("Date of Birth: %s", dateOfBirth);
    printf("Aadhar No: %s", aadharNo);
    printf("Occupation: %s", occupation);
    printf("Income: %s", income);
}
