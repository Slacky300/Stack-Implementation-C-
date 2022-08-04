#include <stdio.h>

#define n 5

void push();
void peek();
void pop();
void display();
int  isEmpty();
int  isFull();

int a[n],top=-1;

void main(){
    
    int c;
    do{
        printf("1.pop\n2.peek\n3.push\n4.display\n5.exit\n");
        scanf("%d",&c);
            if(c==1){
                pop();
            }else if(c==2){
                peek();
            }else if(c==3){
                push();
            }else if(c==4){
                display();
            }else if(c==5){
                break;
            }else{
                printf("Invalid option\n");
            }
        
    }while(c != 5);
    
        printf("End of stack operation\n"); 
    
}

void peek(){
    
    if(isEmpty()){
        printf("Stack Underflow\n");
    }else{
        printf("The top elem is %d\n",a[top]);
    }
    
}

void push(){
    if(isFull()){
        printf("Stack Overflow\n");
    }else{
        int hold;
        printf("Enter the elem\n");
        scanf("%d",&hold);
        top++;
        a[top] = hold;
        printf("Entered element was %d\n",a[top]);
    }
}

void pop(){
    
    if(isEmpty()){
         printf("Stack Underflow\n");
    }else{
        
        printf("The popped elem is %d\n",a[top]);
        top--;
        
    }
    
}

void display(){
    
    if(isEmpty()){
       printf("Stack Underflow\n");
    }else{
        
       for(int i = top;i>=0;i--){
           printf("%d ",a[i]);
       }
        
        printf("\n");
    }
    
}

int isFull(){

    if(top == n-1){
       return 1;
    }else{
        return 0;
    }
}

int isEmpty(){

    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}













