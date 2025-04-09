//
// Created by aleca on 4/9/2025.
//

#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <sstream>
using namespace std;



class Usuario {
private:
  string idUsuario;
  string nombreCompletoUsuario;
  bool estado;
  public:
    Usuario();
    Usuario(string idU,string nomCompleto);
    ~Usuario();
    void setIdUsuario(string idUsuario);
    void setNombreCompletoUsuario(string nomCompleto);
    void setEstado(bool estado);
    string getIdUsuario();
    string getNombreCompletoUsuario();
    bool getEstado();
    string toString();

};



#endif //USUARIO_H
