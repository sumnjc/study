// c 언어에서의 캡슐화
#include <stdio.h>

#define MAX_NAME_LEN 20

typedef struct Unit Unit;
struct Unit // 구조체를 통해 캡슐화 구현
{
    // 멤버 변수만 캡슐화 가능
    // 접근지정자 기능 없음.
    int num;
    char name[MAX_NAME_LEN];
    int hp;
};

void Train(Unit *unit, int hour)
{
    printf("%d번 유닛(%s) 훈련하다. \n", unit->num, unit->name);
    unit->hp += hour;   // 접근지정자가 없어 어디에서나 접근이 가능.
}

int main()
{
    Unit unit={3,"홍길동", 100};
    Train(&unit, 5);
    printf("%d번, 유닛 이름:%s, 체력:%d\n", unit.num, unit.name, unit.hp);
    unit.hp += 1000;    // 접근지정자가 없어 어디에서나 접근이 가능.
    printf("%d번, 유닛 이름:%s, 체력:%d\n", unit.num, unit.name, unit.hp);
    return 0;
}