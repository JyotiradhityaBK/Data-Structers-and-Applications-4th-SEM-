#include <stdio.h>
struct cricket_player
{
char player_name[20];
char team_name[20];
float average;
int highest_score;
int centuries;
int ODI_rank;
};
void display(struct cricket_player);
void main()
{
struct cricket_player p1={"Virat","INDIA",59.76,183,39,1};
display(p1);
}

void display(struct cricket_player p1)
{
printf("%s,%f,%d",p1.player_name,p1.average,p1.ODI_rank);
}

