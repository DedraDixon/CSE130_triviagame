#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int timer(int seconds){
    sleep(seconds);
    return 0;
}

        

//Normal question functions
int function_western(int points){
    int answer = 0;
  
    system("clear");//stdlib.h
    printf("1.    What is the Mascot of the University of Washington?\n\t1. Husky\n\t2. Dog\n\t3. Sheep\n\t4. Wolve\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 1){
    points = points + 2;
    printf ("Good job! Your current score in the Western category is: %d\n", points);
    timer(2);
    } else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
        

    system("clear");//stdlib.h
    printf ("2.    What is the Mascot of Portland State University?\n\t1. Knight\n\t2. Viking\n\t3. Prince\n\t4. Queen\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 2){
        points = points + 2;
        printf ("Good job! Your current score in the Western category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
        

    system ("clear");//stdlib.h
    printf("3.    What is the Mascot of Seattle University?\n\t1. Penguin\n\t2. Skua\n\t3. Redhawk\n\t4. Bluebird\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 3){
        points = points + 2;
        printf ("Good job! Your current score in the Western category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
        
  
    system ("clear");//stdlib.h
    printf ("4.    What is the Mascot of the University of Wyoming?\n\t1. Pistol Pete\n\t2. Randy Rider\n\t3. Cowboy Will\n\t4. Rancher Steve\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 1){
        points = points + 2;
        printf ("Good job! Your current score in the Western category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
        

    system ("clear");//stdlib.h
    printf ("5.    What is the Mascot of the University of Alaska?\n\t1. Bear\n\t2. Hawk\n\t3. Beast\n\t4. Nanook\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 4){
        points = points + 2;
        printf ("Good job! Your current score in the Western category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
        

    system ("clear");//stdlib.h
    printf ("6.    What is the Mascot of Oregon State University?\n\t1. Cougar\n\t2. Lion\n\t3. Beaver\n\t4. Cat\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 3){
        points = points + 2;
        printf ("Good job! Your current score in the Western category is: %d\n", points);
        timer (2);
        }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
        
  
    return points;
}

int function_eastern (int points){
    
    int answer = 0;
    
    system ("clear");//stdlib.h
    printf("1.    What is the mascot for the University of Virginia? \n\t1. Pistol Pete\n\t2.Gus the Gorilla\n\t3. Big Red\n\t4. Cavalier\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 4){
    points = points + 2;
    printf ("Good job! Your current score in the Eastern category is: %d\n", points);
    timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
        
    
    system ("clear");//stdlib.h
    printf ("2.    What is the mascot of Penn State University?\n\t1. Nittany Lion\n\t2. Purdue Pete\n\t3. Lil’ Red\n\t4. Big Al\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 1){
        points = points + 2;
        printf ("Good job! Your current score in the Eastern category is: %d\n", points);
        timer (2);
    } else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
        
    system ("clear");//stdlib.h
    printf("3.    What is the mascot of New York University?\n\t1. Zippy\n\t2. Brutus Buckeye\n\t3. Mike the Tiger\n\t4. Bobcat\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 4){
        points = points + 2;
        printf ("Good job! Your current score in the Eastern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    system ("clear");//stdlib.h
    printf ("4.    What is the mascot of the University of Connecticut?\n\t1. Smokey\n\t2. Johnathan the Husky\n\t3. Uga\n\t4. The Blue Blob\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 2){
        points = points + 2;
        printf ("Good job! Your current score in the Eastern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    system ("clear");//stdlib.h
    printf ("5.    What is the mascot of Harvard University?\n\t1. Cayenne\n\t2. Artie the Artichoke\n\t3. John Harvard the pilgrim\n\t4. Peter the Anteater\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 3){
        points = points + 2;
        printf ("Good job! Your current score in the Eastern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    system ("clear");//stdlib.h
    printf ("6.    What is the mascot of Boston University?\n\t1. Rhett the Boston Terrier\n\t2. Bucky Badger\n\t3. Sammy the Slug\n\t4. Sparty\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 1){
        points = points + 2;
        printf ("Good job! Your current score in the Eastern category is: %d\n", points);
        timer (2);
        }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    return points;
}

int function_southern (int points){

    int answer = 0;
    
    system ("clear");//stdlib.h
    printf ("1.    What is the mascot for Texas A&M University?\n\t1. Reveille the Dog\n\t2. Porky the Pig\n\t3. Gary the Turtle\n\t4. Pepe the Frog\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
    if (answer == 1){
        points = points + 2;
        printf ("Good job! Your current score in the Southern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
        
    system ("clear");//stdlib.h
    printf ("2.    What is the mascot for the University of Tennessee?\n\t1. Ralphie\n\t2. Smokey\n\t3. JoJo\n\t4. Thrifty\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
    if (answer == 2){
        points = points + 2;
        printf ("Good job! Your current score in the Southern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
        
    system ("clear");//stdlib.h
    printf ("3.    What is the mascot for the University of Alabama?\n\t1. Lefty Loosey\n\t2. Little Willy\n\t3. Big Al\n\t4. Bobo\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
    if (answer == 3){
        points = points + 2;
        printf ("Good job! Your current score in the Southern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
        
    system ("clear");//stdlib.h
    printf ("4.    What is the mascot for the University of Florida?\n\t1. Florida Man\n\t2. Albert Gator\n\t3. Beach Bum\n\t4. Sandy Cheeks\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
    if (answer == 2){
        points = points + 2;
        printf ("Good job! Your current score in the Southern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
        
    system ("clear");//stdlib.h
    printf ("5.    What is the mascot for the University of Georgia?\n\t1. Red the Rat\n\t2. Blue the Shoe\n\t3. Uga the Bulldog\n\t4. Ernest the Eucalyptus\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
    if (answer == 3){
        points = points + 2;
        printf ("Good job! Your current score in the Southern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    system ("clear");//stdlib.h
    printf ("6.    What is the mascot for the University of Louisville?\n\t1. Blue Jay\n\t2. Raven\n\t3. Dove\n\t4. Cardinal\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
    if (answer == 4){
        points = points + 2;
        printf ("Good job! Your current score in the Southern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    return points;
}

int function_northern (int points){

  int answer = 0;
    
    system ("clear");//stdlib.h
    printf("1.    What’s the mascot for Loyola University Maryland?\n\t1. Greyhound\n\t2. Gnarlz\n\t3. Scrappy the Eagle\n\t4. Dusty\n");
  printf("Please enter your selection: ");
  scanf("%d", &answer);
    if (answer == 1){
    points = points + 2;
    printf ("Good job! Your current score in the Northern category is: %d\n", points);
    timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    system ("clear");//stdlib.h
    printf ("2.    What’s the mascot for Bentley University?\n\t1. Fighting Pickle\n\t2. Flex the Falcon\n\t3. Freddie\n\t4. Ernie the Eagle\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 2){
        points = points + 2;
        printf ("Good job! Your current score in the Northern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    system ("clear");//stdlib.h
    printf("3.    What’s the mascot for Bryant University?\n\t1. Swoop\n\t2. Tuffy\n\t3. Uga\n\t4. Tupper the Bulldog\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 4){
        points = points + 2;
        printf ("Good job! Your current score in the Northern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    system ("clear");//stdlib.h
    printf ("4.    What’s the mascot for Fairfield University?\n\t1. The Stag\n\t2. Spike\n\t3. Rudy Flyer\n\t4. Rocky Steve\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 1){
        points = points + 2;
        printf ("Good job! Your current score in the Northern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    system ("clear");//stdlib.h
    printf ("5.    What’s the mascot for Rochester Institution of Technology?\n\t1. Ritchie the Tiger\n\t2. Roc the Panther\n\t3. Roary the Lion\n\t4. Rocky the Bull\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 1){
        points = points + 2;
        printf ("Good job! Your current score in the Northern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    system ("clear");//stdlib.h
    printf ("6.    What’s the mascot for the College of New Jersey?\n\t1. Rodney the Ram\n\t2.Roscoe the Lion\n\t3. Woody\n\t4. Yank\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 2){
        points = points + 2;
        printf ("Good job! Your current score in the Northern category is: %d\n", points);
        timer (2);
        }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    return points;
  }

//Easy question functions
int function_western_easy (int points){
    int answer = 0;
   

    system ("clear");//stdlib.h
    printf("1.    What is the Mascot of the Arizona State?\n\t1. Sparky\n\t2. Devils\n\t3. Suns\n\t4. Stars\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 1){
    points = points + 2;
    printf ("Good job! Your current score in the Western category is: %d\n", points);
    timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    
    system ("clear");//stdlib.h
    printf ("2.    What is the Mascot of the University of Wyoming?\n\t1. Pistol Pete\n\t2. Randy Rider\n\t3. Cowboy Will\n\t4. Rancher Steve\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 1){
        points = points + 2;
        printf ("Good job! Your current score in the Western category is: %d\n", points);
        timer (2);
}else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    system ("clear");//stdlib.h
    printf ("3.    What is the Mascot of University of Oregon?\n\t1. Beaver\n\t2. Eagles\n\t3. Duck\n\t4. Tigeres\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 3){
        points = points + 2;
        printf ("Good job! Your current score in the Western category is: %d\n", points);
        timer (2);
        }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    return points;
}

int function_eastern_easy (int points){
    int answer = 0;
    
    system ("clear");//stdlib.h
    printf("1.    What is the mascot for the Virginia Tech? \n\t1. The Clowns\n\t2. IT\n\t3. The Aliens\n\t4. HokieBird\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 4){
    points = points + 2;
    printf ("Good job! Your current score in the Eastern category is: %d\n", points);
    timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    system ("clear");//stdlib.h
    printf ("2.    What is the mascot of Penn State University?\n\t1. Nittany Lion\n\t2. Purdue Pete\n\t3. The Reds\n\t4. Big Al\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 1){
        points = points + 2;
        printf ("Good job! Your current score in the Eastern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    system ("clear");//stdlib.h
    printf ("3.    What is the mascot of Notre Dame?\n\t1. Fighting Natives\n\t2. Fighting British\n\t3. Fighting Irish\n\t4. The Fighting\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 3){
        points = points + 2;
        printf ("Good job! Your current score in the Eastern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    return points;
}

int function_southern_easy (int points){
    int answer = 0;
   
    

    system ("clear");//stdlib.h
    printf ("1.    What is the mascot for the Duke Unviersity?\n\t1. Stevens\n\t2. Blue Devils\n\t3. Angels\n\t4. Wing Fighters\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
    if (answer == 2){
        points = points + 2;
        printf ("Good job! Your current score in the Southern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
        
    system ("clear");//stdlib.h
    printf ("2.    What is the mascot for the University of Alabama?\n\t1. Lefty Loosey\n\t2. Little Willy\n\t3. Big Al\n\t4. Bobo\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
    if (answer == 3){
        points = points + 2;
        printf ("Good job! Your current score in the Southern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
            
    system ("clear");//stdlib.h
    printf ("3.    What is the mascot for the University of Louisville?\n\t1. Blue Jay\n\t2. Raven\n\t3. Dove\n\t4. Cardinal\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
    if (answer == 4){
        points = points + 2;
        printf ("Good job! Your current score in the Southern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    return points;
}

int function_northern_easy (int points){
  int answer = 0;
    
    system ("clear");//stdlib.h
    printf("1.    What is the mascot for University of Michigan?\n\t1. Wolverine\n\t2. Cats\n\t3. Dogs\n\t4. Beavers\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 1){
    points = points + 2;
    printf ("Good job! Your current score in the Northern category is: %d\n", points);
    timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    system ("clear");//stdlib.h
    printf ("2.    What is the mascot for Michigan State University?\n\t1. Angry Rivers\n\t2. Sparty\n\t3. Franklins\n\t4. Hawks\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 2){
        points = points + 2;
        printf ("Good job! Your current score in the Northern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
    
    system ("clear");//stdlib.h
    printf("3.    What is the mascot for Ohio State University?\n\t1. Dodgers\n\t2. Bulls\n\t3. Pistons\n\t4. Buckeyes\n");
    printf("Please enter your selection: ");
    scanf("%d", &answer);
        if (answer == 4){
        points = points + 2;
        printf ("Good job! Your current score in the Northern category is: %d\n", points);
        timer (2);
    }else {
      printf("Oh, no! It looks like you selected the wrong answer! Keep going!\n");
     timer(3);
  }
        return points;
}

//Ask the user if they would like easy or normal mode
int game_main (void) {
    int game_type;
  
    system ("clear");//stdlib.h
    printf("Would you like to play the easy or normal mode of the College Mascot Trivia Game?\n");
    printf("Please enter 0 for easy mode or 1 for normal mode: ");
    scanf("%d", &game_type);
    
  if (game_type == 0) {
    printf("You have chosen easy mode!");
    }
    
  else {
    
    printf("You have chosen normal mode!");
    }
    timer(2);
  return game_type;
}

//Normal mode game functions
int function_gamecat(int* p, int* g){
    int b;
    int gamecat = *g;
    int points = *p;
    
    system ("clear");//stdlib.h
    printf("You have 4 categories you can choose from: \n 1. Northern colleges \n 2. Southern colleges \n 3. Western colleges \n 4. Eastern colleges\n");
    printf("Please enter a category 1-4: ");
    scanf("%d", &gamecat);
    
    if (gamecat == 1){
        b = function_northern(points);
        printf ("Your total score for Northern Colleges is: %d out of 12 possible points!\n", b);
        points = points + b;
    
    } else if (gamecat == 2){
        b = function_southern(points);
        printf ("Your total score for Southern Colleges is: %d out of 12 possible points!\n", b);
        points = points + b;
    
    }else if (gamecat == 3){
        b = function_western(points);
        printf ("Your total score for Western Colleges is: %d out of 12 possible points!\n", b);
        points = points + b;
    } else {
        b = function_eastern(points);
        printf ("Your total score for Eastern Colleges is: %d out of 12 possible points!\n", b);
        points = points + b;
    }

    timer (2);
    printf ("Your total score is %d out of 48 possible points!\n", points);
    
    *p = points;
    *g = gamecat;
    
    
    return points;
}

int function_endgame(int* p, int* g) {
    
    int user_input = 0;
    int points = *p;

    
    system ("clear");//stdlib.h
    printf("Would you like to choose another category to continue playing or end the game? \n\t1. Choose another category\n\t2. End the game\n");
    scanf("%d", &user_input);
    
    while (user_input != 1 && user_input != 2){
        printf("Invalid selection. Please try again.\nWould you like to choose another category to continue playing or end the game? \n\t1. Choose another category\n\t2. End the game\n");
        scanf("%d", &user_input);
    }
    if (user_input == 1){
        for (user_input = 1; user_input < 4; user_input++) {
        function_gamecat(p, g);
        }
    }
    else {
        printf("You have chosen to end the game. Your total score was %d.", points);
    }
    return points;
}

//Easy mode game functions
int function_gamecat_easy(int* p, int* f){
    
    int a;
    
    int gamecat_easy = *f;
    int points = *p;
   
    system ("clear");//stdlib.h
    printf("You have 4 categories you can choose from: \n 1. Northern colleges \n 2. Southern colleges \n 3. Western colleges \n 4. Eastern colleges\n");
    printf("Please enter a category 1-4: ");
    scanf("%d", &gamecat_easy);
    
    if (gamecat_easy == 1){
        a = function_northern_easy(points);
        printf ("Your total score for Northern Colleges is: %d out of 6 possible points!\n", a);
        points = points + a;
    
    } else if (gamecat_easy== 2){
        a = function_southern_easy(points);
        printf ("Your total score for Southern Colleges is: %d out of 6 possible points!\n", a);
        points = points + a;
    
    }else if (gamecat_easy== 3){
        a = function_western_easy(points);
        printf ("Your total score for Western Colleges is: %d out of 6 possible points!\n", a);
        points = points + a;
    } else {
        a = function_eastern_easy(points);
        printf ("Your total score for Eastern Colleges is: %d out of 6 possible points!\n", a);
        points = points + a;
    }

    timer (2);
    printf ("Your total score is %d out of 24 possible points!\n", points);
    
    *p = points;
    *f = gamecat_easy;
    
    return points;
}

int function_endgame_easy(int* p, int* f) {
    
    int user_input = 0;
  
    int points = *p;
    
    
    system ("clear");//stdlib.h
    printf("Would you like to choose another category to continue playing or end the game? \n\t1. Choose another category\n\t2. End the game\n");
    scanf("%d", &user_input);
    
    while (user_input != 1 && user_input != 2){
        printf("Invalid selection. Please try again.\nWould you like to choose another category to continue playing or end the game? \n\t1. Choose another category\n\t2. End the game\n");
        scanf("%d", &user_input);
    }
    if (user_input == 1){
        for (user_input = 1; user_input < 4; user_input++) {
        function_gamecat_easy(p, f);
        }
    }
    else {
        printf("You have chosen to end the game. Your total score was %d.", points);
    }
    return points;
}

//Welcome message
void welcome(void) {
  printf("\t\t\t\tWelcome to Regional College Mascot Trivia \n");
  printf("Based on the region you select, you will be presented with a series of multiple choice questions that ask you which is the correct college mascot for the college in question. This game consists of four different regions: western, eastern, northern, and southern. You will be asked if you would like to play easy or normal mode. Then, you will be asked to chose a region category. Play the game through till the end to see your final score!\n");
  printf("\t\t\t\t\t\t\tGoodluck!\n");
  timer(8);
}

//Main game function
int main(){
    int gamecat = 0;
    int gamecat_easy = 0;
    int points = 0;
    int game_type;
    int *p;
    p = &points;
    int *g;
    g = &gamecat;
    int *f;
    f = &gamecat_easy;

  welcome();
    
    game_type = game_main();

  if (game_type == 0) {
    function_gamecat_easy (p, f);
    function_endgame_easy(p, f);
  }
  else {
    function_gamecat(p, g);
    function_endgame(p, g);
  }
    return 0;
}

