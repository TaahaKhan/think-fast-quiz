// 23k-0674
// 23k-0583
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    char name[100];
    int age;
    char nu_id[100];
};
// function to calculate score
void pf_el_score(char *ptr)
{
    int score = 0;
    char telly_ans[] = {'b', 'a', 'b', 'b', 'c', 'd', 'a', 'a', 'b', 'b', 'c', 'b', 'c', 'b', 'a'};
    int i;
    for (i = 0; i < 15; i++)
    {
        if (*(ptr + i) == telly_ans[i])
        {
            score = score + 1;
        }
    }
    printf("Your score out of 15 = %d\n", score);
    printf("Correct Answers:\n");
    for (i = 0; i < 15; i++)
    {
        printf("MCQ %d: %c\n", i + 1, telly_ans[i]);
    }
}
void pf_med_score(char *ptr)
{
    int score = 0;
    char telly_ans[] = {'c', 'a', 'a', 'c', 'a', 'c', 'a', 'c', 'b', 'b', 'a', 'b', 'a', 'b', 'a'};
    int i;
    for (i = 0; i < 15; i++)
    {
        if (*(ptr + i) == telly_ans[i])
        {
            score = score + 1;
        }
    }
    printf("Your score out of 15 = %d\n", score);
    printf("Correct Answers:\n");
    for (i = 0; i < 15; i++)
    {
        printf("MCQ %d: %c\n", i + 1, telly_ans[i]);
    }
}
void pf_adv_score(char *ptr)
{
    int score = 0;
    char telly_ans[] = {'c', 'b', 'a', 'b', 'c', 'd', 'a', 'c', 'a', 'a', 'c', 'b', 'a', 'b', 'd'};
    int i;
    for (i = 0; i < 15; i++)
    {
        if (*(ptr + i) == telly_ans[i])
        {
            score = score + 1;
        }
    }
    printf("Your score out of 15 = %d\n", score);
    printf("Correct Answers:\n");
    for (i = 0; i < 15; i++)
    {
        printf("MCQ %d: %c\n", i + 1, telly_ans[i]);
    }
}
void phy_el_score(char *ptr)
{
    int score = 0;
    char telly_ans[] = {'d', 'b', 'b', 'b', 'a', 'a', 'b', 'c', 'b', 'a', 'd', 'c', 'b', 'c', 'b'};
    int i;
    for (i = 0; i < 15; i++)
    {
        if (*(ptr + i) == telly_ans[i])
        {
            score = score + 1;
        }
    }
    printf("Your score out of 15 = %d\n", score);
    printf("Correct Answers:\n");
    for (i = 0; i < 15; i++)
    {
        printf("MCQ %d: %c\n", i + 1, telly_ans[i]);
    }
}
void phy_med_score(char *ptr)
{
    int score = 0;
    char telly_ans[] = {'c', 'b', 'b', 'd', 'b', 'c', 'a', 'b', 'c', 'd', 'a', 'd', 'a', 'a', 'a'};
    int i;
    for (i = 0; i < 15; i++)
    {
        if (*(ptr + i) == telly_ans[i])
        {
            score = score + 1;
        }
    }
    printf("Your score out of 15 = %d\n", score);
    printf("Correct Answers:\n");
    for (i = 0; i < 15; i++)
    {
        printf("MCQ %d: %c\n", i + 1, telly_ans[i]);
    }
}
void phy_adv_score(char *ptr)
{
    int score = 0;
    char telly_ans[] = {'d', 'a', 'c', 'a', 'a', 'c', 'a', 'a', 'a', 'c', 'a', 'a', 'b', 'c', 'a'};
    int i;
    for (i = 0; i < 15; i++)
    {
        if (*(ptr + i) == telly_ans[i])
        {
            score = score + 1;
        }
    }
    printf("Your score out of 15 = %d\n", score);
    printf("Correct Answers:\n");
    for (i = 0; i < 15; i++)
    {
        printf("MCQ %d: %c\n", i + 1, telly_ans[i]);
    }
}
void gk_el_score(char *ptr)
{
    int score = 0;
    char telly_ans[] = {'c', 'a', 'b', 'a', 'b', 'b', 'c', 'a', 'c', 'a', 'a', 'd', 'a', 'b', 'b'};
    int i;
    for (i = 0; i < 15; i++)
    {
        if (*(ptr + i) == telly_ans[i])
        {
            score = score + 1;
        }
    }
    printf("Your score out of 15 = %d\n", score);
    printf("Correct Answers:\n");
    for (i = 0; i < 15; i++)
    {
        printf("MCQ %d: %c\n", i + 1, telly_ans[i]);
    }
}
void gk_med_score(char *ptr)
{
    int score = 0;
    char telly_ans[] = {'c', 'a', 'b', 'a', 'b', 'a', 'a', 'b', 'a', 'c', 'a', 'a', 'c', 'c', 'b'};
    int i;
    for (i = 0; i < 15; i++)
    {
        if (*(ptr + i) == telly_ans[i])
        {
            score = score + 1;
        }
    }
    printf("Your score out of 15 = %d\n", score);
    printf("Correct Answers:\n");
    for (i = 0; i < 15; i++)
    {
        printf("MCQ %d: %c\n", i + 1, telly_ans[i]);
    }
}
void gk_adv_score(char *ptr)
{
    int score = 0;
    char telly_ans[] = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'b', 'd', 'a', 'b', 'a'};
    int i;
    for (i = 0; i < 15; i++)
    {
        if (*(ptr + i) == telly_ans[i])
        {
            score = score + 1;
        }
    }
    printf("Your score out of 15 = %d\n", score);
    printf("Correct Answers:\n");
    for (i = 0; i < 15; i++)
    {
        printf("MCQ %d: %c\n", i + 1, telly_ans[i]);
    }
}
// function for Elementary level Programming Fundamentals MCQs and taking answers from user.
void pf_el(char *ptr)
{
    FILE *file;
    char filename[] = "PFElQues.txt";
    char linelength[256]; // Assuming that each line in the file is less than 256 characters

    // Open the file for reading
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("Error opening file %s", filename);
        exit(0);
    }

    // Read each MCQ from the file and get user input for answers
    printf("\n");
    int i, j;
    for (i = 0; i < 15; ++i)
    {

        fgets(linelength, sizeof(linelength), file);
        printf("%s", linelength);

        // Read the options
        for (j = 0; j < 5; ++j)
        {
            fgets(linelength, sizeof(linelength), file);
            printf("%s", linelength);
        }

        // Get user input for the answer
        printf("Enter your answer (a, b, c, or d): ");
        scanf(" %c", (ptr + i));
        printf("\n");
        getchar();
    }
    fclose(file);
    printf("\nYour Answers:\n");
    for (i = 0; i < 15; ++i)
    {
        printf("MCQ %d: %c\n", i + 1, *(ptr + i));
    }
    pf_el_score(ptr);
}
// function for Medium level Programming Fundamentals MCQs and taking answers from user.
void pf_med(char *ptr)
{
    FILE *file;
    char filename[] = "PFMedQues.txt";
    char linelength[256]; // Assuming that each line in the file is less than 256 characters

    // Open the file for reading
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("Error opening file %s", filename);
        exit(0);
    }

    // Read each MCQ from the file and get user input for answers
    printf("\n");
    int i, j;
    for (i = 0; i < 15; ++i)
    {

        fgets(linelength, sizeof(linelength), file);
        printf("%s", linelength);

        // Read the options
        for (j = 0; j < 5; ++j)
        {
            fgets(linelength, sizeof(linelength), file);
            printf("%s", linelength);
        }

        // Get user input for the answer
        printf("Enter your answer (a, b, c, or d): ");
        scanf(" %c", (ptr + i));
        printf("\n");
        getchar();
    }
    fclose(file);
    printf("\nYour Answers:\n");
    for (i = 0; i < 15; ++i)
    {
        printf("MCQ %d: %c\n", i + 1, *(ptr + i));
    }
    pf_med_score(ptr);
}
// function for Advanced level Programming Fundamentals MCQs and taking answers from user.
void pf_adv(char *ptr)
{
    FILE *file;
    char filename[] = "PFAdvQues.txt";
    char linelength[256]; // Assuming that each line in the file is less than 256 characters

    // Open the file for reading
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("Error opening file %s", filename);
        exit(0);
    }

    // Read each MCQ from the file and get user input for answers
    printf("\n");
    int i, j;
    for (i = 0; i < 15; ++i)
    {

        fgets(linelength, sizeof(linelength), file);
        printf("%s", linelength);

        // Read the options
        for (j = 0; j < 5; ++j)
        {
            fgets(linelength, sizeof(linelength), file);
            printf("%s", linelength);
        }

        // Get user input for the answer
        printf("Enter your answer (a, b, c, or d): ");
        scanf(" %c", (ptr + i));
        printf("\n");
        getchar();
    }
    fclose(file);
    printf("\nYour Answers:\n");
    for (i = 0; i < 15; ++i)
    {
        printf("MCQ %d: %c\n", i + 1, *(ptr + i));
    }
    pf_adv_score(ptr);
}
// function for Elementary level Physics MCQs and taking answers from user.
void phy_el(char *ptr)
{
    FILE *file;
    char filename[] = "PhyElQues.txt";
    char linelength[256]; // Assuming that each line in the file is less than 256 characters

    // Open the file for reading
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("Error opening file %s", filename);
        exit(0);
    }

    // Read each MCQ from the file and get user input for answers
    printf("\n");
    int i, j;
    for (i = 0; i < 15; ++i)
    {

        fgets(linelength, sizeof(linelength), file);
        printf("%s", linelength);

        // Read the options
        for (j = 0; j < 5; ++j)
        {
            fgets(linelength, sizeof(linelength), file);
            printf("%s", linelength);
        }

        // Get user input for the answer
        printf("Enter your answer (a, b, c, or d): ");
        scanf(" %c", (ptr + i));
        printf("\n");
        getchar();
    }
    fclose(file);
    printf("\nYour Answers:\n");
    for (i = 0; i < 15; ++i)
    {
        printf("MCQ %d: %c\n", i + 1, *(ptr + i));
    }
    phy_el_score(ptr);
}
// function for Medium level Physics MCQs and taking answers from user.
void phy_med(char *ptr)
{
    FILE *file;
    char filename[] = "PhyMedQues.txt";
    char linelength[256]; // Assuming that each line in the file is less than 256 characters

    // Open the file for reading
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("Error opening file %s", filename);
        exit(0);
    }

    // Read each MCQ from the file and get user input for answers
    printf("\n");
    int i, j;
    for (i = 0; i < 15; ++i)
    {

        fgets(linelength, sizeof(linelength), file);
        printf("%s", linelength);

        // Read the options
        for (j = 0; j < 5; ++j)
        {
            fgets(linelength, sizeof(linelength), file);
            printf("%s", linelength);
        }

        // Get user input for the answer
        printf("Enter your answer (a, b, c, or d): ");
        scanf(" %c", (ptr + i));
        printf("\n");
        getchar();
    }
    fclose(file);
    printf("\nYour Answers:\n");
    for (i = 0; i < 15; ++i)
    {
        printf("MCQ %d: %c\n", i + 1, *(ptr + i));
    }
    phy_med_score(ptr);
}
// function for Advanced level Physics MCQs and taking answers from user.
void phy_adv(char *ptr)
{
    FILE *file;
    char filename[] = "PhyAdvQues.txt";
    char linelength[256]; // Assuming that each line in the file is less than 256 characters

    // Open the file for reading
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("Error opening file %s", filename);
        exit(0);
    }

    // Read each MCQ from the file and get user input for answers
    printf("\n");
    int i, j;
    for (i = 0; i < 15; ++i)
    {

        fgets(linelength, sizeof(linelength), file);
        printf("%s", linelength);

        // Read the options
        for (j = 0; j < 5; ++j)
        {
            fgets(linelength, sizeof(linelength), file);
            printf("%s", linelength);
        }

        // Get user input for the answer
        printf("Enter your answer (a, b, c, or d): ");
        scanf(" %c", (ptr + i));
        printf("\n");
        getchar();
    }
    fclose(file);
    printf("\nYour Answers:\n");
    for (i = 0; i < 15; ++i)
    {
        printf("MCQ %d: %c\n", i + 1, *(ptr + i));
    }
    phy_adv_score(ptr);
}
// function for Elemnatry level General knowledge MCQs and taking answers from user.
void gk_el(char *ptr)
{
    FILE *file;
    char filename[] = "GKElQues.txt";
    char linelength[256]; // Assuming that each line in the file is less than 256 characters

    // Open the file for reading
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("Error opening file %s", filename);
        exit(0);
    }

    // Read each MCQ from the file and get user input for answers
    printf("\n");
    int i, j;
    for (i = 0; i < 15; ++i)
    {

        fgets(linelength, sizeof(linelength), file);
        printf("%s", linelength);

        // Read the options
        for (j = 0; j < 5; ++j)
        {
            fgets(linelength, sizeof(linelength), file);
            printf("%s", linelength);
        }

        // Get user input for the answer
        printf("Enter your answer (a, b, c, or d): ");
        scanf(" %c", (ptr + i));
        printf("\n");
        getchar();
    }
    fclose(file);
    printf("\nYour Answers:\n");
    for (i = 0; i < 15; ++i)
    {
        printf("MCQ %d: %c\n", i + 1, *(ptr + i));
    }
    gk_el_score(ptr);
}
// function for Medium level General knowledge MCQs and taking answers from user.
void gk_med(char *ptr)
{
    FILE *file;
    char filename[] = "GKMedQues.txt";
    char linelength[256]; // Assuming that each line in the file is less than 256 characters

    // Open the file for reading
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("Error opening file %s", filename);
        exit(0);
    }

    // Read each MCQ from the file and get user input for answers
    printf("\n");
    int i, j;
    for (i = 0; i < 15; ++i)
    {

        fgets(linelength, sizeof(linelength), file);
        printf("%s", linelength);

        // Read the options
        for (j = 0; j < 5; ++j)
        {
            fgets(linelength, sizeof(linelength), file);
            printf("%s", linelength);
        }

        // Get user input for the answer
        printf("Enter your answer (a, b, c, or d): ");
        scanf(" %c", (ptr + i));
        printf("\n");
        getchar();
    }
    fclose(file);
    printf("\nYour Answers:\n");
    for (i = 0; i < 15; ++i)
    {
        printf("MCQ %d: %c\n", i + 1, *(ptr + i));
    }
    gk_med_score(ptr);
}
// function for Advanced level General knowledge MCQs and taking answers from user.
void gk_adv(char *ptr)
{
    FILE *file;
    char filename[] = "GKAdvQues.txt";
    char linelength[256]; // Assuming that each line in the file is less than 256 characters

    // Open the file for reading
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("Error opening file %s", filename);
        exit(0);
    }

    // Read each MCQ from the file and get user input for answers
    printf("\n");
    int i, j;
    for (i = 0; i < 15; ++i)
    {

        fgets(linelength, sizeof(linelength), file);
        printf("%s", linelength);

        // Read the options
        for (j = 0; j < 5; ++j)
        {
            fgets(linelength, sizeof(linelength), file);
            printf("%s", linelength);
        }

        // Get user input for the answer
        printf("Enter your answer (a, b, c, or d): ");
        scanf(" %c", (ptr + i));
        printf("\n");
        getchar();
    }
    fclose(file);
    printf("\nYour Answers:\n");
    for (i = 0; i < 15; ++i)
    {
        printf("MCQ %d: %c\n", i + 1, *(ptr + i));
    }
    gk_adv_score(ptr);
}

