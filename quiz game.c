#include<stdio.h>
int point = 0;
void game_print();
int check_answer(char,int);
void game_end();
void main()
{
    char ch;
  
    printf("Welcome to the game\n\n");
    printf("Made by Divesh\n\n");
    printf("Want to start the game? y/n\n\n");
    scanf("%c", &ch);
  
    if(ch == 'n'||ch == 'N')
    {
        exit(0);
    }
   
    game_print();
   
    game_end();

}

void game_print()
{
    system("cls");
    char ch[5];
    int i;
  
    char question[5][100]={"How many countries have adopted \'EURO\' Currency ? ", "\'Ecology\' is the study of relationships between; ","Which of the following is not a computer language ","If a clock strikes 12 in 33 seconds, it will strike 6 in how many seconds ? ","What is green gold "};

    char setA[4][20] = {"A. 6 \t\t","B. 7\n","C. 9\t\t","D. 12\n\n"};
    char setB[4][50] = {"A. plants and animal \t\t","B. plants and the sun\n","C. humans and the earth\t\t","D. organisms and their environment\n\n"};
    char setC[4][20] = {"A. Cobal \t\t","B. Fortran\n","C. IBM\t\t\t","D. Perl\n\n"};
    char setD[4][20] = {"A. 33/2 \t\t","B. 15\n","C. 12\t\t\t","D. 22\n\n"};
    char setE[4][20] = {"A. Tea\t\t","B. coffee\n","C. Gold\t\t","D. Rice\n\n"};

    for (i = 0; i < 5; i++)
    {
        system("cls");

        printf("\n\n%s\n\n\n",question[i]);

        switch (i)
        {
        case 0:
            printf("%s%s%s%s",setA[0],setA[1],setA[2],setA[3]);
            break;

        case 1:
            printf("%s%s%s%s",setB[0],setB[1],setB[2],setB[3]);
            break;

        case 2:
            printf("%s%s%s%s",setC[0],setC[1],setC[2],setC[3]);
            break;

        case 3:
            printf("%s%s%s%s",setD[0],setD[1],setD[2],setD[3]);
            break;

        case 4:
            printf("%s%s%s%s",setE[0],setE[1],setE[2],setE[3]);
            break;

        default:
            break;
        }
    
        getchar();
        scanf("%c",&ch[i]);
        check_answer(ch[i],i);
    }
    printf("%d\n",point);
}

int check_answer(char a, int i)
{
    char answer[10][100] = {"12", "Organisms and their environment", "IBM", "22", "Tea"};
    char option[5] = {'D','D','C','D','A'};
    char optionL[5]={'d','d','c','d','a'};
  
    if(option[i]==a || optionL[i]==a)
    {
        point++;
    }
    else
    {
        return 0;
    }
}

void game_end()
{
    system("cls");
    printf("\n\nThanks for playing with us !");
    printf("\n\n your total score %d/5\n\n\n\n\n\n",point);
}
