//
// Created by Usuario on 9/4/2025.
//

#include "Material.h"

Material::Material(int clasif, int catalogo, string t, string a, string palabra, string tipo, int estado) {
    numeroDeClasificacion = clasif;
    numeroDeCatalogo = catalogo;
    titulo = t;
    autor = a;
    palabra_Clave = palabra;
    tipo_material = tipo;
    estadoMaterial = estado;
}

Material::~Material()
{
    // No hay recursos dinámicos, así que el destructor está vacío
}


// Setters
void Material::setNumeroDeClasificacion(int valor) {
    numeroDeClasificacion = valor;
}

void Material::setNumeroDeCatalogo(int valor) {
    numeroDeCatalogo = valor;
}

void Material::setTitulo(const string& valor) {
    titulo = valor;
}

void Material::setAutor(const string& valor) {
    autor = valor;
}

void Material::setPalabraClave(const string& valor) {
    palabra_Clave = valor;
}


void Material::setEstadoMaterial(int valor) {
    estadoMaterial = valor;
}

// Getters
int Material::getNumeroDeClasificacion() const {
    return numeroDeClasificacion;
}

int Material::getNumeroDeCatalogo() const {
    return numeroDeCatalogo;
}

string Material::getTitulo() const {
    return titulo;
}

string Material::getAutor() const {
    return autor;
}

string Material::getPalabraClave() const {
    return palabra_Clave;
}

int Material::getEstadoMaterial() const {
    return estadoMaterial;
}