#include <iostream>
#include "list"
#include "map"
class Foto{
public:
    Foto(std::string name,int l,int h,std::string* luogo, bool preferita) : Nome(name),Lunghezza(l),Altezza(h),Luogo(luogo),Preferita(preferita){}

    bool isPreferita() const {
        return Preferita;
    }

    void setPreferita(bool preferita) {
        Preferita = preferita;
    }

    std::string *getLuogo() const {
        return Luogo;
    }

    int getAltezza() const {
        return Altezza;
    }

    int getLunghezza() const {
        return Lunghezza;
    }
    void addPerson(std::string * nome){
        Person.push_back(nome);
    }
    void visualizza(){
        std::cout<<"\n foto: "<<Nome;
    }
    bool checkPerson(std::string* nome){
        for(auto itr=Person.begin();itr!=Person.end();itr++)
            if((*itr)==nome)
            return true;
    }

private:
    int Lunghezza,Altezza;
    std::string Nome;
    std::string* Luogo;
    bool Preferita;
    std::list<std::string*> Person;
};

class Collection{
public:
    void addFoto(Foto* f){
        collection.insert(collection.end(),std::make_pair(count,f));
        count++;
    }
    void removeFoto(int id){
        auto p=collection.find(id);
        collection.erase(p);
    }
     void setPreferita(int id) {
         auto p = collection.find(id);
         p->second->setPreferita(true);
     }

    std::list<Foto*> getPreferiteLuogo(std::string* luogo){
        for(auto itr=collection.begin();itr!=collection.end();itr++){
            if((*itr).second->getLuogo()==luogo && (*itr).second->isPreferita())
                preferiteLuogo.push_back((*itr).second);
        }
        return preferiteLuogo;
    }

    std::list<Foto*> getPreferitePerson(std::string* nome){
       for(auto itr=collection.begin();itr!=collection.end();itr++){
          if((*itr).second->checkPerson(nome))
          {
              preferitePerson.push_back((*itr).second);
          }
     }
        return preferitePerson;
    }

private:
    int count=0;
    std::list<Foto*> preferiteLuogo;
    std::list<Foto*> preferitePerson;
    std::map<int,Foto*> collection;
};

int main() {
    std::cout << "Esercizio 5" << std::endl;
    Foto A("A",5, 4, (std::string *) "montagna", false);
    Foto B("B",6, 4, (std::string *) "mare", true);
    Foto C("C",6,4,(std::string *) "mare",true);
    Foto D("D",5,4,(std::string *) "mare",false);
    A.addPerson((std::string *) "Filippo");
    D.addPerson((std::string *) "Filippo");
    Collection Agosto;
    Agosto.addFoto(&A);
    Agosto.addFoto(&B);
    Agosto.addFoto(&C);
    Agosto.addFoto(&D);
    Agosto.setPreferita(0);
    Agosto.setPreferita(3);
    std::list<Foto*> preferiteMare;
    preferiteMare= Agosto.getPreferiteLuogo((std::string *) "mare");
    std::list<Foto*> preferiteFilippo;
    preferiteFilippo= Agosto.getPreferitePerson((std::string *) "Filippo");
    std::cout<<"le foto preferite del mare sono: ";
    for(auto itr=preferiteMare.begin();itr!=preferiteMare.end();itr++){
        (*itr)->visualizza();
    }
    std::cout<<"\n le foto preferite con Filippo sono: ";
    for (auto itr=preferiteFilippo.begin();itr!=preferiteFilippo.end();itr++) {
        (*itr)->visualizza();
    }

}
