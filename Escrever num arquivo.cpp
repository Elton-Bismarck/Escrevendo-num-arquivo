#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::string linha;
    //Escrita no arquivo:
    std::ofstream arquivo;
    arquivo.open("Teste.txt");

    if(arquivo.is_open()){
        std::cout << "Arquivo foi aberto.\n";
        std::getline(std::cin,linha);
        arquivo << linha << "\n";
        std::cout << linha << "\n";
        linha.clear();
        arquivo.close();
    }
    else{
        std::cout << "Nao foi possivel abrir o arquivo.\n";
        return EXIT_FAILURE;
    }
    return 0;
}
