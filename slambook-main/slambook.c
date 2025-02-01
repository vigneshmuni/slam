/**
                        Slam Book
                ---------------------------------
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct node
{
    int id;
    char frnd_name[50], frnd_stagename[30], department[20];
    long long int phonenumber_1, phonenumber_2;
    char present_address[200], permanent_address[200], email[80];
    char section[5];
    char fav_color[15], fav_food[30], fav_movie[40];
    char wanna_become[30], go_crazy[50];
    char advice_for_me[500], our_crazy_memory[100];
    struct dob *birth;
    struct node *next;
    struct node *previous;

} *start = NULL, *end = NULL;
FILE *file;

/*    Shadhin    */
void create_frnds_slam()
{
    struct node *new_node, *current;
    int i, number_of_node;

    printf("\n\n\n\n\n\n\t\t\tEnter Number of friends` details you enter\n: ");
    scanf("%d", &number_of_node);
    cls();

    for (i = 1; i <= number_of_node; i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));

        if (new_node == NULL)
        {
            printf("\nMemory Does Not Created.\n");
            exit(0);
        }
        else
        {
            file = fopen("slam book.txt", "a+");
            if (file == NULL)
            {
                printf("File does not create.\n");
            }
            else
            {
                printf("\n\n\t\t\t Friends details\n");
                fprintf(file, "\n\n\t\t\t F.R.I.E.N.D Details\n");
                printf("\t\t_____________\n");
                fprintf(file, "\t\t_____________\n");

                printf("\n\n\tEnter friend Name: ");
                fflush(stdin);
                gets(new_node->frnd_name);
                fprintf(file, "\n\t FRIend Name: %s", new_node->frnd_name);

                printf("\n\t Nick name: ");
                fflush(stdin);
                gets(new_node->frnd_stagename);
                fprintf(file, "\n\tFriends call ME: %s", new_node->frnd_stagename);

                printf("\n\tID: ");
                scanf("%d", &new_node->id);
                fprintf(file, "\n\tID: %d", new_node->id);

                printf("\n\tDepartment: ");
                fflush(stdin);
                gets(new_node->department);
                fprintf(file, "\n\tDepartment: %s", new_node->department);

                printf("\n\tSection: ");
                fflush(stdin);
                gets(new_node->section);
                fprintf(file, "\n\tSection: %s", new_node->section);

                printf("\n\n\t Email ID: ");
                fflush(stdin);
                gets(new_node->email);
                fprintf(file, "\n\n\t Reach ME on Email ID: %s", new_node->email);

                printf("\n\t Phone Number: ");
                scanf("%lld", &new_node->phonenumber_1);
                fprintf(file, "\n\tCONTACT ME through Phone Number: %lld", new_node->phonenumber_1);

                printf("\n\t Alternate Phone Number: ");
                scanf("%lld", &new_node->phonenumber_2);
                fprintf(file, "\n\t ALTERNATE Phone Number: %lld", new_node->phonenumber_2);

                printf("\n\tFavorite Color: ");
                fflush(stdin);
                gets(new_node->fav_color);
                fprintf(file, "\n\tFavorite Color: %s", new_node->fav_color);

                printf("\n\t Favorite Food: ");
                fflush(stdin);
                gets(new_node->fav_food);
                fprintf(file, "\n\t Favorite FOOD: %s", new_node->fav_food);

                printf("\n\t FAVORITE MOVIE: ");
                fflush(stdin);
                gets(new_node->fav_movie);
                fprintf(file, "\n\t MOVIE I go NUTS about: %s", new_node->fav_movie);

                printf("\n\n\t you go crazy over: ");
                fflush(stdin);
                gets(new_node->go_crazy);
                fprintf(file, "\n\t I go BANANAS over : %s", new_node->go_crazy);

                printf("\n\t OUR CRAZY MEMORY: ");
                fflush(stdin);
                gets(new_node->our_crazy_memory);
                fprintf(file, "\n\t A CRAZY MEMORY WE shared : %s", new_node->our_crazy_memory);

                printf("\n\tADVICE FOR ME : ");
                fflush(stdin);
                gets(new_node->advice_for_me);
                fprintf(file, "\n\t PIECE OF ADVICE YOU SERVE ME : %s", new_node->advice_for_me);

                printf("\n\t you wanna become : ");
                fflush(stdin);
                gets(new_node->wanna_become);
                fprintf(file, "\n\t YOUR dream CAREER : %s", new_node->wanna_become);

                printf("\n\n\tPresent Address: ");
                fflush(stdin);
                gets(new_node->present_address);
                fprintf(file, "\n\tPresent Address: %s", new_node->present_address);

                printf("\n\tPermanent Address: ");
                fflush(stdin);
                gets(new_node->permanent_address);
                fprintf(file, "\n\tPermanent Address: %s", new_node->permanent_address);

                fclose(file);
                fopen("slam book.txt", "a+");
            }

            new_node->next = NULL;
            new_node->previous = NULL;

            if (start == NULL && end == NULL)
            {
                start = new_node;
                end = new_node;
                current = new_node;
            }
            else
            {
                current->next = new_node;
                new_node->previous = current;
                current = new_node;
                end = new_node;
            }
        }
    }
}

