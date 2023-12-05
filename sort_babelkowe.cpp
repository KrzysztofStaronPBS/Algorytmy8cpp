#include <algorithm>
using namespace std;
void sort_babelkowe(int arr[], int elementy) {
    // deklaracja tablicy z dziesięcioma wartościami całkowitymi
    // deklaracja zmiennej pomocniczej potrzebnej do zamiany wartości elementów tablicy
    // pętla w pętli, pierwsza "tworzy bąbelek", druga pętla "wypycha bąbelek na powierzchnię"
    int tmp;
    bool zamiana;
    for(int i = 0; i < elementy; i ++){
        zamiana = false;
        for(int j = 1; j < elementy - i - 1; j ++){
            if(arr[j] < arr[j - 1]){
                swap(arr[j], arr[j - 1]);
                zamiana = true;
            }
        }
        if(!zamiana) break;
    }
}

void sort_babelkowe_pes(int arr[], int elementy) {
    int tmp;
    bool zamiana;
    for(int i = 0; i < elementy; i ++){
        zamiana = false;
        for(int j = 1; j < elementy - i - 1; j ++){
            if(arr[j] > arr[j - 1]){
                swap(arr[j], arr[j - 1]);
                zamiana = true;
            }
        }
        if(!zamiana) break;
    }
}
