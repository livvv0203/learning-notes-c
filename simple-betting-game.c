/**
 * @file simple-betting-game.c
 * @author Jieqing (you@domain.com)
 * @brief Simple betting game - 'Jack Queen King'
 * @version 0.1
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int cash = 100;

void Play(int bet) {
    char C[3] = {'J', 'Q', 'K'};
    printf("Shuffling...\n");
    // Make a random shuffle cards
    srand(time(NULL));

    int i;
    for (i = 0; i < 5; i++) {
        int x = rand() % 3; // between 0 and 2
        int y = rand() % 3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp;
    }

    int playersGuess; // 2
    
    printf("What is the position of queen? 1, 2, or 3? ");
    scanf("%d", &playersGuess);
    
    if (C[playersGuess - 1] == 'Q') {
        cash += 3 * bet;
        printf("You win! Result = %c, %c, %c ------ Total Cash = %d\n", C[0], C[1], C[2], cash);
    } else {
        cash -= bet;
        printf("AHAAA You lose! Result = %c, %c, %c ------ Total Cash = %d\n", C[0], C[1], C[2], cash);
    }
}

int main() {
    int bet;

    printf("\n----Welcome to Jieqing's Virtual Casino.----\n");
    printf("Total Cash = $%d\n", cash);

    while(cash > 0) {
        printf("What is your bet? $");
        scanf("%d", &bet);
        if (bet == 0 || bet > cash) break;
        Play(bet);
        printf("\n**********************************\n");
    }
    return 0;
}





