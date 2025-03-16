#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Pointer to dog's name
 * @age: Dog's age
 * @owner: Pointer to dog's owner
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Typedef for struct dog */
typedef struct dog dog_t;

#endif /* DOG_H */
