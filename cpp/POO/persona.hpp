/**
 * @file persona.hpp
 * @author Alejandro M.L (alu0101443126@ull.edu.es)
 * @brief Explicación de la declaración de una clase. Dudas enviando correo a la dirección espicificada con asunto: "nombre del archivo"
 * @version 0.1
 * @date 03-11-23
 *
 * @copyright Copyright (c) 2023 free for non-profit
 *
 */

/** En los archivos ".hpp" es donde se establece los atributos y métodos (sin desarrollar) de la clase.
*  En otras palabras, donde se declara la clase para posteriormente sea desarrollada en el ".cpp"
*/

//pragma once es una instrucción al preprocesador para indicar la definición de la clase. Ha de establecerse siempre que se defina una clase nueva
#pragma once 
#include <iostream>

//El nombre de una clase siempre deberá de empezar en mayúscula, para declarar una clase se usa "class"
class Persona { 
  //Dentro de "public" se establecerán los métodos/atributos que podrán ser accedidos por objetos "fuera de la clase"
  public:

  //Un "método" realmente es una función de acceso exclusivo por objetos de una clase.
  //Por ejemplo, el método de abajo solo podrá ser accedido por un objeto "Persona", y realiza cambios dentro del mismo.
  void gritar_nombre();

  //Los "getters" son métodos que devuelven el valor de un atributo que se encuentra en la parte "private".
  //Por lo general, un getter no recibirá ningún valor por parámetro pero siempre devolverá algo.
  //Este "getter" por ejemplo, devuelve el valor del atributo "nombre".
  std::string get_nombre();

  //Los "setters" al contrario que los "getters" establecen el valor de un atributo que se encuentra en la parte "private".
  //Se dice que es "contrario" puesto que siempre recibirán algún valor para establecer el atributo y rara vez devolverá una variable.
  //Por ejemplo, este "setter" establece el atributo "nombre" al valor que se recibe "nuevo nombre".
  void set_nombre(const std::string nuevo_nombre);

  //Un Constructor es una manera de inicializar un objeto de una Clase, algo así como dar valor de una sentada a sus atributos.
  //no retornará ninguna variable y se define de la siguiente manera:
  Persona(const std::string nombre, int edad, bool genero) : nombre_{nombre}, edad_{edad}, genero_{genero} {}
  //Sin embargo, si definimos un constructor no podremos inicializar objetos "vacíos" como por ejemplo, "Persona Pepe" sino que nos veremos obligados
  //a tener que inicializar las variables al momento "Persona Pepe{"Pepe", 45, true}". Para poder inicializar objetos de la primera manera necesitaremos:
  //Constructor por Defecto:
  Persona() = default;
  
  //En "private" aparecerán los métodos/atributos que solo podrán ser accedidos por métodos dentro del ".cpp" de la misma clase
  private:
  //Los atributos de una clase pueden ser entendidos como las caracterísiticas de ese "algo" que estamos definiendo.
  //Por ejemplo, ¿qué características tiene una persona?. 
  std::string nombre_; //Su nombre
  int edad_; //Su edad
  bool genero_; //Su género (true = hombre, false = mujer)
  //Siguiendo la Guía de estilo de Google los atributos de una clase siempre deberán estar acabados en guión bajo('_')
};