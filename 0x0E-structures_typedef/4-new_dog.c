#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: 1st member.
 * @age: 2nd member.
 * @owner: 3rd member
 *
 * Return: NULL if fail.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	
	int i, lenN, lenO;

	structure dog *n_dog = NULL;

        lenN = 0;
        while (name[lenN] != '\0')
                lenN++;
        lenO = 0;
        while (owner[lenO] != '\0')
                lenO++;

        n_dog = malloc(sizeof(struct dog));
        if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
        n_dog->name = malloc(lenN + 1);
        if (n_dog->name == NULL)
        {
                free(n_dog->name);
		free(p_dog);
		return (NULL);        
        }
        n_dog->owner = malloc(lenO + 1);
        if (n_dog->owner == NULL)
        {
                free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);

   	for (i = 0; i < lenN; i++)
		n_dog->name[i] = name[i];
        for (i = 0; i < lenO; i++)
                n_dog->owner[i] = owner[i];
	p_dog->age = age;
        return (n_dog);	
}
