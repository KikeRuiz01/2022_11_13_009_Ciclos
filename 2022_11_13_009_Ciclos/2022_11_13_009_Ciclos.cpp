// 2022_11_13_009_Ciclos.cpp
// Programa hecho por Carlos Enrique Ruiz Peña
//

#include <iostream>
#include <Windows.h>

int main()
{ 
    std::cout << "Este Programa es para probar los ciclos anidados haciendo un conteo" << std::endl;
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                std::cout << i << j << std::endl;
                Sleep(777);
            }
        }
    }
}