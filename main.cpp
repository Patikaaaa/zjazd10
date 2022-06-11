#include <iostream>
#include "math.h"
using namespace std;

unsigned int silnia(unsigned int n) {
    if(n>1)
        return n*silnia(n-1);
    else
        return 1;
}

void bezgledna()
{
    int n =0;
    cin>>n;
    if(n>=0){
        std::cout << "BEZZGLEDNA:" <<n<< std::endl;
    }else{
        std::cout << "BEZZGLEDNA:" <<-n<< std::endl;

    }


}
void zadaniesilnia()
{
    int n =0;
    cin>>n;

        std::cout << "SILNIA Z N:"<<n<<":"<<silnia(n)<< std::endl;


}
void zadanienieujemnnadopotegin()
{
    int n =0;
    cin>>n;
    if(n>=0){
        std::cout << " 2^N:"<<n<<":"<<pow(2,n)<< std::endl;
    }
}
void zadaniepierwiastekbezxbiblioteki()
{
    int n =0;
    cin>>n;
    int pierwiastek = (n^2)^(1/4);
    if(n>=0){
        std::cout << " |sqrt N|:"<<n<<":"<<pierwiastek<< std::endl;
    }
}
int minIndex(int tablica[])
{
    int n = sizeof(tablica);
    int result  = 90;

    for (int i = 0; i <= n; i++) {
        if(tablica[i]<result){
            result = i;
        }
    }
    return result;
}



float minIndex(float tablica[])
{
    int n = sizeof(tablica);
    float result  = 90;

    for (int i = 0; i <= n; i++) {
        if(tablica[i]<result){
            result =i;
        }
    }
    return result;
}
int maxIndex(int tablica[])
{
    int n = sizeof(tablica);
    int result  = 0;

    for (int i = 0; i <= n; i++) {
        if(tablica[i]>=result){
            result = i;
        }
    }
    return result;
}



float maxIndex(float tablica[])
{
    int n = sizeof(tablica);
    float result  = 0;

    for (int i = 0; i <= n; i++) {
        if(tablica[i]>=result){
            result =i;
        }
    }
    return result;
}

int max(int tablica[])
{
    int n = sizeof(tablica);
    int result  = 0;

    for (int i = 0; i <= n; i++) {
        if(tablica[i]>=result){
            result = tablica[i];
        }
    }
    return result;
}



float max(float tablica[])
{
    int n = sizeof(tablica);
    float result  = 0;

    for (int i = 0; i <= n; i++) {
        if(tablica[i]>=result){
            result = tablica[i];
        }
    }
    return result;
}


int min(int tablica[])
{
    int n = sizeof(tablica);
    int result  = 0;

    for (int i = 0; i <= n; i++) {
        if(tablica[i]<result){
            result = tablica[i];
        }
    }
    return result;
}



float min(float tablica[])
{
    int n = sizeof(tablica);
    float result  = 0;

    for (int i = 0; i <= n; i++) {
        if(tablica[i]<result){
            result = tablica[i];
        }
    }
    return result;
}


int suma(int tablica[])
{
    int n = sizeof(tablica);
    int result  = 0;

    for (int i = 0; i <= n; i++) {
        result +=tablica[i];
    }
    return result;
}

float suma(float tablica[])
{
    int n = sizeof(tablica);
    float result  = 0.0;

    for (int i = 0; i <= n; i++) {
        result +=tablica[i];
    }
    return result;
}

void zad1(){
    int tablica [10] = { 1,2,3,4,5,6,7,8,9,0 };
    for (const auto &item: tablica){
        std::cout << item << std::endl;
    }
    std::cout << "SUMA:" <<suma(tablica)<< std::endl;
    std::cout << "MAX:" <<max(tablica)<< std::endl;
    std::cout << "MIN:" <<min(tablica)<< std::endl;
    std::cout << "MAX INDEX:" <<maxIndex(tablica)<< std::endl;
    std::cout << "MIN INDEX:" <<minIndex(tablica)<< std::endl;

}
void zad2(){
    float tablica [10] = { 0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,0.0 };
    for (const auto &item: tablica){
        std::cout << item << std::endl;
    }
    std::cout << "SUMA:" <<suma(tablica)<< std::endl;
    std::cout << "MAX:" <<max(tablica)<< std::endl;
    std::cout << "MIN:" <<min(tablica)<< std::endl;
    std::cout << "MAX INDEX:" <<maxIndex(tablica)<< std::endl;
    std::cout << "MIN INDEX:" <<minIndex(tablica)<< std::endl;


}
void zad3(){
    char tablica [10] =  "abecadlo!";
    for (const auto &item: tablica){
        std::cout << item << std::endl;
    }
}

