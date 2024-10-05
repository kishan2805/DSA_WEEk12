#include<iostream>
#include<stack>
#include<queue>

using namespace std;

// reversing a queue using a stack
void reverse1(queue<int>&q){
    stack<int> st; // Stack to store integers

    // copying 
    while(!q.empty()){
        int i=q.front();
        q.pop();
        st.push(i);
    }
// reversing
    while(!st.empty()){
        int i=st.top();
        st.pop();
        q.push(i);
    }
}
// reversing using recursiion
void reverse2(queue<int>&q){
    // base case 
    if(q.size()<1)
        return;
    int temp=q.front();
    q.pop();
    reverse2(q);
    q.push(temp);
}
// reversing k elemnts
void reverse3(queue<int>&q,int k){
    stack<int> st;
    int m=q.size()-k;
    // removing the k elements
    while(k>0){
        int temp=q.front();
        q.pop();
        st.push(temp);
        k--;
    }
    // inserting in reverse order
    while(!st.empty()){
        int t=st.top();st.pop();
        q.push(t);
    }
    // rearranging the queue to get desired pattern

    cout<<"the size of the queue is "<<m<<endl;
    while(m>0){
        int t=q.front();
        q.pop();
        q.push(t);
        m--;
    }

}
void printall(queue<int>q){
    // cout<<q.size()<<endl;
    int n=q.size();
    for(int i=0;i<n;i++){
        int t=q.front();
        cout<<t<<" ";
        q.pop();
    }
    cout<<endl;
}

// interval 1st and 2nd half
void interval1(queue<int>&q){
    // we will divide it in 2 halfs and then insert back in required pattern
    queue<int>fi;
    int n=q.size();
    for(int i=0;i<=n/2;i++){
        int t=q.front();
        fi.push(t);
        q.pop();
    }
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            q.push(fi.front());
            fi.pop();
        }
        else{
            q.push(q.front());
            q.pop();
        }
    }
}

// first -ve no in the window (SLIDING WINDOW) 
void firstneg(int* arr, int size, int k){
    queue<int>q;

    // find answer for first window 
    for(int i=0; i<k;i++){
        if(arr[i]<0)
            q.push(i);
    }

    // finding answer for later windows 
    for(int i=k;i<size;i++){
        // print answer for previous window 
        if(q.empty()){
            cout<<"0 ";
            if(arr[i]<0)
                q.push(i);
        }
        else{
            cout<<arr[q.front()]<<" ";
        // removing elements 
            if(i-q.front()>=k)
                q.pop();
            // adding the new element after checking it 
            if(arr[i]<0)
                q.push(i);
        }
    }
    // printing last window ans
    if(!q.empty())
        cout<<arr[q.front()]<<" ";
    else{
        cout<<"0 ";
    }
}

int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    // q.push(6);

// reversing a queue using stack
    // cout<<q.front()<<endl;
    // reverse1(q);
    // cout<<q.front()<<endl;

// reversing using recurssion
    // cout<<q.front()<<endl;
    // reverse1(q);
    // cout<<q.front()<<endl;

// reversing k elements 
    // int k=3;
    // printall(q);
    // reverse3(q,k);
    // printall(q);
    
    
// interval 1st and 2nd half
    // printall(q);
    // interval1(q);
    // printall(q);

// first negative in the window 
    int arr[7]={2,5,4,-1,-2,0,5};
    int size=7;
    int k=3;
    firstneg(arr,size,k);




}