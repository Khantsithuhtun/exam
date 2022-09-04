#include <stdio.h>
#include <stdbool.h>

char Cs_arr[20] = {'C', 'o', 'm', 'p', 'u', 't','e', 'r', 'S', 'c', 'i', 'e', 'n', 'c', 'e', '\0'};
char History_arr[10] = {'H', 'i', 's', 't', 'o', 'r', 'y', '\0'};
char Engineering_arr[15] = {'E', 'n', 'g', 'i', 'n', 'e', 'e', 'r', 'i', 'n', 'g', '\0'};
char Linux_arr[10] = {'L', 'i', 'n', 'u', 'x', '\0'};

void Menu();
void Cs_Books();
void History_Books();
void Engineer_Books();
void Linux_Books();
int main(){

    int catg_back = 0;
    char student_name[30];
    int catg[5] = {1, 2, 3, 4};
    int *ptr1 = &catg;

    printf("Welcome to Elibrary\n");

    Menu();

    printf(" 1. %s\n", Cs_arr);
    printf(" 2. %s\n", History_arr);
    printf(" 3. %s\n", Engineering_arr);
    printf(" 4. %s\n", Linux_arr);


    printf("Enter your name => ");
    scanf("%s", &student_name);//There is error It can't space between name (i.e khant sithu).

    while (true) {
        printf("Enter the category number which you want => ");
        scanf("%p", ptr1);


        switch (*ptr1) {

            case 1:
                Cs_Books();
                break;

            case 2:
                History_Books();
                break;

            case 3:
                Engineer_Books();
                break;

            case 4:
                Linux_Books();
                break;

            default:
                printf("Enter the category number that we have.\n");
        }

        printf("If you want to go back to CATEGORIES, press 1 => ");
        scanf("%d", &catg_back);

        if (catg_back != 1){
            break;
        } else{
            printf(" 1. %s\n", Cs_arr);
            printf(" 2. %s\n", History_arr);
            printf(" 3. %s\n", Engineering_arr);
            printf(" 4. %s\n", Linux_arr);

        }

    }

    return 0;
}

void Menu(){

    int x = 5;

    for(int i = 0; i < x; i++){
        printf("=");
    }

    printf("CATEGORIES");

    for (int j = 0; j < x; j++){
        printf("=");
    }

    printf("\n");

}

void Cs_Books(){

    int chose_again = 0;
    int Book_num = 0;
    char CsBook_1[30] = {'C', 'o', 'm', 'p', 'u', 't', 'e', 'r', ' ', 'S', 'c', 'i', 'e', 'n', 'c', 'e', ' ', 'I', 'l', 'l', 'u', 'm', 'i', 'n', 'a', 't', 'e', 'd'};
    char CsBook_2[35] = {'T', 'h', 'e', ' ', 'S', 'e', 'l', 'f', 'T', 'a', 'u', 'g', 'h', 't', ' ', 'C', 'o', 'm', 'p', 'u', 't', 'e', 'r', ' ', 'S', 'c', 'i', 'e', 'n', 't', 'i', 's', 't'};
    char CsBook_3[30] = {'T', 'h', 'e', ' ', 'C', ' ', 'P', 'r', 'o', 'g', 'r', 'a', 'm', 'm', 'i', 'n', 'g', ' ', 'L', 'a', 'n', 'g', 'u', 'a', 'g', 'e'};

    printf(" 1. %s\n", CsBook_1);
    printf(" 2. %s\n", CsBook_2);
    printf(" 3. %s\n", CsBook_3);

    while (true){

        printf("Enter the book's number which you want => ");
        scanf("%d", &Book_num);

        switch (Book_num) {

            case 1:
                printf("%s\n", CsBook_1);
                printf("Author  = John Lewis and Nell Dale\n");
                printf("Book id = 101\n");
                break;

            case 2:
                printf("%s\n", CsBook_2);
                printf("Author  = Cory Althoff\n");
                printf("Book id = 102\n");
                break;

            case 3:
                printf("%s\n", CsBook_3);
                printf("Author  = Brian W. Kernighan and Dennis M. Ritchie\n");
                printf("Book id = 103\n");
                break;

            default:
                printf("Enter the Book number that we have.\n");
        }

        printf("If you want to chose again, press 1 => ");
        scanf("%d", &chose_again);

        if(chose_again != 1){
            break;
        }

    }

}

