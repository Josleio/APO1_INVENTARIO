/*
  Análisis de Requerimiento:
  - El sistema debe permitir ingresar los datos cada producto (ID, nombre del producto, precio, cantidad en stock, umbral mínimo de stock).
  - Debe calcular el valor total del inventario del producto.
  - Si la cantidad en stock es menor al umbral mínimo, debe mostrar un mensaje de reabastecimiento.
  - Y mostar un lsitado con los datos del producto y su estado en el inventario.
*/

/*
 Algoritmo Informal:
 
 1. Dar bienvenida al usuario y mostrar opciones a y b.
 2. a es agregar producto, b es ver el listado.
 3. si el usuario escoge a se le pide los datos del producto
 4. Leer y almacenar los datos ingresados.
 5. Calcular los valores totales en inventario.
 6. Verificar si el stock está por debajo del umbral mínimo.
 7. Devolver un mensaje si el caso anterior es afirmativo.
 8. preguntar si quiere continuar y si es si volver al listado de opciones.
 9. si escoge b se muestra el listado de objetos.
 10. si no quiere continuar termina el programa.
*/

// Pseudocódigo:
// INICIO
//     DEFINIR inventario COMO LISTA VACÍA
//     HACER
//         ESCRIBIR "Bienvenido a su inventario de productos"
//         ESCRIBIR "Seleccione una opción:"
//         ESCRIBIR "a) Agregar un producto"
//         ESCRIBIR "b) Ver inventario"
//         LEER opcion
//         SI opcion ES "a" ENTONCES
//             DEFINIR producto, ID como CADENA
//             DEFINIR stock, umbral, como ENTERO
//             DEFINIR precio y valortotal como REAL

//             ESCRIBIR "Ingrese la siguiente informacion sobre el porducto"
//             ESCRIBIR "ID del producto: "
//             LEER id
//             ESCRIBIR "Nombre: "
//             LEER producto
//             ESCRIBIR "Precio:"
//             LEER precio
//             ESCRIBIR "cantidad en stock:"
//             LEER stock
//             ESCRIBIR "umbral mínimo de stock:"
//             LEER umbral

//             valortotal ← precio * stock

//             AGREGAR producto a inventario
//             SI stock < umbral ENTONCES
//                 ESCRIBIR "El umbral minimo supera la cantidad en stock, es necesario abastecer"
//             FIN SI
//         SI NO opcion ES "b" ENTONCES
//             SI inventario ESTÁ VACÍA ENTONCES
//                 ESCRIBIR "No hay productos en el inventario."
//             SI NO
//                 ESCRIBIR "Listado de productos:"
//                 PARA CADA producto EN inventario HACER
//                     ESCRIBIR id, producto, precio, stock, umbral, valortotal
//                 FIN PARA
//             FIN SI
//         SI NO
//             ESCRIBIR "Opción no válida. Intente de nuevo."
//         FIN SI
//         ESCRIBIR "¿Desea realizar otra acción? (s/n)"
//         LEER opcion
//     MIENTRAS opcion = "s"
// FIN

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Producto {
    string id;
    string nombre;
    double precio{};
    int cantidad{};
    int umbral{};
    double valorTotal{};
};

int main() {
    vector<Producto> inventario;
    char opcion;

    do {
        cout << "Bienvenido a su inventario de productos.\nQue desea hacer?: " << endl;
        cout << "a) Agregar un producto" << endl;
        cout << "b) Ver inventario" << endl;
        cout << "escriba la opcion: ";
        cin >> opcion;


        if (opcion == 'a' || opcion == 'A') {
            Producto prod;

            //  1. Solicitar al usuario los datos de cada producto.
            //  2. Leer y almacenar los datos ingresados.

            cout << "Ingrese la informacion sobre el porducto.\n";
            cout << "ID del producto, letra y numero: ";
            cin >> prod.id;
            cout << "nombre del producto: ";
            cin.ignore();
            getline(cin, prod.nombre);
            cout << "precio, ingrese un numero: ";
            cin >> prod.precio;
            cout << "cantidad en stock, numero entero: ";
            cin >> prod.cantidad;
            cout << "umbral min de stock, numero entero: ";
            cin >> prod.umbral;

            //  3. Calcular los valores totales en inventario.

            prod.valorTotal = prod.precio * prod.cantidad;
            inventario.push_back(prod);

            // 4. Verificar si el stock está por debajo del umbral mínimo.
            // Devolver un mensaje si el caso anterior es afirmativo.

            if (prod.cantidad < prod.umbral) {
                cout << "\nEl umbral minimo supera la cantidad en stock, es necesario abastecer.\n";
            }
        } else if (opcion == 'b' || opcion == 'B') {
            if (inventario.empty()) {
                cout << "\nNo hay productos en el inventario.\n";
            } else {
                cout << "\nListado de productos:\n";
                for (const auto &prod : inventario) {
                    cout << "\nID: " << prod.id << "\tNombre: " << prod.nombre << endl;
                    cout << "Precio unitario: " << prod.precio << "\tCantidad en stock: " << prod.cantidad << endl;
                    cout << "Umbral minimo: " << prod.umbral << "\tValor total de producto: " << prod.valorTotal << endl;
                }
            }
        } else {
            cout << "\nOpción no válida. Intente de nuevo.\n";
        }

        cout << "\nDesea continuar? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    return 0;
}
