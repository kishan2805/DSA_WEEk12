#include<iostream>
#include<queue>
#include<vector>

using namespace std;

// class que{
//     public:
//         int *arr;
//         int size;
//         int front;
//         int rear;

//     que(int size){
//         arr=new int[size];
//         this->size=size;
//         front=-1;
//         rear=-1;
//     }

//     void push1(int data){
//         // empty que
//         if(front==rear && rear==-1){
//             rear=0;
//             front =0;
//             arr[rear]=data;
//         }
//         else if(rear==size-1){
//             cout<<"overflow"<<endl;
//         }
//         else{
//             rear++;
//             arr[rear]=data;
//         }
//     }
//     void pop1(){
//         // underflow
//         if(front==rear && front==-1)
//             cout<<"underflow"<<endl;
//         // single element
//         else if(rear==front){
//             arr[front]=-1;
//             front=-1;
//             rear=-1;
//         }
//         else{
//             arr[front]=-1;
//             front++;
//         }
//     }
//     void size1(){
//         if( front==rear && rear==-1){
//             cout<<"the size is : 0"<<endl;
//         }
//         else{
//             cout<<"the size is :"<<rear-front+1<<endl;
//         }
        
//     }
//     void empty1(){
//         if(front==rear && rear==-1){
//             cout<<"the queue is empty"<<endl;
//         }
//         else{
//             cout<<"nope it has values "<<endl;
//         }
//     }
//     void front1(){
//         cout<<"the front is :"<<arr[front]<<endl;
//     }
//     void rear1(){
//         cout<<"the rear is :"<<arr[rear]<<endl;
//     }
//     void printall(){
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// class circularqueue{
//     public:
//         int *arr;
//         int rear;
//         int front;
//         int size;
//     circularqueue(int size){
//         arr=new int[size];
//         this-> size=size;
//         front=-1;
//         rear=-1;
//     }

//     void push1(int data){
//         // overflow condition
//         if((front==0 && rear==size-1 ))
//             cout<<"overflow condition "<<endl;
//         else if((rear+1)%size==front){
//             cout<<"circular overflow "<<endl;
//         }
//         // empty condition
//         else if(front==-1 && rear==-1){
//             rear=0;
//             front=0;
//             arr[rear]=data;
//         }
//         // non empty circular contion 
//         else if(rear==size-1 && front!=0){
//             rear=0;
//             arr[rear]=data;
//         }
//         // non empty regular  condition 
//         else{
//             rear++;
//             arr[rear]=data;
//         }
//     }
//     void pop1(){
//         // underflow 
//         if(rear==-1 && front==-1){
//             cout<<"empty queue cant pop"<<endl;
//         }
//         // sinfle element
//         else if(rear==front){
//             arr[front]=-1;
//             rear=-1;
//             front=-1;
//         }
//         // non empty circular condition(last index deletion)
//         else if(front==size-1){
//             arr[front]=-1;
//             front=0;
//         }
//         // non empty regular condition 
//         else{
//             arr[front]=-1;
//             front++;
//         }
//     }
//     void size1(){
//         // empty
//         if(front==-1 && rear==-1){
//             cout<<"size of the queue is : 0"<<endl;
//         }
//         // regular
//         else if(front<=rear){
//             cout<<"size of the queue is : "<<rear-front+1<<endl;
//         }
//         else{
//             cout<<"size of the queue is : "<<size-(front - rear)+1<<endl;
//         }
//     }
//     void printall(){
        
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

// deque

