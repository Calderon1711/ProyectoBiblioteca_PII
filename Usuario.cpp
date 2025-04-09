//
// Created by aleca on 4/9/2025.
//

#include "Usuario.h"
//Constructores
Usuario :: Usuario(){
  this->nombreCompletoUsuario = "";
  this->idUsuario = "";
  this->estado = false;
}

Usuario :: Usuario(string idU,string nomCompleto){
  this->nombreCompletoUsuario = nomCompleto;
  this->idUsuario = idUsuario;
  this->estado = false;
}

//destructor
Usuario :: ~Usuario(){}

//set
void Usuario :: setIdUsuario(string idUsuario){
  this->idUsuario = idUsuario;
}

void Usuario :: setNombreCompletoUsuario(string nomCompleto){
  this->nombreCompletoUsuario = nomCompleto;
}

void Usuario :: setEstado(bool estado){
  this->estado = estado;
}

//gets
string Usuario :: getIdUsuario(){
  return this->idUsuario;
}
string Usuario :: getNombreCompletoUsuario(){
  return this->nombreCompletoUsuario;
}
bool Usuario :: getEstado(){
  return this->estado;
}

//to string

string Usuario:: toString(){
  stringstream s;
    s<<"----------------Datos Usuario---------------"<<endl<<endl;
    s<<"Nombre Completo: "<<this->nombreCompletoUsuario<<endl;
    s<<"IdUsuario: "<<this->idUsuario<<endl;
      if(estado){
        s<<"Estado: "<<"Activo "<<endl;
      } else{
              s<<"Estado: "<<"Inactivo "<<endl;
             }
    return s.str();
}