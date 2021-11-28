#include <iostream>
#include <classInventario.h>
#include <classCarrito.h>

using namespace std;

int main() {
    string nombre, direccion;
    int edad, id;

    puts("Bienvenido a SSSSSS Online!");
    Producto productos[5] = {
            Producto(33.9, "Jabón", 3),
            Producto(45.4, "Cereal", 4),
            Producto(203, "Salchichas", 2),
            Producto(150, "Queso", 3),
            Producto(25, "Sal", 2)
    };

    Inventario inv = *new Inventario(productos);




    printf("¿Cuál es tu nombre?: ");
    cin >> nombre;

    printf("¿Cuál es tu edad?: ");
    cin >> edad;

    printf("¿Cuál es tu dirección?: ");
    cin >> direccion;


    Usuario usuario = *new Usuario(nombre, direccion, edad);
    Carrito carrito = Carrito(usuario, inv);

    puts("\nContamos con los siguientes productos...");
    inv.MostrarInventario();

    while (true) {


        puts("\nEscriba el ID del producto que desea agregar al carrito");
        puts("O escriba \"-1\" para mostrar el inventario resultante");
        puts("O escriba \"-2\" para mostrar el carrito");
        puts("O escriba \"-3\" para terminar de seleccionar productos");
        printf("Su elección: ");
        cin >> id;

        if (id == -3) break;

        if (id < -2 || id > carrito.inventario.getSize()) puts("Ingresa un ID válido");

        switch (id) {
            case -1: carrito.inventario.MostrarInventario(); break;
            case -2: carrito.mostrarCarrito(); break;
        }

        printf("%d", id);
    }




    return 0;
}