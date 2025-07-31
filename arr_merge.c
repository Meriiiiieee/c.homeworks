int main() {
    int arr1[SIZE1];
    int arr2[SIZE2];
    int temp[SIZE1 + SIZE2];
    int i =0;
    int j =0;
    int m =0;

    printf("Enter the elements: ");
    for (int i = 0; i < SIZE1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements: ");
    for (int i = 0; i<SIZE2; i++) {
        scanf("%d", &arr2[i]);
    }

    while (i< SIZE1 &&  j<SIZE2) {
        if (arr1[i] < arr2[j]){
           temp[m++] = arr1[i++];
        } else {
            temp[m++] = arr2[j++];
          }
     }     

    while (i < SIZE1) {
          temp[m++] = arr1[i++];
    }

    while ( j<SIZE2) {
          temp[m++] = arr2[j++];
    }      

    printf("Merged array is: ");
    for (int m =0; m< SIZE1 + SIZE2; m++) {
        printf("%d", temp[m]);
    } 

    return 0; 
}    
