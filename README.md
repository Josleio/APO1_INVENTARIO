# APO1_INVENTARIO
Primer trabajo calificable de algoritmos y programacion, construir un inventario sencillo de productos con advertencia de umbral minimo, adjunto el analisis y el pseudocodigo:

Análisis de Requerimiento:
  - El sistema debe permitir ingresar los datos cada producto (ID, nombre del producto, precio, cantidad en stock, umbral mínimo de stock).
  - Debe calcular el valor total del inventario del producto.
  - Si la cantidad en stock es menor al umbral mínimo, debe mostrar un mensaje de reabastecimiento.
  - Y mostar un lsitado con los datos del producto y su estado en el inventario.


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

Pseudocodigo:

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
DEFINIR stock, umbral como ENTERO
DEFINIR precio y valortotal como REAL

ESCRIBIR "Ingrese la siguiente información sobre el producto"
ESCRIBIR "ID del producto: "
LEER id
ESCRIBIR "Nombre: "
LEER producto
ESCRIBIR "Precio:"
LEER precio
ESCRIBIR "Cantidad en stock:"
LEER stock
ESCRIBIR "Umbral mínimo de stock:"
LEER umbral

valortotal ← precio * stock

AGREGAR producto a inventario

SI stock < umbral ENTONCES
ESCRIBIR "El umbral mínimo supera la cantidad en stock, es necesario abastecer"
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
