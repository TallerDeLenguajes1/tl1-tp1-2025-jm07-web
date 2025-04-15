# 2.a Archivo .gitignore

## ¿Por qué es conveniente incluirlo?

Es conveniente usarlo porque el archivo .gitignore es un archivo de texto que le indica a Git qué archivos o directorios ignorar. Esto es útil para evitar que archivos como archivos temporales, código compilado o datos confidenciales se incluyan en el repositorio. Más puntualmente sirve para:

- Evitar que archivos no rastreados por Git permanezcan sin rastrear. 
- Omitir archivos que no se necesitan en un repositorio remoto. 
- Evitar que archivos específicos de un equipo o entorno de desarrollo se incluyan en el repositorio.

## ¿Cuándo se debe hacer?

Se debe realizar antes de hacer algún cambio en el trabajo.

## ¿Cómo configuraría el archivo .gitignore?

Primero crearía un archivo .gitignore en el directorio de origen de mi repositorio de git y luego le escribiría los archivos que quiero que sean ignorados. Por ejemplo: ignorado.txt

# 3.c

## ¿Qué archivos vé?

Veo al archivo tp1_1.c, al archivo tp1_1.exe y a la carpeta .vscode

## ¿Cuál cree que no hace falta que esté?

Considero que no hace falta que esté el tp1_1.exe porque solo es un archivo compilado, y tampoco debería estar .vscode porque son configuraciones del editor local.

# 3.g

## Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe?

Esto se debe a que un puntero es una variable que contiene la dirección de memoria de otra variable, por eso al mostrar el contenido del puntero coincide con lo que se obtine usando el &variable (en mi caso &num).

## ¿Qué obtiene en el punto 4?

Aquí obtengo la dirección de memoria que ocupa el puntero, es decir la dirección del espacio de la memoria que está usando el puntero que a su vez contiene la dirección de memoria de otra variable, por eso lo obtenido en el punto 4 es diferente a lo obtenido en los apartados 2 y 3.