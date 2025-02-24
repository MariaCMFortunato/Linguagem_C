#include <stdio.h>

struct card
{
    char *face;
    char *suit;
};

int main(void)
{
    struct card myCard;
    myCard.face = "Ace";
    myCard.suit = "Spades";

    struct card *cardPtr = &myCard;

    printf("Sem ponteiro: %s of %s", myCard.face, myCard.suit);
    printf("\nCom ponteiro: %s of %s", cardPtr->face, cardPtr->suit);
    printf("\nCom ponteiro(2): %s of %s", (*cardPtr).face, (*cardPtr).suit);
}