// class Dq
// {
// public:
//     int *arr;
//     int size;
//     int front;
//     int rear;
//     Dq(int size)
//     {
//         this->size = size;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }
//     void pushFront(int val)
//     {
//         /* // overFlow
//          if (front == 0)
//          {
//              cout << "OverFlow" << endl;
//              return;
//          }
//          // empty case
//          else if (front == -1 && rear == -1)
//          {
//              front++;
//              rear++;
//              arr[front] = val;
//          }
//          // normal case
//          else
//          {
//              front--;
//              arr[front] = val;
//          }
//          */
//         if ((front == 0 && rear == size - 1) || (rear == front - 1)) // imp condition
//         {
//             cout << "OverFlow" << endl;
//             return;
//         }
//         else if (front == -1 && rear == -1)
//         {
//             front++;
//             rear++;
//             arr[front] = val;
//         }
//         else if (front == 0 && rear != size - 1)
//         {
//             front = size - 1;
//             arr[front] = val;
//         }
//         else
//         {
//             front--;
//             arr[front] = val;
//         }
//     }
//     void pushBack(int val)
//     {
//         /* // overflow
//          if (rear == size - 1)
//          {
//              cout << "OverFlow" << endl;
//              return;
//          }
//          // empty case
//          else if (front == -1 && rear == -1)
//          {
//              front++;
//              rear++;
//              arr[rear] = val;
//          }
//          // normal case
//          else
//          {
//              rear++;
//              arr[rear] = val;
//          }
//          */
//         // The above code is garbage as humme Circular Nature maintain krna he padega
//         // over flow
//         if ((front == 0 && rear == size - 1) || (rear == front - 1)) // imp condition
//         {
//             cout << "OverFlow" << endl;
//             return;
//         }
//         // first Ele
//         else if (front == -1 && rear == -1)
//         {
//             front++;
//             rear++;
//             arr[rear] = val;
//         }
//         // circular Nature
//         else if (rear == size - 1 & front != 0)
//         {
//             rear = 0;
//             arr[rear] = val;
//         }
//         // normal pushing
//         else
//         {
//             rear++;
//             arr[rear] = val;
//         }
//     }
//     void popFront()
//     {
//         if (rear == -1 && front == -1)
//         {
//             cout << "Queue underFlow" << endl;
//             return;
//         }
//         else if (front == size - 1)
//         {
//             // single element
//             arr[front] = -1;
//             front = 0;
//         }
//         else
//         {
//             arr[front] = -1;
//             front++;
//         }
//     }
//     void popBack()
//     {
//         // undeflow
//         if (front == -1 && rear == -1)
//         {
//             cout << "UnderFlow" << endl;
//             return;
//         }
//         // single element
//         else if (front == rear)
//         {
//             arr[rear] = -1;
//             front = -1;
//             rear = -1;
//         }
//         // circular Nature
//         else if (rear == 0)
//         {
//             arr[rear] = -1;
//             rear = size - 1;
//         }
//         // normal Flow
//         else
//         {
//             arr[rear] = -1;
//             rear--;
//         }
//     }
// };

int main(){
    // // creating a queue
    // queue<int>q;

    // // pushing in queue
    // q.push(4);

    // // size of queue
    // cout<<"size of queue : "<<q.size()<<endl;

    // q.push(5);
    // q.push(6);

    // // checking empty
    // cout<<"1 if empty 0 if filled : "<<q.empty()<<endl;

    // // front of queue
    // cout<<"front of the queue : "<<q.front()<<endl;

    // // back of the queue
    // cout<<"back of the queue : "<<q.back()<<endl;

    // // poping 
    // q.pop();

    // cout<<"front of the queue after pop : "<<q.front()<<endl;
    // cout<<"back of the queue after pop : "<<q.back()<<endl;

    // creating queue using array 
    // que q(5);

    // q.pop1();
    // q.empty1();
    // q.size1();

    // q.push1(10);
    // q.push1(20);
    // q.push1(30);
    // q.push1(40);
    // q.push1(50);
    // q.rear1();
    // q.front1();
    // q.size1();
    // q.printall();
    // q.pop1();
    // q.front1();
    // q.rear1();

    // q.printall();

    // circular queue
    // circularqueue cq(5);
    // cq.size1();
    // cq.printall();

    // cq.pop1();

    // cq.push1(11);
    // cq.push1(12);
    // cq.push1(13);
    // cq.push1(14);
    // cq.push1(15);
    // cq.printall();
    // cq.size1();

    // cq.push1(111);
    // cq.pop1();
    // cq.size1();
    // cq.pop1();
    // cq.push1(16);
    // cq.size1();
    // cq.printall();
    // cq.push1(17);
    // cq.printall();
    // cq.push1(100);
    // cq.printall();


    // deque<int>qq;
    // qq.push_back(11);   //insert from right side 
    // qq.push_front(11);  //insert from left side
    // qq.pop_back();
    // qq.pop_front();



}