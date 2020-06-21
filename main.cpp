#include <iostream>

int main()
{
      int* a = (int*)malloc(sizeof(int));
        *a = 0;
	std::cout << "Hello World!" << std::endl;
	return *a;
//        return 0;
}
