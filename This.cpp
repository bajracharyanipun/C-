#include <iostream>
using namespace std;
class weight{
    float value;
    public:
    weight(float value){
        this->value = value;
    } float getValue(){
        return this->value;}
        void FindHevierWeight(weight obj){
            if(this->value>obj.value){
                cout<<"weight 1 is heavier than weight 2"<<endl;
            }
            else if(this->value<obj.value){
                cout<<"weight 2 is heavier than weight 1"<<endl;
            }
            else{
                cout<<"both weights are equal"<<endl;
            }
        }
};
int main(){
    weight w1(10), w2(20);
    cout<<"weight 1="<<w1.getValue()<<"weight 2="<<w2.getValue()<<endl;
    w1.FindHevierWeight(w2);
    return 0;
}