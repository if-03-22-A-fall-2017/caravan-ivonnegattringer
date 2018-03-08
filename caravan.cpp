/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <stdio.h>
#include "pack_animal.h"

struct Node{
  struct Node* nextNode;
  PackAnimal animal;
}
struct CaravanImplementation{
  struct Node* start;
  struct Node* end;
  int length;
  int speed;
  int load;
}

Caravan new_caravan()
{
    struct CaravanImplementation* list;
    list = (struct CaravanImplementation*) malloc(sizeof(struct CaravanImplementation));
    list->length = 0;
    list->start =0;
    list->end = 0;
    list->start = (struct Node*) malloc(sizeof(struct CaravanImplementation));
    return list;
}

int get_length(Caravan caravan)
{
  return caravan->length;
}

void delete_caravan(Caravan caravan)
{
  struct Node* current = caravan->start;
  while(current!= 0){
    struct Node* bam = current;
    current = current->next;
    sfree(bam);
  }
  sfree(caravan);
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{
  struct Node* newc = (struct Node*) malloc(sizeof(struct CaravanImplementation));
  newc->animal = animal;
  if(caravan->start == 0){
    caravan->start = newc;
    caravan->
  }
  caravan->end->nextNode = newc;
  caravan->end = end->nextNode;
}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
  if(caravan->start == 0 || animal ==0 || caravan == 0)return;
  struct Node* current = caravan->start;
  struct Node* bam = current;
  if(current->animal == animal){
    caravan->start = current->nextNode;
    sfree(bam);
  }
  while(current != 0){
    if(current->animal == animal){

      current->animal->caravan = 0;
      current->beforeNode->nextNode = current->nextNode;

      sfree(bam);
      return;
    }
    current = current->nextNode;
  }
}

int get_caravan_load(Caravan caravan)
{
}

void unload(Caravan caravan)
{
}

int get_caravan_speed(Caravan caravan)
{
}
