// 2022_11_13_009_Ciclos.cpp
// Programa hecho por Carlos Enrique Ruiz Peña
//

#include <iostream>
#include <Windows.h>
#include <stdlib.h>

int main()
{
    int numero = 0;
    bool confirmacion = 0;
     
    std::cout << "Este Programa es para probar los ciclos anidados haciendo un conteo" << std::endl <<
        "Para confirmar escriba (1) o para cerrar el programa escriba (0)" << std::endl;
    std::cin >> confirmacion;

    if (confirmacion == 1)
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
    else
    {
        exit;
    }
    


}