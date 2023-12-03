void sort_babelkowe(int arr[]) {
    // deklaracja tablicy z dziesięcioma wartościami całkowitymi
    // deklaracja zmiennej pomocniczej potrzebnej do zamiany wartości elementów tablicy
    // pętla w pętli, pierwsza "tworzy bąbelek", druga pętla "wypycha bąbelek na powierzchnię"
    const int n = 10;
    int tmp;
    for(int i = 0; i < n; i ++){
        for(int j = 1; j < n; j ++){
            if(arr[j] < arr[j - 1]){
                //w C nie ma funkcji swap(), więc muszę ręcznie zamieniać wartości poszczególnych
                // elementów; wspomagam się w tym celu trzecią zmienną pomocniczą przechowującą wartość
                // jednej z zamienianych wartości
                tmp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
