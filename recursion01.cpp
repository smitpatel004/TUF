//forward
#include<iostream>
using namespace std;
int name(int i,int n){
    if(i>n){
        return 0;
    }
    cout<<i;
    return name(i+1,n);

}
int main(){
    name(1,5);
}

//backward
#include<iostream>
using namespace std;
int name(int n){
    if(n!=0)
    cout<<n;
    else{
        return 0;
    }
    
    return name(n-1);

}
int main(){
    name(5);
}

