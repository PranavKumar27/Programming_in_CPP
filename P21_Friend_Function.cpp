#include <iostream>

using namespace std;

class Israel;

class India
{
private:
    string Brahmos_missile_key;
    string Tejas_missile_key;
    string Rafale_key;

public:
    India()
    {
        Brahmos_missile_key = "MSXXXXRO20";
        Tejas_missile_key = "TJXXX25";
        Rafale_key = "@#$XXXX73K";
    }
    friend class Israel;
    friend bool check_with_Russia(India ind);
    bool talk_to_India(Israel& talks)
    {
        cout << "India and Israel Jointly Make S500, S700 Defence Systems" << endl;
    }

};

bool check_with_Russia(India attack)
{
    cout << "India indegenious in Launching Tejas Key as " << attack.Tejas_missile_key  << " ------> "<< endl;
    cout << "India indegenious  in Launching Brahmos Key as " << attack.Brahmos_missile_key << " ------> " << endl;
    cout << "Russia help in Launching Rafael Key as " << attack.Rafale_key << " ------> " << endl;
    return true;
}

class Israel
{
    string S400_missile_key;
public:
    Israel()
    {
        S400_missile_key = "LXTYUIN77";
    }
    void Launch_All_Missile_to_Enemy(India attack)
    {
        cout << "Launching Tejas Key as " << attack.Tejas_missile_key  << " ------> "<< endl;
        cout << "Launching Brahmos Key as " << attack.Brahmos_missile_key << " ------> " << endl;
        cout << "Launching Rafael Key as " << attack.Rafale_key << " ------> " << endl;
        cout << "Launching S400 Defence Key as " << S400_missile_key << " ------> " << endl;
    }
    friend bool talk_to_India(Israel& talks);
};




int main()
{
    cout << "##################################  India Attacks Terrorism  ##################################  " << endl;
    India attack;
    Israel Is;
    Is.Launch_All_Missile_to_Enemy(attack);

    cout << "##################################  Friend Function check with Russia ##################################  " << endl;
    check_with_Russia(attack);
    cout << "##################################  Friend Function check with Israel ##################################  " << endl;

    attack.talk_to_India(Is);
    return 0;
}
