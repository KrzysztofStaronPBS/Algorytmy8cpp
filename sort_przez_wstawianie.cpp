void sort_przez_wstawianie(int arr[], int elementy){
    //deklaracja tablicy z dziesięcioma wartościami całkowitymi
    //deklaracja zmiennej pomocniczej potrzebnej do zamiany wartości elementów tablicy
    int tmp;
    //pętla, w której jest główna część sortowania
    for(int i = 1; i < elementy; i ++){
        // w tmp przechowuję wartość elementu, który chcę wstawić na właściwe miejsce
        tmp = arr[i];
        int j = i - 1;
        // ta pętla szuka prawidłowego miejsca dla wartości przechowywanej w tmp
        while(j >= 0 && tmp <= arr[j]){
            arr[j + 1] = arr[j];
            j --;
        }
        arr[j + 1] = tmp;
    }
}
void sort_przez_wstawianie_pes(int arr[], int elementy){
    //deklaracja tablicy z dziesięcioma wartościami całkowitymi
    //deklaracja zmiennej pomocniczej potrzebnej do zamiany wartości elementów tablicy
    int tmp;
    //pętla, w której jest główna część sortowania
    for(int i = 1; i < elementy; i ++){
        // w tmp przechowuję wartość elementu, który chcę wstawić na właściwe miejsce
        tmp = arr[i];
        int j = i - 1;
        // ta pętla szuka prawidłowego miejsca dla wartości przechowywanej w tmp
        while(j >= 0 && tmp <= arr[j]){
            arr[j + 1] = arr[j];
            j --;
        }
        arr[j + 1] = tmp;
    }
}