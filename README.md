## Punto 2

# ¿Qué es el archivo .gitignore y por qué es conveniente incluirlo?

El archivo .gitignore le indica a Git qué archivos o carpetas no debe rastrear ni subir al repositorio.

# ¿Por qué es conveniente usarlo?

Es importante porque permite:

- Evitar subir archivos innecesarios (como temporales o basura del sistema).
- Proteger información sensible, por ejemplo: contraseñas (.env), claves de API
- Mantener el repositorio limpio y liviano.
- Evitar conflictos con archivos que cambian constantemente (logs, builds, etc.).

# ¿Cuándo se debe hacer?

Lo ideal es crear el archivo .gitignore desde el inicio del proyecto, antes de hacer el primer commit.

Pero también se puede agregar después. En e se caso, si Git ya está siguiendo archivos que querés ignorar, hay que eliminarlos del seguimiento (sin borrarlos del disco).

# ¿Cómo se configura el archivo .gitignore?

Se configura escribiendo dentro del archivo reglas o patrones de los archivos/carpetas que queremos ignorar.

## Punto 3

# Codigo Misterioso:

El codigo misterioso, invierte un numero, lo divide por dos y finalmente suma los digitos del numero invertido a si mismo. El cambio de los nombres de las variables estan hechos para respestar la convencion de nombres "camelCase" siendo lo mas directo posible con respecto a lo que hacen las funciones o que almacenan las variables.

# Codigo sin Funcionar:

El primer error es logico que se observa en la funcion, ya que al ser void y usar pasaje por valor, ese calculo (El de duplicar el numero) se pierde al terminar la funcion. Para ello simplemente se pasa por referencia la variable.

El segundo error notorio tiene que ver con como se hace el scanf, ya que la variable valor1 no se estaba pasando como el espacio de memoria.

Existe un tercer error y tiene que ver con una modificacion necesaria para el primer error, que es que la misma espera recibir un puntero, el cual ademas es necesario para poder tener un resultado despues. Por lo tanto se necesito crear una variable puntero al valor1 para poder pasarla.

Hubo un ultimo error de sintaxis y es que al final faltaba un ";" luego del return 0# tp1

## Punto 4

# Punto g

En el punto cuatro se obtiene crear un archivo .c y programar dentro de el secuencias de codigo C. Se obtiene el mismo resultado dado que los commits son los mismos, y solo debe actualizar el codigo introducido en el archivo en el repositorio, y si bien el codigo o los archivos no es igual, la metodologia de trabajo si.
