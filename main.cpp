#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    cout << "GNO HESAPLAMA PROGRAMI" << endl;
    cout << "---------------------" << endl;    

    string harfnotu;
    double agirlik;              
    double agirlikliToplam = 0;  
    double toplamKredi = 0;      
    int ders_sayisi = 0;

    cout << "Ders sayisini giriniz: ";
    cin >> ders_sayisi;

    for (int i = 0; i < ders_sayisi; i++)
    {
        cout << i+1 << ". Dersin harf notunu giriniz: ";
        cin >> harfnotu;

        cout << i+1 << ". Dersin kredi agirligini giriniz: ";
        cin >> agirlik;

        double notDegeri = -1.0;

        if (harfnotu == "AA" || harfnotu == "aa") notDegeri = 4.0;
        else if (harfnotu == "BA" || harfnotu == "ba") notDegeri = 3.5;
        else if (harfnotu == "BB" || harfnotu == "bb") notDegeri = 3.0;
        else if (harfnotu == "CB" || harfnotu == "cb") notDegeri = 2.5;
        else if (harfnotu == "CC" || harfnotu == "cc") notDegeri = 2.0;
        else if (harfnotu == "DC" || harfnotu == "dc") notDegeri = 1.5;
        else if (harfnotu == "DD" || harfnotu == "dd") notDegeri = 1.0;
        else if (harfnotu == "FD" || harfnotu == "fd") notDegeri = 0.5;
        else if (harfnotu == "FF" || harfnotu == "ff") notDegeri = 0.0;
        else {
            cout << "Geçersiz harf notu girdiniz." << endl;
            
        }

        agirlikliToplam += notDegeri * agirlik;
        toplamKredi += agirlik;
    }

    if (toplamKredi > 0) {
        double ortalama = agirlikliToplam / toplamKredi;
        cout << "Genel Not Ortalamaniz: " << ortalama << endl;
    } else {
        cout << "Hesaplama için geçerli veri girilmedi." << endl;
    }

    cout << "\nProgrami kapatmak icin bir tusa basin...";
    cin.ignore();
    cin.get();
    return 0;   
}
