//
// Created by Filippo Crinzi on 15/09/22.
//

#ifndef MAIN_CPP_MATRIX_H
#define MAIN_CPP_MATRIX_H
#include "vector"
#include <exception>


template <typename T>
class Matrix {
public:
 Matrix(int r,int c,int def) : Righe(r),Colonne(c),Default(def){
     Matrice.reserve(Righe*Colonne);
     for(auto k=0;k!=Righe*Colonne;k++){
         Matrice[k]=def;
     }
 }
 void setElement(int r,int c,T Element){
     if(r>Righe or c>Colonne or c<0 or r<0) {
         throw std::out_of_range("valori troppo grandi");
     }
     Matrice[((r)*Colonne)+(c)]=Element;

 }

 T getElement(int r,int c){
     return Matrice[((r)*Colonne)+(c)];
 }

 Matrix operator=(const Matrix & original){
     if(&original!=this){
         Righe=original.Righe;
         Colonne=original.Colonne;
         Matrice.clear();
         for(int k=0;k!=Righe*Colonne;k++){
             Matrice[k]=original.Matrice[k];
         }
     }
     return *this;
 }
 Matrix(const Matrix & original){
     Righe=original.Righe;
     Colonne=original.Colonne;
     for(int k=0;k!=Righe*Colonne;k++){
         Matrice[k]=original.Matrice[k];
     }

 }


private:
    int Righe,Colonne,Default;
    std::vector<T> Matrice;

};


#endif //MAIN_CPP_MATRIX_H