/*    Shadhin    */
void add_friend_details()
{
    struct node *new_node, *current;
    new_node = (struct node *)malloc(sizeof(struct node));

    if (new_node == NULL)
    {
        printf("\nMemory Does Not Created.\n");
        exit(0);
    }
    else
    {
        file = fopen("slam book.txt", "a+");
        if (file == NULL)
        {
            printf("File does not create.\n");
        }
        else
        {
            printf("\n\n\t\t\t Friend details\n");
            fprintf(file, "\n\n\t\t\t F.R.I.E.N.D Details\n");
            printf("\t\t_____________\n");
            fprintf(file, "\t\t_____________\n");

            printf("\n\n\tEnter friend Name: ");
            fflush(stdin);
            gets(new_node->frnd_name);
            fprintf(file, "\n\t FRIend Name: %s", new_node->frnd_name);

            printf("\n\t Nick name: ");
            fflush(stdin);
            gets(new_node->frnd_stagename);
            fprintf(file, "\n\tFriends call ME: %s", new_node->frnd_stagename);

            printf("\n\tID: ");
            scanf("%d", &new_node->id);
            fprintf(file, "\n\tID: %d", new_node->id);

            printf("\n\tDepartment: ");
            fflush(stdin);
            gets(new_node->department);
            fprintf(file, "\n\tDepartment: %s", new_node->department);

            printf("\n\tSection: ");
            fflush(stdin);
            gets(new_node->section);
            fprintf(file, "\n\tSection: %s", new_node->section);

            printf("\n\n\t Email ID: ");
            fflush(stdin);
            gets(new_node->email);
            fprintf(file, "\n\n\t Reach ME on Email ID: %s", new_node->email);

            printf("\n\t Phone Number: ");
            scanf("%lld", &new_node->phonenumber_1);
            fprintf(file, "\n\tCONTACT ME through Phone Number: %lld", new_node->phonenumber_1);

            printf("\n\t Alternate Phone Number: ");
            scanf("%lld", &new_node->phonenumber_2);
            fprintf(file, "\n\t ALTERNATE Phone Number: %lld", new_node->phonenumber_2);

            printf("\n\tFavorite Color: ");
            fflush(stdin);
            gets(new_node->fav_color);
            fprintf(file, "\n\tFavorite Color: %s", new_node->fav_color);

            printf("\n\t Favorite Food: ");
            fflush(stdin);
            gets(new_node->fav_food);
            fprintf(file, "\n\t Favorite FOOD: %s", new_node->fav_food);

            printf("\n\t FAVORITE MOVIE: ");
            fflush(stdin);
            gets(new_node->fav_movie);
            fprintf(file, "\n\t MOVIE I go NUTS about: %s", new_node->fav_movie);

            printf("\n\n\t you go crazy over: ");
            fflush(stdin);
            gets(new_node->go_crazy);
            fprintf(file, "\n\t I go BANANAS over : %s", new_node->go_crazy);

            printf("\n\t OUR CRAZY MEMORY: ");
            fflush(stdin);
            gets(new_node->our_crazy_memory);
            fprintf(file, "\n\t A CRAZY MEMORY WE shared : %s", new_node->our_crazy_memory);

            printf("\n\tADVICE FOR ME : ");
            fflush(stdin);
            gets(new_node->advice_for_me);
            fprintf(file, "\n\t PIECE OF ADVICE YOU SERVE ME : %s", new_node->advice_for_me);

            printf("\n\t you wanna become : ");
            fflush(stdin);
            gets(new_node->wanna_become);
            fprintf(file, "\n\t YOUR dream CAREER : %s", new_node->wanna_become);

            printf("\n\n\tPresent Address: ");
            fflush(stdin);
            gets(new_node->present_address);
            fprintf(file, "\n\tPresent Address: %s", new_node->present_address);

            printf("\n\tPermanent Address: ");
            fflush(stdin);
            gets(new_node->permanent_address);
            fprintf(file, "\n\tPermanent Address: %s", new_node->permanent_address);

            fclose(file);
            fopen("slam book.txt", "a+");
        }
    }

    new_node->next = NULL;
    new_node->previous = NULL;

    current = end;
    current->next = new_node;
    new_node->previous = current;
    end = new_node;
}

