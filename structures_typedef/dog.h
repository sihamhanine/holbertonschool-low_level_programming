#ifndef dog_h
#define dog_h
/**
 * struct dog - with the following elements:
 *
 * @name: le premier membre de type char
 * @age: le deuxieme membre de type float
 * @owner: le troixieme membre de type char
 * decrire une structure sous nom de dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Typedef for struct dog
 *
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif