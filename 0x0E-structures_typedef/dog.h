#ifndef MA_STRUCTURE_H
#define MA_STRUCTURE_H

/**
 * struct dog - Display name age and owner
 * @name: Name dog
 * @age: age dog
 * @owner: property dog
 *
 * Description: Display dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
