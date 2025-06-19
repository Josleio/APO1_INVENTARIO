
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/* Pseudocódigo:
 INICIO
     DEFINIR inventario COMO LISTA VACÍA
     HACER
        ESCRIBIR "Bienvenido a su inventario de productos"
        ESCRIBIR "Seleccione una opción:"
        ESCRIBIR "a) Agregar un producto"
        ESCRIBIR "b) Ver inventario"
         LEER opcion
         SI opcion ES "a" ENTONCES
             DEFINIR producto, ID como CADENA
             DEFINIR stock, umbral, como ENTERO
             DEFINIR precio y valortotal como REAL

             ESCRIBIR "Ingrese la siguiente informacion sobre el porducto"
             ESCRIBIR "ID del producto: "
            LEER id
             ESCRIBIR "Nombre: "
             LEER producto
            ESCRIBIR "Precio:"
             LEER precio
             ESCRIBIR "cantidad en stock:"
            LEER stock
             ESCRIBIR "umbral mínimo de stock:"
             LEER umbral

             valortotal ← precio * stock

             AGREGAR producto a inventario
             SI stock < umbral ENTONCES
                 ESCRIBIR "El umbral minimo supera la cantidad en stock, es necesario abastecer"
             FIN SI
         SI NO opcion ES "b" ENTONCES
             SI inventario ESTÁ VACÍA ENTONCES
                ESCRIBIR "No hay productos en el inventario."
             SI NO
                 ESCRIBIR "Listado de productos:"
                 PARA CADA producto EN inventario HACER
                     ESCRIBIR id, producto, precio, stock, umbral, valortotal
                 FIN PARA
             FIN SI
         SI NO
             ESCRIBIR "Opción no válida. Intente de nuevo."
         FIN SI
         ESCRIBIR "¿Desea realizar otra acción? (s/n)"
         LEER opcion
     MIENTRAS opcion = "s"
 FIN

*/


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
  
// Dar bienvenida al usuario y mostrar opciones a y b.
// a es agregar producto, b es ver el listado.

  
    do {
        cout << "Practica vector struct.\nEscriba una opcion: " << endl;
        cout << "a, Agregar un producto" << endl;
        cout << "b, Ver inventario" << endl;
        cout << ": ";
        cin >> opcion;
      
        // si el usuario escoge a se le pide los datos del producto

        if (opcion == 'a' || opcion == 'A') {
            Producto prod;

            //  Leer y almacenar los datos ingresados.

            cout << "Ingrese la informacion sobre el porducto.\n";
            cout << "ID: ";
            cin >> prod.id;
          //limpia el buffer
            cin.ignore();
            cout << "Nombre: ";
          // permite uso de strings con espacion
            getline(cin, prod.nombre);
            cout << "Precio: ";
            cin >> prod.precio;
            cout << "cantidad en stock, numero entero: ";
            cin >> prod.cantidad;
            cout << "umbral min de stock, numero entero: ";
            cin >> prod.umbral;

            //  3. Calcular los valores totales en inventario.

            prod.valorTotal = prod.precio * prod.cantidad;
            inventario.push_back(prod);

            // 4. Verificar si el stock está por debajo del umbral mínimo.
            // dar una respectiva advertencia

            if (prod.cantidad <= prod.umbral) {
                cout << "\nALERTA, es necesario abastecer.\n";
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

        cout << "\nContinuar? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    return 0;
}
