# 2.a Archivo .gitignore

## ¿Por qué es conveniente incluirlo?

Es conveniente usarlo porque el archivo .gitignore es un archivo de texto que le indica a Git qué archivos o directorios ignorar. Esto es útil para evitar que archivos como archivos temporales, código compilado o datos confidenciales se incluyan en el repositorio. Más puntualmente sirve para:
-Evitar que archivos no rastreados por Git permanezcan sin rastrear. 
-Omitir archivos que no se necesitan en un repositorio remoto. 
-Evitar que archivos específicos de un equipo o entorno de desarrollo se incluyan en el repositorio.

## ¿Cuándo se debe hacer?

Se debe realizar antes de hacer algún cambio en el trabajo.

## ¿Cómo configuraría el archivo .gitignore?

Primero crearía un archivo .gitignore en el directorio de origen de mi repositorio de git y luego le escribiría los archivos que quiero que sean ignorados. Por ejemplo: ignorado.txt