/*Implemente o redimensionamento dinˆamico na sua lista:
• Ao adicionar um elemento e a lista atingir a capacidade, utilize a fun ̧c ̃ao
resize para dobrar o tamanho.
• Ao remover um elemento e o n ́umero total de elementos cair para 25% da
capacidade, utilize a fun ̧c ̃ao resize para reduzir o tamanho pela metade.
Lembre-se de testar sua implementa ̧c ̃ao com diferentes tamanhos de lista,
garantindo que o redimensionamento funcione corretamente e que a mem ́oria
seja utilizada de forma eficiente.*/
/*#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

#define INITIAL_CAPACITY 50

struct lista{
    int *vetor;
    int tamanho;
    int capacidade;
};

void iniciar_lista(lista &lista){
    lista.tamanho = 0;
    lista.capacidade = INITIAL_CAPACITY;
    lista.vetor = new int[lista.capacidade];

}

void resize(lista &lista){
    if(lista.tamanho >= lista.capacidade){
        lista.capacidade *= 2;
    }

    else if(lista.size <= lista.capacidade / 4)
}*/

#include<iostream>
using namespace std;



void removerelemento(int*&vetor,int&tamanho,int valor){
    bool encontrado = false;

    for(int i =0;i<tamanho;i++){
        if(vetor[i] ==valor){
            encontrado = true;
        for(int j = 0;j<tamanho - 1;j++){
            vetor[j] = vetor[j] + 1;
        }
        }
        tamanho --;
        break;
    }
}
int main(){
    
    int tamanho = 50;
    int* vetor = new int[tamanho];
    
    
    for(int i = 0;i<tamanho;i++){
        cout << "Informe os valores que deseja colocar na lista:" << endl;
        cin >> vetor[i];
    }

    cout << "Vetor Informado é:" << endl;

    for(int i =0;i<tamanho;i++){
        cout << vetor[i] << endl;
    }

    int tamanho_novo = 100;
    int* vetor_duplicado = new int[tamanho_novo];

    for(int i = 0;i<tamanho_novo;i++){
        cout << "Informe os novos valores que deseja colocar na lista:" << endl;
        cin >> vetor[i];

    }

    cout << "Vetor novo com tamanho duplicado:" << endl;

    for(int i = 0;i < tamanho_novo;i++){
        cout << vetor[i] << ",";

    }




    return 0;
}