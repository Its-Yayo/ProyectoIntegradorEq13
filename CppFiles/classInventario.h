#pragma once

#include <iostream>
#include <string>
#include "classProducto.h"


using namespace std;


class Inventario {
private:
    int size;
    Producto * producto ;
public:

    Inventario(Producto c[]): producto(c), size(Producto::getSize(c)) {};

    void MostrarInventario();
    int getSize() ;
    bool eliminarProducto(int, int);
};