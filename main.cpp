#include <iostream>

#define ISFULL(menQty) menQty > 20 ? true : false

#define FULLFILL_ARRAY(array) for(int i=0;i<20;i++) \
{                                                   \
std::cout << "Input quantity of men in " << i+1 << " van: ";        \
std::cin >> (array)[i];                             \
if(ISFULL((array)[i]))                              \
    std::cout << "Overloaded\n";                    \
}

#define ARRAY_SUM(array) \
int result;\
for(int i=0;i<20;i++)\
{\
    result+=(array)[i];\
}\
std::cout << "Total: " << result;

int main() {
    int array[20];

    FULLFILL_ARRAY(array);

    ARRAY_SUM(array);

    return 0;
}
