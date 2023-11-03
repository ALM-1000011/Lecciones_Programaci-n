/**
 * @file main.cpp
 * @author Alejandro M.L (alu0101443126@ull.edu.es)
 * @brief Explicación de la creación y uso de objetos de una clase. Dudas enviando correo a la dirección espicificada con asunto: "nombre del archivo"
 * @version 0.1
 * @date 03-11-23
 *
 * @copyright Copyright (c) 2023 free for non-profit
 *
 */

/** Introducción a la POO en C++. En esta lección se pretende definir una Clase Persona, explicando cada definición general
*  de una clase en C++. Una clase puede ser entendida como la definición de las características de un algo. Y un objeto de una clase
*  es una especie de "clon" a partir de la plantilla que sería la Clase
*/

#include "persona.hpp" //En el main también se deberá hacer "include" de la clase que hayamos definido.

#include <iostream>

int main() {
  //Veamos como se inicializa un objeto de una clase una vez desarrollada:
  //Haciendo uso del constructor que definimos:
  Persona Pedro{"Pedro", 34, true};
  //Lo anterior lo podemos observar como la inicialización de una variable de tipo "Persona" con nombre de variable "Pedro"
  //asignándole los valores "Pedro" al "nombre_", 34 a la "edad_" y true al "genero_"
  
  //Si quisieramos inicializar una variable sin valor a sus atributos podríamos hacer uso del Constructor por Defecto:
  Persona Juan;
  //Donde las variables "nombre_", "edad_" y "genero_" tienen valor NULL puestos que no están inicializadas.
  //Como si declararamos un "int cont;", "cont" no tiene valor inicializado.

  //Para llamar al método de una clase usaremos el nombre de la variable seguido de un ".". Por ejemplo, para el método "gritar nombre":
  Pedro.gritar_nombre();

  //Si quisiéramos desde el "main" imprimir por pantalla el nombre de Pedro. ¿Podríamos usar:?
  //Pedro.edad_;
  //No, debido a que hemos establecido el atributo nombre en la parte privada de la clase. Ahora se aprecia la utilidad de los "getter's"
  std::cout << "¿No lo has escuchado? Él se llama: " << Pedro.get_nombre() << std::endl;

  //Y para establecer el nombre de Juan, ¿Podríamos hacerlo de la siguiente manera:?
  //Juan.nombre_ = "Juan";
  //Tampoco, "nombre_" no puede modificarse de esa manera estando en la parte "private" de nuestra clase. Deberemos usar el "setter":
  Juan.set_nombre("Juan");
  std::cout << "Y aquel: " << Juan.get_nombre() << std::endl;

  //Inicializa debajo los demás atributos de Juan mediante los "setter's" adicionales que implementaste e imprimilos por pantalla.
}