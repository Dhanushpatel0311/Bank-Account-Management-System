 #include <stdio.h>
 #include <string.h>

void main()
{
    char username[15];
    char emailID[20];
    char address[50];
    char mobNo[11];
    char dateOfBirth[11];
    char aadharNo[13];
    char occupation[25];
    char income[20];

    printf("Username: ");
    scanf("%[^\n]", username);

    printf("\nEmail ID: ");
    scanf("%s", emailID);

    printf("\nAddress: ");
    scanf(" %[^\n]", address);

    printf("\nMobile No: ");
    scanf("%s", mobNo);

    printf("\nDate of Birth: ");
    scanf("%s",dateOfBirth);

    printf("\nAadhar No: ");
    scanf("%s", aadharNo);

    printf("\nOccupation: ");
    scanf(" %[^\n]", occupation);

    printf("\nIncome: ");
    scanf(" %[^\n]", income);

    printf("\n \tCustomer Details: \n");
    printf("Username: %s\n", username);
    printf("Email ID: %s\n", emailID);
    printf("Address: %s\n", address);
    printf("Mobile No: %s\n", mobNo);
    printf("Date of Birth: %s\n", dateOfBirth);
    printf("Aadhar No: %s\n", aadharNo);
    printf("Occupation: %s\n", occupation);
    printf("Income: %s\n", income);
}

