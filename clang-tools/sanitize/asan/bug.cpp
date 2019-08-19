#include <iostream>

constexpr char hello[]{"Hello"};
constexpr char world[]{"world"};

char *copy_hello(char *output)
{
    for(auto c : hello)
        if(c != '\0')
            *output++ = c;
    return output;
}

char *copy_world(char *output)
{
    for(auto c: world)
        *output++ = c;
    return output;
}

int main()
{
    char buffer[10+1];
    char *ptr;

    ptr = copy_hello(buffer);
    *ptr++ = ' ';
    ptr = copy_world(ptr);


    std::cout << std::string{buffer} << std::endl;
    return 0;
}

