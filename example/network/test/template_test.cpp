#include <iostream>


int Add(int a, int b){
    std::cout << "int Add call" << std::endl;
    return a+b;
}
char Add(char a, char b){
    std::cout << "char to int Add call" << std::endl;
    return a+b;
}
int main(){
    std::cout << "template_test start!" << std::endl;

    std::cout << Add(1,2) << std::endl;
    std::cout << Add('a','b') << std::endl;

    printf("a:%c %d\n", 'a', 'a');
    printf("b:%c %d\n", 'b', 'b');
    printf("a+b:%c %d\n", 'a'+'b', 'a'+'b');

    return 0;
}