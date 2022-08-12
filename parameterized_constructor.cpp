#include<iostream>
using namespace std;

class VolumeOfRect{
    private:
    double len;
    double bre;
    
    public:
        int height;
        VolumeOfRect(double len, double bre, double height) // Parameterized Constructor
        {
            this->len = len;
            this->bre = bre;
            cout<<"The volume is:"<<len*bre*height;
        }
};

int main(){
  VolumeOfRect(5,6,7);
  return 0;
}