#include <stdio.h>
#include <windows.h>
#include<stdbool.h>
//general functions 
void SetColor(int ForgC)
{
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //To mask out all but the background attribute, and to add the color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
}
void Floorone();
void room203()
{
  int opt1;
  SetColor(38);
  printf("This room belonged to Sam. You can see sam lying dead on the floor with a knife sticking out of his back,\n");
  printf("There is some rope fallen in the room under the window sill.\n");
  printf("There is also a lighter on his desk.\n");
  SetColor(40);
  printf("1) To inspect the knife\n");
  printf("2) To inspect the lighter\n");
  printf("3) To inspect the rope\n");
  printf("4) To leave the room.\n");
  printf("Enter your choice: ");
  while(true){
  scanf("%d",&opt1);
  if (opt1==1)
  {
    printf("This is a standard kitchen knife that can be found in any supermarket.\n\n");
  }
  else if (opt1==2)
  {
    printf("This classic Green Matte Zippo Windproof lighter boasts a mossy green finish, \n");
    printf("accenting an antique anatomy manuscript of the human skull.\n\n");
  }
  else if (opt1==3)
  {
    printf("This is a thick rope with red and black accents.\n\n");
  }
  else if (opt1==4)
  {
    break;
  }
  else{
    SetColor(44);
    printf("Enter a valid choice!");
    SetColor(40);
  }
  }
  Floorone();
  }
void room202()
{
  int opt2;
  SetColor(38);
  printf("This room belonged to Cara. Nothing unusual to see here, although there is an item in this room,\n\n");
  SetColor(40);
  printf("1) To inspect the item\n");
  printf("2) To leave the room\n");
  printf("Enter your choice: ");
  while(true){
  scanf("%d",&opt2);
  if (opt2==1)
  {
    printf("Just a normal GPS.\n\n");
  }
  else if (opt2==2)
  {
    break;
  }
  else{
    SetColor(44);
    printf("Enter a valid choice!");
    SetColor(40);
  }
  }
  Floorone();
}
void room201()
{
  int opt2;
  SetColor(38);
  printf("This room belonged to Lucy. Nothing unusual to see here, although there is an item in this room,\n\n");
  SetColor(40);
  printf("1) To inspect the item\n");
  printf("2) To leave the room\n");
  printf("Enter your choice: ");
  while(true){
  scanf("%d",&opt2);
  if (opt2==1)
  {
    printf("Just a normal compass.\n\n");

  }
  else if (opt2==2)
  {
    break;
  }
  else{
    SetColor(44);
    printf("Enter a valid choice!");
    SetColor(40);
  }
  }
  Floorone();
  }
void Floortwo();
void room302()
{
  int opt2;
  SetColor(38);
  printf("This room belonged to Emma. Nothing unusual to see here, although there is an army knife in this room,\n\n");
  printf("1) To inspect the item\n");
  printf("2) To leave the room\n");
  printf("Enter your choice: ");
  while(true){
  scanf("%d",&opt2);
  if (opt2==1)
  {
    printf("It is an Sheffield British Army Vintage Folding Jungle/Burma Jack Clasp Knife.\nEmma's dad gave it to her before he passed\n");
  }
  else if (opt2==2)
  {
    break;
  }
  else{
    SetColor(44);
    printf("Enter a valid choice!");
    SetColor(40);
  }
  }
  Floortwo();
  }

void room301()
{
  int opt2;
  SetColor(38);
  printf("This room belonged to Bruce. Nothing unusual to see here, although there is an item in this room,\n\n");
  printf("1) To inspect the item\n");
  printf("2) To leave the room\n");
  printf("Enter your choice: ");
  while(true){
  scanf("%d",&opt2);
  if (opt2==1)
  {
    printf("An old Nikon F2 vintage film camera. Though its dated back to 1971, it is one of Bruce's recent purchases.\n\n");
  }
  else if (opt2==2)
  {
    break;
  }
  else{
    SetColor(44);
    printf("Enter a valid choice!");
    SetColor(40);
  }
  }
  Floortwo();
  }
