#include <iostream>


class Matrix {
public:
    int dim;
    int *Arr;
    Matrix(int dim){
        this->dim = dim;
        this->Arr = new int[dim];
    }
    void Set() {
        for(int i =0; i < dim; i++){
            std::cin>>Arr[i];
        };
    }

    void get(int i, int j) {
            std::cout<<Arr[i-1]<<"\n";
    }
};
int main() {
    Matrix ob(4);
    ob.Set();
    ob.get(1, 1);
    return 0;
}
