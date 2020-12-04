#include <stdio.h>

/**
typedef struct _stPerson{
    int age;
    char name[20];
}stPerson;
**/
// or below
struct _stPerson{
    int age;
    char name[20];
};
typedef struct _stPerson stPerson;

int main(){
    stPerson person = {10, "Tommy"};
    //strcpy(person.name, "Tommy");

    printf("Person name[%s] age[%d]\n", person.name, person.age);

    return 0;
}