void groundFloor()
{
    SetColor(35);
    printf("___________________________________________________\n");
    printf("|   stairs                                        |\n");
    printf("|     up          reception                       |\n");
    printf("|    ____       ______________                    |\n");
    printf("|    |//|       |            |                    |\n");
    printf("|____|//|_______|____________|____________________|\n");

}

void firstFloor()
{
    SetColor(35);
    printf("_____________________________________________________\n");
    printf("|");
    SetColor(44);
    printf("  stairs  stairs                              ");
    SetColor(35);
    printf("      |\n");
    printf("|");
    SetColor(44);
    printf("   down     up       201   202    203     204");
    SetColor(35);
    printf("       |\n");
    printf("|   ____    ____     ____   ____   ____   ____       |\n");
    printf("|   |//|    |//|     |  |   |  |   |  |   |  |       |\n");
    printf("|___|//|____|//|_____|  |___|  |___|  |___|  |_______|\n");

}

void secondFloor()
{
    SetColor(35);
    printf("___________________________________________________\n");
    printf("|");
    SetColor(44);
    printf("           301    302   303    304");
    SetColor(35);
    printf("               |\n");
    printf("|   ____    ____   ____  ____   ____              |\n");
    printf("|   |//|    |  |   |  |  |  |   |  |              |\n");
    printf("|___|//|____|__|___|  |__|  |___|  |______________|\n");

}

void Floortwo()
{
    SetColor(38);
    printf("You have entered floor 2.\n");
    printf("The floor has 4 rooms, 301 which belonged to Bruce,\n 302 which belonged to Emma, 303 belonged to Ethan and 304 was empty.\n");
    secondFloor();
    SetColor(40);
    printf("1) Search room 301.\n");
    printf("2) Search room 302.\n");
    printf("3) Search room 303.\n");
    printf("4) Search room 304.\n");
    printf("5) Go to floor 1.\n");
    printf("6) Go to ground floor.\n");
}

void Floorone()
{
    SetColor(38);
    printf("You have entered floor 1.\n");
    printf("The floor has 4 rooms, 201 belonged to Lucy,\n 202 belonged to Cara, 203 belonged to Sam and 204 was empty.\n");
    firstFloor();
    SetColor(40);
    printf("1) Search room 201.\n");
    printf("2) Search room 202.\n");
    printf("3) Search room 203.\n");
    printf("4) Search room 204.\n");
    printf("5) Go to floor 2.\n");
    printf("6) Go to ground floor.\n");
}

void Floorzero()
{
    SetColor(38);
    printf("You have entered the ground floor.\n");
    printf("The students are sitting next to the reception.\n");
    groundFloor();
    SetColor(40);
    printf("1) Search the reception.\n");
    printf("2) Interrogate students.\n");
    printf("3) Make an accusation.\n");
    printf("4) Go to floor 1.\n");
    printf("5) Go to floor 2.\n");
}

