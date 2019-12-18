
void shift_element(int *arr, int i){
    int p1 = *(arr);
    for (int k = 1; k< i+1; k++){
        int p = *(arr+k);
        *(arr + k) = p1;
        p1 = p;
    }
}

void insertion_sort(int *arr, int len){
    for (int i = 0;i<len; i++){
        int counter = 0;
        int this = *(arr+i);
        int cd = i;
        while (cd > 0 && this < *(arr+cd-1))
        {
            counter++;
            cd --;
        }
        if (counter >0){
            shift_element((arr- counter+i), counter);
            *(arr-counter+i) = this;
        }
    }
}
