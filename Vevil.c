#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


typedef struct Player{
	int health;
	char *name;
	int stealth;
	int perception;
}Player;

typedef struct Enemy{
int health;
char *type;
char *name;
bool hostile;
int perception;
int stealth;
}Enemy;


// Function to check if player is seen
bool isplayerseen(Enemy mobencountered){
	bool isseen;


	if (goblin.perception >= player.stealth){
		isseen = true;
	} 

	else{
		isseen = false;
	}
	//returns if the player is seen
	return isseen;
}
//uses isplayerseen as the bool playerseen as it returns wether or not the player was seen and then checks if the mob is hostile or not
bool combatinitiated(Enemy mobencountered, bool playerseen){
	bool doescombathappen;
	if (playerseen == true && mobencountered.hostile == true){
		combatinitiated = true;
	}

	else if(playerseen == true && mobencountered.hostile == false){
		combatinitiated == false;
	}
	//returns wether or not combat is initiated
	return doescombathappen;
}
//uses combatinitiated as the bool iscombat and isplayerseen as bool playerseen
bool dialogueinitiated(Enemy mobencountered, bool playerseen, bool iscombat){
	bool doesdialoguehappen;

	if (playerseen == true && mobencountered.hostile == false && iscombat == false){
		doesdialoguehappen = true
	}
	else{
		doesdialoguehappen = false;
	}
	return doesdialoguehappen;
}




int main(void){

}