void Bruce()
{
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("How do you know Sam? \n");
    SetColor(44);
    printf("Bruce: ");     SetColor(46); printf("Detective, Sam was my best friend, We've known each other since kindergarten. Why would i try to... \n");
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("Hmm, alright. Where were you at the night of murder? \n");
    SetColor(44);
    printf("Bruce: ");     SetColor(46); printf("I went to bed early that night. I'd say around 9-ish \n");
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("Thank you, Bruce. Take care.\n");
}
void Ethan()
{
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("The others have let me know you were jealous of Sam. Is that true Ethan? \n");
    SetColor(44);
    printf("Ethan: ");     SetColor(46); printf("*distressed voice* Who told you so? \n");
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("That shouldn't matter. Answer the question you've been asked.\n");
    SetColor(44);
    printf("Ethan: ");     SetColor(46); printf("Okay, yes i was! He was always better than me at everything. In sports or academics, but i would never go to"
           "the extent to murder him. \n");
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("Right. Did you notice anything else?\n");
    SetColor(44);
    printf("Ethan: ");     SetColor(46); printf("I did see Emma going to meet Sam around 8:45.\n");
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("Thank you, Ethan.\n");
}
void Lucy()
{
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("Lucy, I have a few ques- \n");
    SetColor(44);
    printf("Lucy: ");     SetColor(46); printf("*sobbing* I loved Sam!! I would never do that to Sam...  \n");
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("I'm sorry for your loss Lucy. Did you notice anything unusual? \n");
    SetColor(44);
    printf("Lucy: ");     SetColor(46); printf("I was tossing and turning in my bed when i heard the sound of a window creaking, but i didn't think anything of it. \n");
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("That's interesting, thank you for your time Lucy, please take care of yourself. \n");
}
void Cara()
{
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("Who do you think could've done it? \n");
    SetColor(44);
    printf("Cara: ");     SetColor(46); printf("I can vouch for Lucy, she loved Sam and she couldn't be the one. But Ethan... \n");
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("What about Ethan? \n");
    SetColor(44);
    printf("Cara: ");     SetColor(46); printf("He was always jealous of Sam because Sam was better than him at most things. \n"); // ethan loves lucy but lucy don't so??
    printf("The detective takes out an evidence bag revealing a piece of rope.\n");
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("This rope was found in Ethan's room. Do you know who it could belong to? \n");
    SetColor(44);
    printf("Cara: ");     SetColor(46); printf("It looks familiar. Ethan was carrying some rope and this looks similar to it. \n");
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("Thank you Cara. You can leave now.\n");
}
void Emma()
{
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("When was the last time you talked to Sam?\n");
    SetColor(44);
    printf("Emma: ");     SetColor(46); printf("I had gone to return Sam his lighter back and i saw Lucy exiting his room and go to hers. \n");
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("Do you have any idea as to who could've done it? \n");
    SetColor(44);
    printf("Emma: ");     SetColor(46); printf("It could be any of them. I  most definitely don't think it's Ethan. I know he's a great guy and he would never do such a thing. \n");
    SetColor(44);
    printf("Detective: ");     SetColor(46); printf("Thank you, Emma. \n");
}
void interrogation()
{
    int option;
    SetColor(38);
    printf("Who would you like to interrogate? \n");
    SetColor(40);
    printf("1) Interrogate Bruce\n");
    printf("2) Interrogate Ethan\n");
    printf("3) Interrogate Lucy\n");
    printf("4) Interrogate Cara\n");
    printf("5) Interrogate Emma\n");
    printf("6) Go back to reception \n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    switch(option)
    {
    case 1:
        Bruce();
        break;
    case 2:
        Ethan();
        break;
    case 3:
        Lucy();
        break;
    case 4:
        Cara();
        break;
    case 5:
        Emma();
        break;
    case 6:
        Floorzero();
        break;
    default:
        printf("Sorry, who you would like to interrogate again? \n");
        break;
    }
    SetColor(38);
}
void OptionFloorOne();
void OptionFloorTwo();
void OptionFloorZero()
{
    int option;
    while(true)
    {
        printf("Enter your choice:\n");
        scanf("%d",&option);
        printf("\n");
        //if (option == 1)
        //{
        //    Floorzero();
        //}
        if (option == 2)
        {
            interrogation();
            printf("You go back to the lobby.\n");
            OptionFloorZero();
        }
        else if (option == 4)
        {
            Floorone();
            OptionFloorOne();
        }
        else if (option == 5)
        {
            Floortwo();
            OptionFloorTwo();
        }
        else
        {
            SetColor(44);
            printf("The response to this input is out of the scope of\n this game as of now.Please try another option.\n");
            SetColor(38);
            OptionFloorZero();
        }
    }
}
void OptionFloorTwo();
void OptionFloorOne()
{
    int option;
    while(true)
    {
        printf("Enter your choice:\n");
        scanf("%d",&option);
        printf("\n");
        if (option == 1)
        {
            room201();
        }
        else if (option == 2)
        {
           room202();
        }
        else if (option == 3)
        {
            room203();
        }
        else if (option == 4)
        {
          printf("This room is completely empty and there is nothing to see here.\n");
        }
        else if (option == 5)
        {
            Floortwo();
            OptionFloorTwo();
        }
        else if (option == 6)
        {
            Floorzero();
            OptionFloorZero();
        }
        else
        {
            SetColor(44);
            printf("The response to this input is out of the scope of\n this game as of now.Please try another option.\n");
            SetColor(38);
            OptionFloorOne();
        }
    }
}

void OptionFloorTwo()
{
    int option;
    while(true)
    {
        printf("Enter your choice:\n");
        scanf("%d",&option);
        printf("\n");
        if (option == 1)
        {
            room301();
        }
        else if (option == 2)
        {
           room302();
        }
        else if (option == 3)
        {
          SetColor(38);
          printf("This room belonged to Ethan. It is very clean as though he had deliberately cleaned it.\nNothing out of order and no items in sight.\nYou leave the room.\n");
          SetColor(40);
        }
        else if (option == 4)
        {
            printf("This room is completely empty and there is nothing to see here.\n");
        }
        else if (option == 5)
        {
            Floorone();
            OptionFloorOne();
        }
        else if (option == 6)
        {
            Floorzero();
            OptionFloorZero();
        }
        else
        {
            SetColor(44);
            printf("The response to this input is out of the scope of\n this game as of now.Please try another option.\n");
            SetColor(38);
            OptionFloorTwo();
        }
    }
}

int main()
{
    char o;
    SetColor(38);
    printf( "Our story starts of with 6 high school students [Sam, Ethan, Bruce, Cara, Lucy and Emma] who visit an"
            "abandoned village far off from civilization for their summer report. They left early in the morning and"
            "reached the village at almost 5PM. The village \'Inuyama\' had been abandoned since 1980. It was originally"
            "a village full of farmers, the only thing that was even remotely modern was the old hotel present at the"
            "center of the village, which was constructed in the early 70's for travelers transiting through the village."
            "After exploring the village for a while, it started getting dark so they decided to look for a place to"
            "stay the night. They decided on staying at the old hotel as it was too cold to camp outside. On reaching"
            "the hotel they found it to be abandoned. A map on the wall indicated two floors (excluding the reception),"
            "each with four rooms respectively. They all chose their specific rooms and took their room keys from the reception."
            "They decided to leave all their equipment in the storage room and gave the key to Emma. They then gestured each"
            "other good night and went to their respective rooms. In the morning they woke up and met at the reception, but "
            "Sam was nowhere to be seen. They knocked at his door for about 5 minutes and finally resorted to opening the"
            "door with the master key only to find Sam dead on the floor with his knife sticking out his back. You, the"
            "local detective, receive a call around 8AM in the morning and drive to the hotel. After listening to the"
            "story, you are all set to solve the case.\n");
    SetColor(35);
    printf("Do you want instructions on how to play?");
    SetColor(44);
    printf("[Y/N]\n");
    SetColor(39);
    scanf("%c",&o);
    switch (o)
    {
    case 'Y':
        SetColor(38);
        printf("The instructions:\n*Input the option number corresponding to the option.\n*Look for clues and make an accusation to find the killer.\n*For an accusation you need a name and an item.\n*Most importantly have fun :)\n");
        printf("Seems like you're all set to begin so here we go\n\n\n\n");
        Floorzero();
        OptionFloorZero();
        break;
    default:
        SetColor(38);
        printf("Seems like you're all set to begin so here we go\n\n\n\n");
        Floorzero();
        OptionFloorZero();
        break;
    }
}
