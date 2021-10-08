# Spot
[![GitHub issues](https://img.shields.io/github/issues/evilelliot/spot-vector)](https://github.com/evilelliot/spot-vector/issues)
![Language](https://img.shields.io/badge/C%2B%2B-Language-blue)

Este proyecto toma las operaciones del algebra vectorial básica y las evalua de forma automatica gracias a las expresiones regulares y la clase Tokenizer.

Las operaciones implementadas al momento son:

- Suma de vectores en R².
- Resta de vectores en R².
- Suma de vectores en R³.
- Calculo de magnitudes en vectores en R².
- Calculo de magnitudes en vectores en R³.
- Multiplicación de vectores por escalares en R².
- Multiplicación de vectores por escalares en R³.
- Productos puntos en R² y R³.
- Productos cruz en R² y R³.
- Identificación de componentes en R² y R³.
---
La mayoría de las opciones permiten operaciones anidadas, aunque algunas están parcialmente implementadas. Por ejemplo:

```console
$ > spot -o "(3,3.2)+[(12.25,23,(2.2,54)]"
$ > (R→) = (17.45,80.2)
```
Ejemplo de calculo de un punto cruz:

```console
$ > spot -cr "(3,3.2)" "(2,3)
$ > V→ ⋅ W→ = {0,-0,2.6}
```
---
**TODO: **
1. Transformaciones de vectores mediante las Matrices de Rotación de Euler para vectores 2D y 3D.
2. Traslación de vectores.
3. Modo extensivo (mostrar las operaciones paso a paso).
4. Modo de lectura de archivos (permite cargar un archivo con operaciones y calcularlas dentro).
5. Implementación de un sistema que permita gráficar los vectores y sus operaciones correspondientes en un plano.
6. Más tipos de operaciones anidadas.
7. Operaciones encadenadas más complejas.

---
**Notas:**

Este proyecto está basado en [este template para aplicaciones CLI realizado por mi.](https://github.com/evilelliot/Testing-CLI "este template para aplicaciones CLI realizado por mi.")

También hace uso de la clase [Tokenizer](https://github.com/evilelliot/Tokens-CPP "Tokenizer") que convierte una expresión en una lista de números de punto flotante.

Los tres proyectos forman parte de los assigments de la materia Calculo Vectorial.
