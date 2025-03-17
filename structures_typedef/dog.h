/**
 * struct dog - structure that stores information about a dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

