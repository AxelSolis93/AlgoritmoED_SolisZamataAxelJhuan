#include <iostream>
using namespace std;
struct Nodo{
    int coef;
    int grade;
    Nodo *next;
};
struct Polinomio{
    Nodo *head = NULL;
    int size(){
        int cont=0;
        Nodo *x = this->head;
        while(x!=NULL){
            cont++;
            x = x->next;
        }
    }
    void Insertar(int coef, int grade){
         if(this->head==NULL){
            Nodo *new_node = new Nodo();
            new_node->coef = coef;
            new_node->grade = grade;
            this->head=new_node;
            this->head->next=NULL;
         }else{
                Nodo *new_node = new Nodo();
                new_node->coef=coef;
                new_node->grade=grade;
                new_node->next=this->head;
                this->head=new_node;

            }

    }
     Nodo* add(int coef,int grade){
        Nodo *x = this->head;
        while(x!=NULL){
            if(x->grade==grade){
                x->coef = x->coef+coef;
            }
            x=x->next;
        }
        return x;
    }
    void Print(){
        Nodo *x = this->head;
        while(x!=NULL){
            cout<<x->coef << "x*" << x->grade<<" ";
            x = x->next;
        }
        cout<<endl;
    }
};
int main(){
    Polinomio a;
    a.Insertar(5,3);
    //a.Print();
    a.Insertar(3,2);
    a.Insertar(7,1);
    a.Insertar(9,0);
    a.Print();
    a.add(3,2);
    a.add(11,0);
    a.Print();
    return 0;
}
