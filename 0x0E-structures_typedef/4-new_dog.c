#include <stdlib.h>
#include "dog.h"
/**
  * new_dog - ...
  * @name: ...
  * @age: ...
  * @owner: ...
  *
  * Return: ...
  */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t ret;
    ret.name = name;
    ret.owner = owner;
    return (ret);
}