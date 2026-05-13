#include <stdio.h>

int arr[100], n = 0;

void display() {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int choice, val, pos;
    do {
        printf("\n1.Insert 2.Update 3.Delete 4.Display 5.Search 0.Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: printf("Val: "); scanf("%d", &arr[n++]); break;
            case 2: printf("Pos & Val: "); scanf("%d %d", &pos, &val); arr[pos] = val; break;
            case 3: printf("Pos to delete: "); scanf("%d", &pos); 
                    for(int i=pos; i<n-1; i++) arr[i] = arr[i+1]; n--; break;
            case 4: display(); break;
            case 5: printf("Val to search: "); scanf("%d", &val);
                    for(int i=0; i<n; i++) if(arr[i]==val) printf("Found at %d\n", i); break;
        }
    } while(choice != 0);
    return 0;
}
