#include <iostream>
#include <string>
#include <string.h>


int main()
{
    char s1[200];
    std::cout << " s1:"; std::cin.getline(s1, 200);
    int len1 = strlen(s1);
    std::cout << s1 << "   len = " << len1 << std::endl;

}
