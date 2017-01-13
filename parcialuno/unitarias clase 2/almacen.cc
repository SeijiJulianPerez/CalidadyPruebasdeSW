#include "almacen.h"

Almacen::Almacen(){
	lista = new std::vector<int>;
}

Almacen::Almacen(int n){
	lista = new std::vector<int>;
	lista->reserve(n);
}

void Almacen::eliminar(int pos){
	lista->erase(lista->begin()+pos);
}

void Almacen::add(int i){
	lista->push_back(i);
}

bool Almacen::empty(){
	return lista->empty();
}

int Almacen::size(){
	return lista->size();
}