void polekwadratu(){

    int n =0;
    cin>>n;
    int pole = n^2;
    int obwod = 4*n;
    int objetoscszescianu=n^3;
    std::cout << "pole kwadratu o boku n:"<<n<< ":"<<pole << std::endl;
    std::cout << "obwod kwadratu o boku n:"<<n<< ":"<<obwod << std::endl;
    std::cout << "objetosc szescianu o boku n:"<<n<< ":"<<objetoscszescianu << std::endl;

}
void temperaturafarenhita(){

    float n =0;
    cin>>n;
    float faren = (1.8*n)+32;
    std::cout << "temperatura f:"<<n<< ":"<<faren << std::endl;

}
void gwiazdki7(){
    for (int i = 0; i < 17; ++i) {
        std::cout << "*";

    }
}

void prostokat(){
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if(i==0 || i==4){
                std::cout << "*";
            }else{
                if(j==0||j==4){

                    std::cout << "*";
                }else{

                    std::cout << " ";
                }
            }

    }

        std::cout << ""<<endl;

    }



}
void piramida(){

    int n =0;
    cin>>n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {

            std::cout <<j;
        }

        std::cout <<endl;
    }
}

void odzeradosto(){

    for (int i = 0; i <= 100; i++) {

        std::cout <<i<<endl;
    }

}

void odstodozero(){

    for (int i = 100; i >= 0; i--) {

        std::cout <<i<<endl;
    }

}

void odzeradostoparzyste(){

    for (int i = 0; i <= 100; i++) {
        if(i%2==0){
        std::cout <<i<<endl;
    }}

}


void odzeradostopodzielneprzez8(){

    for (int i = 0; i <= 100; i++) {
        if(i%8==0){

        std::cout <<i<<endl;}
    }

}
void odzeradostopodzielneprzez3lub5(){

    for (int i = 0; i <= 100; i++) {
        if(i%3==0||i%5==0){

        std::cout <<i<<endl;}
    }

}
void odzeradostopodzielneprzez3lub5aleninerazem(){

    for (int i = 0; i <= 100; i++) {
        if(i%3==0||i%5==0){
        if(i%3==0&&i%5==0){}else{

        std::cout <<i<<endl;}}}
    }

    void sumadon(){

        int n =0;
        cin>>n;
        int suma = 0;
        for (int i = 1; i <= n; i++) {
            suma +=i;
        }

        std::cout <<suma<<endl;
};
    void bezwzgledna(){

        int n =0;
        cin>>n;
        int bezwzgleda = (n^2)^(1/2);

        std::cout <<bezwzgleda<<endl;
};

    void  odwrotnosc(){

        int n =0;
        cin>>n;
        if(n==0){
            std::cout<<"nie da się!"<<endl;
        }
        else{
            std::cout<<-n<<endl;
        }

};
    void  pierwiastek(){

        int n =0;
        cin>>n;
        if(n<0){
            std::cout<<"tylko w liczbach urojonych!"<<endl;
        }
        else{
            int pierwiastek = n^(1/2);
            std::cout<<pierwiastek<<endl;
        }

};
    void  parzystanieparzysta(){

        int n =0;
        cin>>n;
        if(n%2==0){
            std::cout<<"parzysta"<<endl;
        }else{
            std::cout<<"nieparzysta"<<endl;

        }

};

    void  podzielnosc(){

        int n =0;
        int m =0;
        cin>>n;
        cin>>m;
        if(n%m==0){
            std::cout<<"podzielna"<<endl;
        }else{
            std::cout<<"niepodzielna"<<endl;

        }

};
    void  wieksza(){

        int n =0;
        int m =0;
        cin>>n;
        cin>>m;
        if(m>n){
            std::cout<<m<<endl;
        }else if(m<n){
            std::cout<<n<<endl;

        }else{
            std::cout<<"n i m są równe"<<endl;

        }

};
    void  wiekszaz3(){

        int n =0;
        int m =0;
        int o =0;
        cin>>n;
        cin>>m;
        cin>>o;
        if(n>m && n>o){
            std::cout<<"n:"<<n<<endl;

        }else
        if(m>n && m>o){
            std::cout<<"m:"<<m<<endl;

        }else
        if(o>n && o>m){
            std::cout<<"o:"<<o<<endl;

        }else{
            std::cout<<"pewne liczby są równe"<<endl;

        }

};


int main() {

    ////kometarz liniowy
    /*
     komenntarz blokowy
     */
//tablice
    zad1();
    zad2();
    zad3();
    //konniec tablic
    //funnkcje
    bezgledna();
    zadaniesilnia();
    zadanienieujemnnadopotegin();
    zadaniepierwiastekbezxbiblioteki();
    //koniec funnkcji
    //zmienne
    polekwadratu();
    temperaturafarenhita();
    //koniec zminenne
    //petle
    gwiazdki7();
    prostokat();
    piramida();
    odzeradosto();
    odzeradostoparzyste();
    odstodozero();
    odzeradostopodzielneprzez8();
    odzeradostopodzielneprzez3lub5();
    odzeradostopodzielneprzez3lub5aleninerazem();
    sumadon();
    //koniec petli
    //warunki
    bezwzgledna();
    odwrotnosc();
    pierwiastek();
    parzystanieparzysta();
    podzielnosc();
    wieksza();
    wiekszaz3();
    ///koniec warunkow
    return 0;
}
