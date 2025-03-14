#include <iostream>
#include <chrono>

using namespace std::chrono;
using namespace std;

int main() {
    
    int bilangan, i;

    bool prima = true;
    
    cout << "masukan bilangan: ";
    cin >> bilangan;//masukan input user disini

    //memulai timer untuk menghitung waktu eksekusi
    auto start = high_resolution_clock::now();
    if (bilangan == 0 || bilangan == 1)
    {
        prima = false;
    }
    else
    {
        for (i = 2; i <= bilangan/2; i++)
        {
            if (bilangan % 2 == 0)
            {
               prima = false; 
            }
            break;
        }
    }
    
    if(prima)
    cout << bilangan <<" adalah bilangan prima"<<endl;
    else
    cout << bilangan <<" bukan bilangan prima"<<endl;

    //stop timer untuk menghitung waktu eksekusi
    auto stop = high_resolution_clock::now();

    //menghitung timer 
    auto duration = duration_cast<microseconds>(stop - start);

    cout <<"waktu eksekusi: " << duration.count() << "ms" <<endl;
}