int retakeQuiz()
{
    int choice;
    printf("\nDo you want to retake the quiz?\n");
    printf("1) Yes\n");
    printf("2) No\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        return 1;
    case 2:
        return 0;
    default:
        printf("Invalid choice. Please enter 1 or 2.\n");
        return retakeQuiz(); // Recursive call to handle invalid input
    }
}

// Main function with recursion
void takeQuiz()
{
    int opt, level, retake;
    char ans[16]; // answer given by user
    struct student s;

    printf("\t\t\t\t\tWelcome to Think Fast Quiz\n");
    printf("Enter your name:");
    gets(s.name);
    printf("Enter your Nu-Id:");
    gets(s.nu_id);
    printf("Enter age:");
    scanf("%d", &s.age);
    printf("\n\n\t-:YOUR INFORMATION:-\n");
    printf("Name: %s\nNU-ID: %s\nAge: %d\n\n", s.name, s.nu_id, s.age);

    do
    {
        printf("Choose any one subject from the following subjects to start the quiz,\n");
        printf("1) Programming Fundamentals\n");
        printf("2) Physics\n");
        printf("3) General Knowledge\n");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            printf("Choose the level of difficulty you want for your quiz,\n");
            printf("1) Elementary\n");
            printf("2) Medium\n");
            printf("3) Advanced\n");
            scanf("%d", &level);

            switch (level)
            {
            case 1:
                pf_el(ans);
                break;
            case 2:
                pf_med(ans);
                break;
            case 3:
                pf_adv(ans);
                break;
            }
            break;

        case 2:
            printf("Choose the level of difficulty you want for your quiz,\n");
            printf("1) Elementary\n");
            printf("2) Medium\n");
            printf("3) Advanced\n");
            scanf("%d", &level);

            switch (level)
            {
            case 1:
                phy_el(ans);
                break;
            case 2:
                phy_med(ans);
                break;
            case 3:
                phy_adv(ans);
                break;
            }
            break;

        case 3:
            printf("Choose the level of difficulty you want for your quiz,\n");
            printf("1) Elementary\n");
            printf("2) Medium\n");
            printf("3) Advanced\n");
            scanf("%d", &level);

            switch (level)
            {
            case 1:
                gk_el(ans);
                break;
            case 2:
                gk_med(ans);
                break;
            case 3:
                gk_adv(ans);
                break;
            }
            break;

        default:
            printf("Invalid choice. Please enter a number between 1 and 3.\n");
        }

        retake = retakeQuiz(); // Ask the user if they want to retake the quiz

    } while (retake);

    printf("Thank you for taking the quiz!\n");
}
int main()
{
    takeQuiz();
    return 0;
}
