#include <iostream>
#include <vector>
using namespace std;
class Mexanizm {
public:
    virtual void dvizeniya()
    {

    }
};
class Swim:public Mexanizm {
public:
    void dvizeniya() {
        cout << "plavat' nada" << endl;
    }
   
};
class Fly :public Mexanizm {
public:
    void  dvizeniya() {
        cout << "poletayem?" << endl;
    }
};
class Teleport :public Mexanizm {
public:
    void  dvizeniya() {
        cout << "bam, i ya doma" << endl;
    }
};
class karabkatcya :public Mexanizm {
public:
    void  dvizeniya() {
        cout << "Everest???" << endl;
    }
};

class Player
{
public:
    void dviz (Mexanizm* mexanizm)
    {
        mexanizm->dvizeniya();
    }
   
};



int main() {
    setlocale(0, "ru");
    Mexanizm mexanizm;
    Player player;
    Swim swim;
    Fly fly;
    Teleport tp;
    karabkatcya karab;
    player.dviz(&swim);
    player.dviz(&fly);
    player.dviz(&tp);
    player.dviz(&karab);
    

    return 0;
}
