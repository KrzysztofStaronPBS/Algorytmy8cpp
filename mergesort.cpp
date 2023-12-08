// scalanie dwóch podtablic L oraz M w arr
void merge(int arr[], int p, int q, int r) {

    // Tworzenie podtablic L (indeksy od p do q)
    // oraz M (od q + 1 do r)
    // liczenie ilości indeków podtablic
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    // przepisywanie liczb z oryginalnej tablicy do podtablic
    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    // utrzymanie obecnego indeksu podtablic oraz głównej tablicy
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    // dopóki nie dotrzemy to końca tablicy L albo tablicy M, bierzemy
    // większy z elementów z L i M i umieszczamy go na poprawnym miejscu
    // w macierzystej tablicy
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    // Gdy skończą się nam elementy w tablicy L albo M,
    // bierzemy pozostałe elementy i umieszczamy je w arr
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void merge_pes(int arr[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2) {
        // Zmiana warunku na >= dla sortowania malejącego
        if (L[i] >= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = M[j];
        j++;
        k++;
    }
}

// Podział tablic na dwie podtablice, sortowanie ich oraz scalanie
void mergeSort(int arr[], int l, int r) {
    if (l < r) {

        // m jest punktem gdzie tablica jest dzielona na dwie podtablice
        int m = l + (r - l) / 2;
        // dzielenie tablicy wejściowej na dwie podtablice
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Scalanie posortowanych podtablic
        merge(arr, l, m, r);
    }
}

void mergeSort_pes(int arr[], int l, int r) {
    if (l < r) {

        // m jest punktem gdzie tablica jest dzielona na dwie podtablice
        int m = l + (r - l) / 2;
        // dzielenie tablicy wejściowej na dwie podtablice
        mergeSort_pes(arr, l, m);
        mergeSort_pes(arr, m + 1, r);

        // Scalanie posortowanych podtablic
        merge_pes(arr, l, m, r);
    }
}