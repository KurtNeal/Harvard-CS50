#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// points
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string player_input);

int main(void)
{
    // get input
    string player_input1 = get_string("your word player 1?: \n");
    string player_input2 = get_string("your word player 2?: \n");

    int score1 = compute_score(player_input1);
    int score2 = compute_score(player_input2);

    if (score1 > score2)
    {
        printf("player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
int compute_score(string player_input)
{
    int score = 0;

    for (int i = 0; i < strlen(player_input); i++)
    {
        if (isupper(player_input[i]))
        {
            score = score + POINTS[player_input[i] - 65];
        }
        if (islower(player_input[i]))
        {
            score = score + POINTS[player_input[i] - 97];
        }
    }
    return score;
}
