#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
void available_tools();
void change_password(char new_pass[], char user_dev_pass[]);

int checkPassword(char password[], char user_pass[])
{
  /*printf("%s\n", password);
  printf("%s\n", user_pass);
  if (strcmp(password, user_pass) == 0)
  {

    return 1;
  }
  else if (strcmp(password, user_pass) > 0 || strcmp(password, user_pass) < 0)
  {
    return 0;
  }*/
  int a = strcmp(password, user_pass);

  return a;
}

int main()
{
WRONG_PASS:
  int recieve;
  int auto_cad = 0;
  int matlab = 0;
  int ms_word = 0;
  int powerpoint = 0;
  int ms_excel = 0;
  int choice;
  char user_dev_pass[100];
  int user_choice;
  FILE *fptr;
  int tool;

  // Introduction Screen
  // printf("\t\t\t\t_______________________________");
  // printf("\v");

  printf("\n\t\t\t\t_____________________________\n");
  printf("\t\t\t\t\t\t\t\t\n\t\t\t\t\tAMURoboclub \t\t\t\t\t \n\t\t\t\t Inventory Management System\t\t\t\t\t");

  printf("\n\t\t\t\t_____________________________\n");

  // Team Verification
  printf("\n");
  printf("\t\t\t     Enter your Team Verification Password:- ");
  char password[] = "1234";
  char user_pass[100];
  scanf("%s", user_pass);

  int res = checkPassword(password, user_pass);
  if (res == 0)
  {
    printf("\n\n\t\t\t     Welcome to the Inventory Management System\t\t\t\t\n\n\n");
    printf("\t\t\t   Please mention the number corresponding to your choice:-\t\t\t\n");
    printf("\n\t\t\t    Press \" 1 \" for developer options\t\t\t");
    printf("\n\t\t\t    Press \" 2 \" for user options\t\t\t");
    printf("\n\t\t\t    ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      char dev_pass[] = "4321";
      printf("\n\t\t\t    Enter your current Password");
      scanf("%s", user_dev_pass);

      int b = checkPassword(dev_pass, user_dev_pass);
      if (b == 0)
      {
        printf("\n\t\t\t   Accesed Dev Options\n\t\t\t");
        printf("\n\t\t\t   Press \"1\" for Updating the Password\t\t\t ");
        char new_pass[100];
        printf("\n\t\t\t Enter the new Password\t\t\t\n");
        scanf("%s", new_pass);

        if (strcmp(new_pass, user_dev_pass) == 0)
        {
          change_password(new_pass, user_dev_pass);
          printf("\nCongratulations, the password has been changed.\t\n");
          goto menu;
        }
      }
      else
      {
        goto WRONG_PASS;
      }

      break;
    case 2:
    menu:
      printf("\n\t\t\t  You have entered the user menu \t\t\t\n\n");

      printf("Press \"1\" for issuing a tool\t\t\t\n");
      printf("Press \"2\" for returning a tool\t\t\t\n");
      printf("Press \"3\" for showing the list of availaible tools\t\t\t\n");
      printf("Press \"4\" exit\t\t\t\n");

      scanf("%d", &tool);
      switch (tool)
      {

      case 1:
        available_tools();
        printf("Enter the tool that you want to issue\n");
        scanf("%d", &recieve);
        switch (recieve)
        {
        case 1:
        {
          if (auto_cad == 0)
          {
            auto_cad++;
            printf("AutoCad has been issued\n");
            goto menu;
            break;
          }
          else
          {
            printf("AutoCad is already issued\n");
            goto menu;
            break;
          }
        }

        case 2:
        {
          if (matlab == 0)
          {
            matlab++;
            printf("Matlab has been issued\n");
            goto menu;
            break;
          }
          else
          {
            printf("Matlab is already issued\n");
            goto menu;
            break;
          }
        }
        case 3:
        {
          if (ms_word == 0)
          {
            ms_word++;
            printf("MS Word has been issued\n");
            goto menu;
            break;
          }
          else
          {
            printf("MS Word is already issued\n");
            goto menu;
            break;
          }
        }

        case 4:
        {
          if (powerpoint == 0)
          {
            powerpoint++;
            printf("Powerpoint has been issued\n");
            goto menu;
            break;
          }
          else
          {
            printf("Powerpoint is already issued\n");
            goto menu;
            break;
          }
        }

        case 5:
        {
          if (ms_excel == 0)
          {
            ms_excel++;
            printf("MS excel has been issued\n");
            goto menu;
            break;
          }
          else
          {
            printf("MS excel is already issued\n");
            goto menu;
            break;
          }
        }

        default:

          printf("\nInvalid Choice");
          break;
        }

        break;

      case 2:
      {
        available_tools();
        printf("Enter the tool you want to return\n");
        scanf("%d", &recieve);

        switch (recieve)
        {
        case 1:
        {
          if (auto_cad == 1)
          {
            auto_cad--;
            printf("AutoCad has been returned\n");
            goto menu;
            break;
          }
          else
          {
            printf("AutoCad is not issued\n");
            goto menu;
            break;
          }
        }

        case 2:
        {
          if (matlab == 1)
          {
            matlab--;
            printf("Matlab has been returned\n");
            goto menu;
            break;
          }
          else
          {
            printf("Matlab is not issued\n");
            goto menu;
            break;
          }
        }

        case 3:
        {
          if (ms_word == 1)
          {
            ms_word--;
            printf("MS Word has been returned\n");
            goto menu;
            break;
          }
          else
          {
            printf("MS Word is not issued\n");
            goto menu;
            break;
          }
        }

        case 4:
        {
          if (powerpoint == 1)
          {
            powerpoint--;
            printf("Powerpoint has been returned\n");
            goto menu;
            break;
          }
          else
          {
            printf("Powerpoint is not issued\n");
            goto menu;
            break;
          }
        }

        case 5:
        {
          if (ms_excel == 0)
          {
            ms_excel--;
            printf("MS excel has been returned\n");
            goto menu;
            break;
          }
          else
          {
            printf("MS excel is not issued\n");
            goto menu;
            break;
          }
        }

        default:

          printf("\nInvalid Choice");
          break;
        }
      case 4:
        exit(0);
      }
      }

      scanf("%d", &user_choice);
      if (user_choice == 3)
      {
        available_tools();
      }
      break;

    default:

      printf("\nInvalid Choice");
      break;
    }
  }
  else
  {
    printf("\t\t\tWrong password entered\t\t\t\n");
  }

  return 0;
}
void available_tools()
{
  printf("\n1. AutoCad\n2. MATLAB\n3. MS WORD\n4. MS PowerPoint\n5. MS Excel\n");
}
void change_password(char new_pass[], char user_dev_pass[])
{
  char temp[100];
  strcpy(temp, new_pass);
  strcpy(new_pass, user_dev_pass);
  strcpy(user_dev_pass, temp);
}