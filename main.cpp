#include <iostream>
#include<ctime>
#include <cmath>
#include<cstdlib>
#define SIZEE 21
#define SIZE 10
using namespace std;

void show(double *Array){
    for(int i=0; i<SIZE; i++)
        cout<<"Array["<<i<<"]:"<<Array[i]<<endl;
}

void sortubiv(double *Array){
    for(int i=0; i<SIZE; i++){
        for(int j=i; j<SIZE; j++){
                if(Array[i]<Array[j]){
                double temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp;
            }
        }
    }
}

void maximum(double *Array){
    int max=Array[-10];
    for(int i=0; i<SIZE; i++){
            if(Array[i]>max){
                max=Array[i];
        }
    }
    cout<<max<<endl;
}

void minimum(double *Array){
    int min = Array[10];
    for(int i = 0; i<SIZE; i++){
            if(Array[i]<min){
                min=Array[i];
            }
    }
    cout<<min<<endl;
}


void polojitelnie(double *Array){
    for(int i=0; i<SIZE; i++){
        if(Array[i]>0){
            cout<<Array[i]<<endl;
        }
    }
}

void otritcatelnie(double *Array){
    for(int i=0; i<SIZE; i++){
        if(Array[i]<0){
            cout<<Array[i]<<endl;
        }
    }
}

void gistogramma(double*Array){
    int A[SIZEE];
    for(int a=0; a<SIZEE; a++){
        A[a]=0;
    }
    for (int i=0; i<SIZEE; i++){
        for(int a=0; a<SIZE; a++){
            if(Array[a]==(-10+i)){
                A[i]++;
            }
        }
        cout<<(-10+i)<<" "<<A[i]<<endl;
    }
}

void logarithm (double a1, double b1, double& x1){
    x1=log10(b1)/log10(a1);
}

int main(void){
    double B[SIZE];
    srand(time(NULL));
    for(int i=0; i<SIZE; i++){
        B[i]=double(rand()%21-10);
    }
    cout<<"random:"<<endl;
    show(B);
    sortubiv(B);
    cout<<"po vozrastaniu:"<<endl;
    show(B);
    cout<<"maximum:";
    maximum(B);
    cout<<"minimum:";
    minimum(B);
    cout<<"Polozhitelnie:\n";
    polojitelnie(B);
    cout<<"Otricatelnie:\n";
    otritcatelnie(B);
    cout<<"gistogramma:"<<endl;
    gistogramma(B);
    cout<<"Vvedite osnovanie:";double a;cin>>a;
    cout<<"Vvedite 4islo:";double b;cin>>b;
    double x;
    logarithm (a,b,x);
    cout<<"Log"<<a<<" "<<b<<"="<<x;
}