void History_Books(){

    int chose_again = 0;
    int Book_num = 0;
    char HistoryBook_1[35] = {'T', 'h', 'e', ' ', 'R', 'i', 's', 'e', ' ', 'a', 'n', 'd', ' ', 'F', 'a', 'l', 'l', ' ', 'o', 'f', ' ', 't', 'h', 'e', 'T', 'h', 'i', 'r', 'd', ' ', 'R', 'e', 'i', 'c', 'h'};
    char HistoryBook_2[30] = {'T', 'h', 'e', ' ', 'H', 'i', 'd', 'd', 'e', 'n', ' ', 'H', 'i', 's', 't', 'o', 'r', 'y', ' ', 'o', 'f', ' ', 'B', 'u', 'r', 'm', 'a'};
    char HistoryBook_3[10] = {'1', '4', '9', '1'};

    printf(" 1. %s\n", HistoryBook_1);
    printf(" 2. %s\n", HistoryBook_2);
    printf(" 3. %s\n", HistoryBook_3);

    while (true){

        printf("Enter the book's number which you want => ");
        scanf("%d", &Book_num);

        switch (Book_num) {

            case 1:
                printf("%s\n", HistoryBook_1);
                printf("Author  =  William L. Shirer\n");
                printf("Book id = 201\n");
                break;

            case 2:
                printf("%s\n", HistoryBook_2);
                printf("Author  = U Thant Myint\n");
                printf("Book id = 202\n");
                break;

            case 3:
                printf("%s\n", HistoryBook_3);
                printf("Author  = Charles C. Mann\n");
                printf("Book id = 203\n");
                break;

            default:
                printf("Enter the Book number that we have.\n");
        }

        printf("If you want to chose again, press 1 => ");
        scanf("%d", &chose_again);

        if (chose_again != 1) {
            break;
        }

    }

}

void Engineer_Books(){

    int chose_again = 0;
    int Book_num = 0;
    char EngineerBook_1[20] = {'E', 'l', 'e', 'c', 't', 'r', 'o', 'n', 'i', 'c', ' ', 'D', 'e', 'v', 'i', 'c', 'e','s'};
    char EngineerBook_2[30] = {'E', 'n', 'g', 'i', 'n', 'e', 'e', 'i', 'n', 'g', ' ', 'M', 'e', 'c', 'h', 'a', 'n', 'i', 'c', 's'};
    char EngineerBook_3[30] = {'D', 'i', 'g', 'i', 't', 'a', 'l', ' ', 'F', 'u', 'n', 'd', 'a', 'm', 'e', 'n', 't', 'a', 'l'};

    printf(" 1. %s\n", EngineerBook_1);
    printf(" 2. %s\n", EngineerBook_2);
    printf(" 3. %s\n", EngineerBook_3);

    while (true){

        printf("Enter the book's number which you want => ");
        scanf("%d", &Book_num);


        switch (Book_num) {

            case 1:
                printf("%s\n", EngineerBook_1);
                printf("Author  = Thomas L. Floyd\n");
                printf("Book id = 301\n");
                break;

            case 2:
                printf("%s\n", EngineerBook_2);
                printf("Author  =  Russell Hibbeler\n");
                printf("Book id = 302\n");
                break;

            case 3:
                printf("%s\n", EngineerBook_3);
                printf("Author  = Thomas L. Floyd\n");
                printf("Book id = 303\n");
                break;

            default:
                printf("Enter the Book number that we have.\n");
        }

        printf("If you want to chose again, press 1 => ");
        scanf("%d", &chose_again);

        if(chose_again != 1){
            break;
        }

    }

}

void Linux_Books(){

    int chose_again = 0;
    int Book_num = 0;
    char LinuxBook_1[20] = {'L', 'i', 'n', 'u', 'x', ' ', 'B', 'i', 'b', 'l', 'e'};
    char LinuxBook_2[30] = {'H', 'o', 'w', ' ', 'L', 'i', 'n', 'u', 'x', ' ', 'W', 'o', 'r', 'k', 's'};
    char LinuxBook_3[30] = {'L', 'i', 'n', 'u', 'x', ' ', 'P', 'o', 'c', 'k', 'e', 't', ' ', 'G', 'u', 'i', 'd', 'e'};

    printf(" 1. %s\n", LinuxBook_1);
    printf(" 2. %s\n", LinuxBook_2);
    printf(" 3. %s\n", LinuxBook_3);

    while (true){

        printf("Enter the book's number which you want => ");
        scanf("%d", &Book_num);


        switch (Book_num) {

            case 1:
                printf("%s\n", LinuxBook_1);
                printf("Author  = Negus Chris\n");
                printf("Book id = 401\n");
                break;

            case 2:
                printf("%s\n", LinuxBook_2);
                printf("Author  = Brian Ward\n");
                printf("Book id = 402\n");
                break;

            case 3:
                printf("%s\n", LinuxBook_3);
                printf("Author  = Daniel J. Barrett\n");
                printf("Book id = 403\n");
                break;

            default:
                printf("Enter the Book number that we have.\n");
        }

        printf("If you want to chose again, press 1 => ");
        scanf("%d", &chose_again);

        if(chose_again != 1){
            break;
        }
    }

}
