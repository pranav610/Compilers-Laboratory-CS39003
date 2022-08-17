#define EXCH(X,Y,Z) ((Z)=(X), (X)=(Y), (Y)=(Z))
void selectionSort(int data[], int nod){
    int i;

    for(i=0; i<nod-1; ++i){
        int max, j, temp;

        temp = data[i];
        max = i;
        for(j = i+1; j < nod; ++j)
            if(data[j] > temp){
                temp = data[j];
                max = j;
            }
        EXCH(data[i],data[max],temp);
    }
}