/*    Mehedi    */
void display_friends_details()
{
    struct node *current;

    current = start;

    if (current == NULL)
    {
        printf("\n\n\n\n\n\n\n\t\t\tThere Are No details In The List.\n");
    }
    else
    {
        while (current != NULL)
        {
            printf("\n\t\t\tF.R.I.E.N.D. Details\n");
            printf("\t\t_____________");

            printf("\n\tFRIEND Name: %s", current->frnd_name);

            printf("\n\t friends call me: %s", current->frnd_stagename);

            printf("\n\tID: %d", current->id);

            printf("\n\tDepartment: %s", current->department);

            printf("\n\tSection: %s", current->section);

            printf("\n\tEmail ID: %s", current->email);

            printf("\n\t Phone Number: %lld", current->phonenumber_1);

            printf("\n\tAlternate Phone Number: %lld", current->phonenumber_2);

            printf("\n\tPresent Address: %s", current->present_address);

            printf("\n\tPermanent Address: %s", current->permanent_address);

            printf("\n\tFavorite COLOR: %s", current->fav_color);

            printf("\n\tFavorite FOOD: %s", current->fav_food);

            printf("\n\tFavorite MOVIE: %s", current->fav_movie);

            printf("\n\tDREAM CAREER: %s", current->wanna_become);

            printf("\n\t GO CRAZY ABOUT: %s", current->go_crazy);

            printf("\n\t A MEMORABLE MOMENT BETWEEN US: %s", current->our_crazy_memory);

            printf("\n\t Advice for Me: %s", current->advice_for_me);

            current = current->next;
            printf("\n");
        }
    }
}

/*    Shadhin    */
int pos(frnd_id)
{
    int position = 0;
    struct node *current;

    current = start;

    while (current != NULL)
    {
        position++;
        if (frnd_id == current->id)
        {
            return position;
        }
        current = current->next;
    }
    return -1;
}

/*    Antor    */
int search_slam(frnd_id)
{
    int position = 0;
    struct node *current;

    current = start;

    while (current != NULL)
    {
        position++;
        if (frnd_id == current->id)
        {
            printf("\n\t\t\tF.R.I.E.N.D. Details\n");
            printf("\t\t_____________");

            printf("\n\tFRIEND Name: %s", current->frnd_name);

            printf("\n\t friends call me: %s", current->frnd_stagename);

            printf("\n\tID: %d", current->id);

            printf("\n\tDepartment: %s", current->department);

            printf("\n\tSection: %s", current->section);

            printf("\n\tEmail ID: %s", current->email);

            printf("\n\t Phone Number: %lld", current->phonenumber_1);

            printf("\n\tAlternate Phone Number: %lld", current->phonenumber_2);

            printf("\n\tPresent Address: %s", current->present_address);

            printf("\n\tPermanent Address: %s", current->permanent_address);

            printf("\n\tFavorite COLOR: %s", current->fav_color);

            printf("\n\tFavorite FOOD: %s", current->fav_food);

            printf("\n\tFavorite MOVIE: %s", current->fav_movie);

            printf("\n\tDREAM CAREER: %s", current->wanna_become);

            printf("\n\t GO CRAZY ABOUT: %s", current->go_crazy);

            printf("\n\t A MEMORABLE MOMENT BETWEEN US: %s", current->our_crazy_memory);

            printf("\n\t Advice for Me: %s", current->advice_for_me);

            printf("\n\n");
            getch();
            cls();

            return position;
        }
        current = current->next;
    }
    return -1;
}

/*    Shukdeb    */
void delete_slam()
{
    struct node *current, *temp1, *temp2;
    int i, delet_id, position;

    printf("Enter ID for delete: ");
    scanf("%d", &delet_id);
    position = pos(delet_id);

    current = start;
    for (i = 1; i <= (position - 1); i++)
    {
        current = current->next;
    }
    if (current == start && current->previous == NULL)
    {
        current = current->next;
        start = current;
        current->previous = NULL;
        printf("\nFirst ID Delete Successfully.\n");
    }
    else if (current->next == NULL && current == end)
    {
        current = current->previous;
        end = current;
        current->next = NULL;
        printf("\nLast ID Delete Successfully.\n");
    }
    else
    {
        temp2 = current->next;
        temp1 = current->previous;
        temp1->next = temp2;
        temp2->previous = temp1;
        printf("\nDelete Successfully.\n");
    }
}

