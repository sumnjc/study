#include <iostream>

struct stPerson{
    int age;
    char name[20];
};

int main(){
    stPerson person = {10, "Tommy"};

    printf("Person name[%s] age[%d]\n", person.name, person.age);

    return 0;
}
