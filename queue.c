#include <stdio.h>
#include <stdlib.h>

#define size 3

    int arr[size];
    unsigned int front = 0;
    int rear = -1;

    int o = 1;


void enqueue(void);
int dequeue(void);
void peek(void);

int main(void) {

    if(o) {

        printf("Enter data => 1\n");
        printf("Delete data => 2\n");
        printf("Display data => 3\n");
        printf("Exit program => 4\n");
        printf("\n");

        o = 0;

    }

    while(1) {

        int option;

        printf("Chose option: ");
        scanf("%d", &option);

        switch(option) {

            case 1:
                enqueue();
            break;

            case 2:
                printf("%d\n", dequeue());
                main();
            break;

            case 3:
                peek();
                main();
            break;

            case 4:
                exit(0);
            break;


            default:
                printf("Wrong option");
                main();

        }

    }

    return 0;
}

void enqueue() {

    if(rear==(size-1)) {

        printf("Queue is full\n");

    } else {

        int data;

        printf("Enter value: ");
        scanf("%d", &data);

        rear++;
        arr[rear] = data;
        main();

    }

}

int dequeue(void) {

    int item;

    if(rear==-1) {

        printf("Queue is emty\n");
        main();

    } else {

        if(front>rear) {

            front = 0;
            rear = -1;
            printf("Queue is emty\n");
            main();

        }

        item = arr[front];
        front++;
        return item;
    }

}

void peek(void) {

    if(rear==-1) {

        printf("Queue is empt");

    } else {

        for(int i=0;i<=(size-1);i++) {

            printf("%d\n", arr[i]);

        }

    }

}
