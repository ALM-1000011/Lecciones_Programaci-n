/**
 * @file persona.cpp
 * @author Alejandro M.L (alu0101443126@ull.edu.es)
 * @brief Explicación de la definición de una clase. Dudas enviando correo a la dirección espicificada con asunto: "nombre del archivo"
 * @version 0.1
 * @date 03-11-23
 *
 * @copyright Copyright (c) 2023 free for non-profit
 *
 */

// En los archivos ".cpp" es donde desarrollaremos los métodos que hayamas declarado en el ".hpp"

//Antes que nada deberemos de hacer un "include" del archivo donde instanciamos la clase:
#include "persona.hpp" //A diferencia de los "include" de la librería estándar estos irán con comillas

#include <iostream>

//Para desarrollar un método de una clase deberemos primero establecer el valor que retorna el método seguido del enlace de Clase "Clase::"
void Persona::gritar_nombre() {
  std::string nombre_mayus;
  for (int i = 0; i < nombre_.length(); i++) {
    nombre_mayus.push_back(toupper(nombre_[i]));
  }
  std::cout << "MI NOMBRE ES: " << nombre_ << std::endl;
}

//Veamos lo simple que se desarrolla un "getter" de una clase
std::string Persona::get_nombre() { return nombre_; }

//Y un "setter"
void Persona::set_nombre(const std::string nuevo_nombre) { nombre_ = nuevo_nombre; }

//Desarrolla debajo los demás "getter's" y "setter's" para los atributos restantes. Defínelos primero en el ".hpp"