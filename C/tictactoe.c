#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mark, board[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int result = 0, player = 1, input, count;

    for (int i = 1; i > 0; player++)
    {
        printf("\n\n");
        printf("=== TIC TAC TOE ===\n\n");
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c  \n", board[1], board[2], board[3]);
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c  \n", board[4], board[5], board[6]);
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c  \n", board[7], board[8], board[9]);
        printf("     |     |     \n");
        printf("\n\n");

        player = (player % 2 == 0) ? 2 : 1;
    again:
        printf("Please Enter Box Number For Player %d\n", player);
        scanf("%d", &input);
        if (input < 1 || input > 9)
        {
            printf("invalid input\n");
            goto again;
        }

        mark = (player == 1) ? 'X' : 'O';
        board[input] = mark;

        if (board[1] == board[2] && board[2] == board[3])
        {
            result = 1;
            break;
        }
        else if (board[1] == board[4] && board[4] == board[7])
        {
            result = 1;
            break;
        }
        else if (board[7] == board[8] && board[8] == board[9])
        {
            result = 1;
            break;
        }
        else if (board[3] == board[6] && board[6] == board[9])
        {
            result = 1;
            break;
        }
        else if (board[1] == board[5] && board[5] == board[9])
        {
            result = 1;
            break;
        }
        else if (board[3] == board[5] && board[5] == board[7])
        {
            result = 1;
            break;
        }
        else if (board[2] == board[5] && board[5] == board[8])
        {
            result = 1;
            break;
        }
        else if (board[4] == board[5] && board[5] == board[6])
        {
            result = 1;
            break;
        }

        count = 0;
        for (int j = 1; j <= 9; j++)
        {
            if (board[j] == 'X' || board[j] == 'O')
            {
                count++;
            }
        }

        if (count == 9)
        {
            result = 2;
            break;
        }
        system("cls");
    }
    if (result == 1)
    {
        system("cls");
        printf("\n\n");
        printf("=== TIC TAC TOE ===\n\n");
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c  \n", board[1], board[2], board[3]);
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c  \n", board[4], board[5], board[6]);
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c  \n", board[7], board[8], board[9]);
        printf("     |     |     \n");
        printf("\n\n");
        printf("Player %d is the Winner", player);
    }
    else if (result == 2)
    {
        system("cls");
        printf("\n\n");
        printf("=== TIC TAC TOE ===\n\n");
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c  \n", board[1], board[2], board[3]);
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c  \n", board[4], board[5], board[6]);
        printf("_____|_____|_____\n");
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c  \n", board[7], board[8], board[9]);
        printf("     |     |     \n");
        printf("\n\n");
        printf("draw");
    }

    return 0;
}