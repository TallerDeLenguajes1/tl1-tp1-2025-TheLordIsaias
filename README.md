## Punto 3

# Codigo Misterioso:

El codigo misterioso, invierte un numero, lo divide por dos y finalmente suma los digitos del numero invertido a si mismo. El cambio de los nombres de las variables estan hechos para respestar la convencion de nombres "camelCase" siendo lo mas directo posible con respecto a lo que hacen las funciones o que almacenan las variables.

# Codigo sin Funcionar:

El primer error es logico que se observa en la funcion, ya que al ser void y usar pasaje por valor, ese calculo (El de duplicar el numero) se pierde al terminar la funcion. Para ello simplemente se pasa por referencia la variable.

El segundo error notorio tiene que ver con como se hace el scanf, ya que la variable valor1 no se estaba pasando como el espacio de memoria.

Existe un tercer error y tiene que ver con una modificacion necesaria para el primer error, que es que la misma espera recibir un puntero, el cual ademas es necesario para poder tener un resultado despues. Por lo tanto se necesito crear una variable puntero al valor1 para poder pasarla.

Hubo un ultimo error de sintaxis y es que al final faltaba un ";" luego del return 0# tp1
