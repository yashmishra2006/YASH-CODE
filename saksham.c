int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    char arr[n];
    int list[95];
     logic;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }

    for(int i=0; i<n; i++){
        if(arr[i]!=arr[i+1]){
            list[arr[i+1]-32]++;
        }
    }

    for(int i=0; i<95; i++){
        if(arr[i]>1){
            logic = true;
            break;
        }
    }

    if(logic==true){
        printf("No");
    }
    else{printf("Yes");}

}