void cls()
{
    system("cls");
}

int main()
{
    system("color A");

    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t|_______|\n\t\t\t\t\t|                    |\n\t\t\t\t\t|\t Welcome to MY SLAM    |\n\t\t\t\t\t|_______|\n\t\t\t\t\t|\t\t     |\n\n\n");
    getch();
    cls();

    int choice, position, frnd_id, insert_choice, display_choice;

    while (1)
    {
        printf("\n\t\t\t\t\t FRIEND Details\n");
        printf("\t\t\t_________________");
        printf("\n\n");

        printf("------------------------------------------------------------------------------------------");
        printf("\n\n");
        printf("\t\t\t\t1. Create a slam book.\n");
        printf("\t\t\t\t2. Add A SLAM.\n");
        printf("\t\t\t\t3. Display MY SLAM.\n");
        printf("\t\t\t\t4. Search MY SLAM.\n");
        printf("\t\t\t\t5. Delete A SLAM.\n");
        printf("\t\t\t\t6. Exit.\n\n");
        printf("------------------------------------------------------------------------------------------");

        printf("\n\t\t\tPlease Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        cls();

        switch (choice)
        {
        case 1:
            create_frnds_slam();
            cls();
            printf("\n\n\n\n\n\n\n\t\t\t SLAM Created Successfully.");
            getch();
            cls();
            break;

        case 2:
            while (1)
            {
                printf("\n\n\n\n\n");
                printf("------------------------------------------------------------------------------------------");
                printf("\n\n");
                printf("\t\t\t\t1. Add a SLAM.\n");
                printf("\t\t\t\t2. Back To Main Program.\n\n");
                printf("------------------------------------------------------------------------------------------");

                printf("\n\n\n\t\t\tPlease Enter your choice: ");
                scanf("%d", &insert_choice);
                printf("\n\n");

                cls();
                switch (insert_choice)
                {

                case 1:
                    add_friend_details();
                    cls();
                    printf("\n\n\n\n\n\n\n\t\t\tSLAM Added successfully.");
                    getch();
                    cls();
                    break;

                case 2:
                    main();
                    break;

                default:
                    printf("\n\n\n\n\n\n\n\t\t\t\tInvalid input!!!");
                    printf("\n\t\t\tPlease Enter Correct Key to Access.");
                    printf("\n\t\t\t\tOr Enter 2 to go to Main menu.\n");
                    getch();
                    cls();
                }
            }
            getch();
            cls();
            break;

        case 3:
            while (1)
            {
                printf("\n\n\n\n\n");
                printf("------------------------------------------------------------------------------------------");
                printf("\n\n");
                printf("\t\t\t\t1. Display From Forward.\n");
                printf("\t\t\t\t2. Back To Main Program.\n\n");
                printf("------------------------------------------------------------------------------------------");

                printf("\n\n\n\t\t\tPlease Enter your choice: ");
                scanf("%d", &display_choice);
                printf("\n\n");

                cls();

                switch (display_choice)
                {
                case 1:
                    display_friends_details();
                    getch();
                    cls();
                    break;

                case 2:
                    main();
                    break;

                default:
                    printf("\n\n\n\n\n\n\n\t\t\t\tInvalid input!!!");
                    printf("\n\t\t\tPlease Enter Correct Key to Access.");
                    printf("\n\t\t\t\tOr Enter 2 to go to Main menu.\n");
                    getch();
                    cls();
                }
            }
            getch();
            cls();
            break;

        case 4:
            printf("\n\n\n\n\n\n\t\t\tEnter ID: ");
            scanf("%d", &frnd_id);
            cls();

            position = search_slam(frnd_id);
            if (position == -1)
            {
                printf("\n\n\n\n\n\n\t\t\tThis ID is not in the slam.\n");
                getch();
                cls();
            }
            else
            {
                printf("\n\n\n\n\n\n\t\t\tThe Position of this slam is at Number %d.\n", position);
                getch();
                cls();
            }
            break;

        case 5:
            delete_slam();
            getch();
            cls();
            break;

        case 6:
            exit(1);
            break;

        default:
            printf("\n\n\n\n\n\n\n\t\t\t\tInvalid input!!!");
            printf("\n\t\t\tPlease Enter Correct Key to Access.");
            printf("\n\t\t\t\tOr Enter 6 to Exit.\n");
            getch();
            cls();
        }
    }
}