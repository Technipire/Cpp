#include<iostream>
#include<fstream>

class foo {
    public:
        foo() {
            arr = new unsigned int [size];
        }
        int getSize() {return size;}
        void setSize(unsigned int newSize) {size = newSize;}
        unsigned int *arr;
    private:
        unsigned int size = 3;

};


int main() {
    unsigned char* Buffer;
    unsigned int BufferSize;
    std::fstream fin;
    fin.open("lena.jpg", std::ios::in|std::ios::binary);
    fin.read((char*)Buffer, BufferSize);
    /*
    for (unsigned i = 0; i < BufferSize; ++i) {
        std::cout << "in for" << std::endl;
        std::cout << Buffer[i] << std::endl;
    }*/
    std::cout << BufferSize << std::endl;
    std::cout << "im here" << std::endl;
    fin.close();
    foo f;
    std::cout << f.getSize() << std::endl;
    f.setSize(9);
    std::cout << f.getSize() << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < f.getSize(); ++i){
        f.arr[i] = i;
        std::cout << f.arr[i] << std::endl;
    }
    
    std::cout << std::endl;
    unsigned int *temp = new unsigned int[18];
    std::cout << "size = " << f.getSize() << std::endl;
    for (unsigned i = 0; i < f.getSize(); ++i) {
        temp[i] = f.arr[i];
        std::cout << f.arr[i] << std::endl;
    }
    std::cout << "test below" << std::endl;
    for (unsigned i = 0; i < f.getSize(); ++i){
        std::cout <<"size = " << f.getSize() << std::endl;
        std::cout << f.arr[i] << std::endl;
    }
    delete [] f.arr;
    f.arr = temp;
    f.setSize(f.getSize() * 2);
    for (int i = 0; i < f.getSize(); ++i){
        std::cout << f.arr[i] << std::endl;
    }
    return 0;
}
