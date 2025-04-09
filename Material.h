//
// Created by Usuario on 9/4/2025.
//

#ifndef MATERIAL_H
#define MATERIAL_H

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Material
{
  private:
    int numeroDeClasificacion;
    int numeroDeCatalogo;
    string titulo;
    string autor;
    string palabra_Clave;
    string tipo_material;
    int estadoMaterial; // 1 - Buen estado. 2 - Regular. 3- Mal estado.

  public:
  Material(int numeroDeClasificacion = 0, int numeroDeCatalogo = 0, string titulo = "", string autor = "", string palabra_Clave = "", string tipo_material = "", int estadoMaterial = 0);
  virtual ~Material ();

  void setNumeroDeClasificacion(int valor);
  void setNumeroDeCatalogo(int valor);
  void setTitulo(const string& valor);
  void setAutor(const string& valor);
  void setPalabraClave(const string& valor);
  void setEstadoMaterial(int valor);

  int getNumeroDeClasificacion() const;
  int getNumeroDeCatalogo() const;
  string getTitulo() const;
  string getAutor() const;
  string getPalabraClave() const;
  int getEstadoMaterial() const;


  virtual void setTipoMaterial(const string& valor) = 0;
  virtual void getTipoMaterial(const string& valor) = 0;
  virtual string toString() = 0;

};



#endif //MATERIAL_H
