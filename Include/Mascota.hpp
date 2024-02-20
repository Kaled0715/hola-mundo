class Mascota
{
private:
    int Felicidad;
    int Energia;
public:
    Mascota() {
    this->Energia = 0;
    }
    ~Mascota() {}
    void Comer(){
    this->Energia += 1;    
    }
    int LeerEnergia(){
    return this->Energia;   
    }
};