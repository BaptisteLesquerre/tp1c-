#include <iostream>
#include "hotel.h"
#include <vector>

hotel::Hotel::Hotel(std::string idhotel, std::string nom, std::string ville, std::vector<hotel::Chambre> tabchambre):_idhotel(idhotel),_nom(nom),_ville(ville),_tabchambre(tabchambre){
}

std::string hotel::Hotel::idhotel() const {
    return _idhotel;
}

std::string hotel::Hotel::nom() const {
    return _nom;
}

std::vector<hotel::Chambre> hotel::Hotel::tabchambre() const {
    return _tabchambre;
}

std::string hotel::Hotel::ville() const {
    return _ville;
}

void hotel::Hotel::update_idhotel(std::string idhotel){
    _idhotel = idhotel;
}

void hotel::Hotel::update_nom(std::string nom){
    _nom = nom;
}

void hotel::Hotel::update_ville(std::string ville){
    _ville = ville;
}

