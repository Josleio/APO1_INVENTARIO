# APO1_INVENTARIO
Primer trabajo calificable de algoritmos y programacion, construir un inventario sencillo de productos con advertencia de umbral minimo, adjunto el analisis y el pseudocodigo:
esta practica incluye vectores y struct (practica 1 y 2)

Análisis de Requerimiento:
  - El sistema debe permitir ingresar los datos cada producto (ID, nombre del producto, precio, cantidad en stock, umbral mínimo de stock).
  - Debe calcular el valor total del inventario del producto.
  - Si la cantidad en stock es menor al umbral mínimo, debe mostrar un mensaje de reabastecimiento.
  - Y mostar un lsitado con los datos del producto y su estado en el inventario.


 Algoritmo Informal struct: 
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
