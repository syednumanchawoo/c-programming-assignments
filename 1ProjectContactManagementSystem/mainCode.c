#include <stdio.h>
#include <string.h>

typedef struct{
    char name[50];
    char phone[15];
    char email[50];
} contact;



int main(){
    printf("WELCOME TO CONTACT MANAGEMENT SYSTEM\n");

    contact myContacts[100];
    int noOfContacts=0;
    FILE *ptr;
    ptr = fopen("MyContacts.dat", "rb");
    if (ptr == NULL){
        printf("No existing contacts found. Starting fresh\n");
    }
    else{
        fread(&noOfContacts, sizeof(int), 1, ptr);
        fread(myContacts, sizeof(contact), noOfContacts, ptr);
        fclose(ptr);
    }

    
    
    int status = 1;
    

    

     while(status){
        printf("a : Add a Contact\n");
        printf("v : View all Contacts\n");
        printf("s : Search a contact\n");
        printf("e : Exit\n\n");
        printf("Enter the appropriate input: ");
        
        char input;
        scanf("%c", &input);
        while (getchar() != '\n');
        
        switch(input){
            case 'a':
            case 'A':
                if (noOfContacts >= 100){
                    printf("Error: Contact directory is full!\n");
                    break;
                }

                printf("Enter name: ");
                fgets(myContacts[noOfContacts].name, 50, stdin);
                myContacts[noOfContacts].name[strcspn(myContacts[noOfContacts].name, "\n")] = 0;

                printf("Enter phone number: ");
                fgets(myContacts[noOfContacts].phone, 15, stdin);
                myContacts[noOfContacts].phone[strcspn(myContacts[noOfContacts].phone, "\n")] = 0;

                printf("Enter Email: ");
                fgets(myContacts[noOfContacts].email, 50, stdin);
                myContacts[noOfContacts].email[strcspn(myContacts[noOfContacts].email, "\n")] = 0;

                noOfContacts++;
                printf("Contact added successfully.\n");
                break;

            case 'v':
            case 'V':
                if (noOfContacts == 0){
                    printf("No contacts in the directory\n");
                    break;
                }

                for(int i=0; i<noOfContacts; i++){
                    printf("Name: %s\n", myContacts[i].name);
                    printf("Phone number: %s\n", myContacts[i].phone);
                    printf("Email: %s\n\n", myContacts[i].email);
                }

                printf("END\n");
                break;

            case 's':
            case 'S':
                if (noOfContacts == 0){
                    printf("No contacts in the directory\n");
                    break;
                }

                char temp[50];
                printf("Enter name to search: ");
                fgets(temp, 50, stdin);
                temp[strcspn(temp, "\n")] = 0;

                int found = 0;
                for(int i=0; i<noOfContacts; i++){
                    int result = strcmp(temp, myContacts[i].name);
                    if (result == 0){
                        found = 1;
                        printf("\n--- Contact Found ---\n");
                        printf("Name: %s\n", myContacts[i].name);
                        printf("Phone: %s\n", myContacts[i].phone);
                        printf("Email: %s\n", myContacts[i].email);
                        break;
                    }
                }

                if (found == 0) {
                        printf("\nContact not found.\n");
                    }
                break;

            case 'e':
            case 'E':
                printf("PROGRAM TERMINATED\n");
                status = 0;
                break;
        }
     }


     ptr = fopen("MyContacts.dat", "wb");
     fwrite(&noOfContacts, sizeof(int), 1, ptr);
     fwrite(myContacts, sizeof(contact), noOfContacts, ptr);
     fclose(ptr);

    return 0;
}