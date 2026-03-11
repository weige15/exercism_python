#include "dnd_character.h"
#include <stdio.h>    // for sprintf
#include <time.h>
#include <stdlib.h>
#include <math.h>

int ability(void){
  int rolls[4];
  int sum = 0;
  int lowest = 7; //to find min, you need to swap with max
  

  for (size_t i = 0; i < 4; i++) {
    rolls[i] = (rand() % 6) + 1;
    sum += rolls[i];
    if (rolls[i] < lowest) {
      lowest = rolls[i];
    }
  }
  return sum - lowest;
}

int modifier(int score){
    return (int)floor((score - 10.0) / 2.0);
}

dnd_character_t make_dnd_character(void){
  dnd_character_t hero;
  hero.strength = ability();
  hero.dexterity = ability();
  hero.constitution = ability();
  hero.intelligence = ability();
  hero.wisdom = ability();
  hero.charisma = ability();
  hero.hitpoints = modifier(hero.constitution) + 10;

  return hero;
}

