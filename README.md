# Proyecto-opengl-inmobiliaria:
TITULO : Desarrollo de un software para visualizar en 3D los Departamentos en venta de una inmobiliaria
visualización de modelo de 3D en Opengl
## La motivacion del proyecto :
"Elegimos este proyecto porque anticipamos una experiencia emocionante y gratificante en el ámbito de la programación y la computación gráfica. Nos brindará la oportunidad de diseñar varios modelos, explorar la manipulación de objetos en 3D, la gestión de texturas y más. A través de este desafío, mejoraremos nuestras habilidades de programación y crearemos modelos tridimensionales para una inmobiliaria. Este proceso también nos permitirá desatar nuestra creatividad en el diseño y, en última instancia, experimentar la satisfacción de haber llevado a cabo con éxito este proyecto."
## Propuestas:
### Propuesta 01: Desarrollo de un software para visualizar en 3D la venta de Departamentos de una inmobiliaria

Crear un edificio en una vista general donde al momento de hacer zoom se pueda ingresar a un departamento donde nosotros podremos hacer un recorrido y añadir diferentes tipos de muebles y accesorios en el que podamos moverlo en distintos lugares, rotarlos o borrarlos en las distintas salas que se tendrá como un comedor, dormitorio, cocina, sala de estar, etc.
### Propuesta 02: Visualización interna de la anatomía humana

Crear un modelo del cuerpo humano en el que se pueda visualizar las partes internas de ello, poder interactuar como al darle click se haga zoom para verlo mas detallado, poder moverlas y también tener la opción de dejarlo en su posición original, esto tendrá opciones de diferentes vistas como el sistema digestivo, respiratorio, excretor, etc.

### Propuesta 03: Exploración simulada dentro de un submarino

Crear una vista de un submarino por dentro en el que podremos hacer una exploración a cada cabina y poder tener un mayor conocimiento de ello, habra una opcion donde se le pueda dar movimiento al submarino, el cual se podrá observar por las ventanas un paisaje marino como la flora y algunos animales en movimiento, se entrara en bucle al pasar cierto tiempo.

### Propuesta 04: Simulación de un astronauta en el espacio

Crear un ambiente del espacio en donde se mostrará el cohete y nosotros seremos el astronauta, habrá  opciones que sera ya sea dentro del cohete, en la luna o en marte, si estamos en el cohete, podremos ver algunas cosas de cómo es que se pudiera ver desde dentro o si estamos fuera podremos dar un breve recorrido y ver algunas cosas a nuestro alrededor.
## Objetivo General:
Crear una herramienta especializada que brinde a nuestros clientes la experiencia virtual de explorar y recorrer las propiedades en el vibrante entorno de la ciudad de donde se encuentra su departamento; con nuestro software, podrán sumergirse en recorridos inmersivos para conocer y simular la experiencia de vivir en diferentes propiedades, permitiéndoles visualizar y experimentar la vida en distintas ubicaciones dentro de la ciudad.
## Objetivos específicos
- Desarrollar una interfaz gráfica que sea fácil de navegar, con menús claros y herramientas.
- Incorporar una herramienta que permita a los usuarios colocar virtualmente muebles y elementos decorativos .
- Asegurar precisión en la representación de las propiedades con medidas y distribución fiel a la realidad.
- Incorporar controles de navegación fluidos para una exploración sin esfuerzo de los espacios y detalles, permitiendo cambiar de habitación con facilidad.
- Proporcionar opciones avanzadas de personalización de muebles, incluyendo la capacidad de cambiar colores.
- Mejorar el programa para ofrecer rendimiento óptimo en dispositivos menos potentes, con carga rápida y gráficos de calidad.
- Incorporar sistema de selección y filtrado de departamentos según preferencias de ubicación, precio, tamaño y comodidades para exploración específica.
## HERRAMIENTAS DE INGENIERÍA
    

### Codeblock: 
Usaremos codeblock porque es una herramienta fácil de usar para la creación, organización y gestión de proyectos. Junto a su interfaz que facilita la escritura, edición y depuración de códigos.
### Blender:
 Usaremos blender porque nos ayuda a crear modelos tridimensionales la cual exportamos y usaremos mediante la librería glut.h para tener un mejor modelo y con una mejor visualización.
### Glut.h: 
Nos permite crear ventanas lo que facilita la creación de un contexto de renderizado, además que nos ofrece muchos controles.
stdio.h: Nos permite el acceso a un conjunto de funciones que son esenciales para la interacción del programa con el entorno de ejecución.
-myheader.h: Nos ayuda a declarar funciones, variables, estructuras y otras entidades que son utilizadas en otros archivos de código fuente.
### Vector:
 Un vector es muy útil cuando no sabes de antemano cuántos elementos necesitarás almacenar o cuando el número de elementos puede cambiar durante la ejecución del programa.
### String:
 Al incluir <string>, se habilita el uso de clases y funciones que facilitan la manipulación y operaciones con cadenas de caracteres.
### Stdlib.h:
 Esta biblioteca proporciona un conjunto de funciones y macros que se utilizan para realizar diversas operaciones relacionadas con la gestión de memoria, la generación de números aleatorios, la conversión de tipos y otras utilidades.
## Plan de implementación de la solución
### Definición de objetivos y alcance  
-   Identificar los objetivos del proyecto. 
-   Definir el alcance del modelado 3D
### Recolección de datos
-   Obtener planos arquitectónicos y detalles de diseño.
-   Recopilar información sobre materiales, colores y texturas.
### Selección de herramientas
-   Elegir software de modelado 3D
-   Seleccionar herramientas para renderizado y animación.
### Creación del modelo 3D
-   Desarrollar modelos 3D precisos de cada departamento y áreas comunes.
-   Aplicar texturas y materiales realistas. 
-   Considerar la iluminación natural y artificial.
### Integración de detalle
-   Agregar detalles como mobiliario, accesorios, paisajismo, etc.
-   Asegurarse de que los detalles sean representativos y atractivos para el mercado objetivo.
### Optimización del modelo
-   Optimizar la geometría del modelo para un rendimiento eficiente.
### Creación de recorridos virtuales
-   Generar recorridos virtuales para permitir a los clientes explorar el edificio y los departamentos.
-   Integrar interactividad si es necesario.
### Renderizado de calidad
-   Realizar renderizados de alta calidad para presentaciones visuales impactantes.
###  Pruebas y retroalimentación
-   Realizar pruebas exhaustivas del modelo en diferentes dispositivos.
-   Obtener retroalimentación de partes interesadas y realizar ajustes según sea necesario.

## Conclusiones:

### Basándonos en la solución de nuestro problema podemos concluir lo siguiente:
La utilización de OpenGL y la librería glut.h nos ha permitido crear una representación visual e interactiva de los departamentos en un edificio, ofreciendo una experiencia inmersiva.
El uso CodeBlocks como entorno de desarrollo ha demostrado ser efectiva, proporcionando una interfaz fácil de usar.
El uso de Blender como herramienta para la creación de modelos en 3D ha sido clave para la calidad visual del proyecto. 

![enter image description here](https://raw.githubusercontent.com/stevenxd7u7/Proyecto-opengl-inmobiliaria/main/imagen/imagenProyecto.png)
