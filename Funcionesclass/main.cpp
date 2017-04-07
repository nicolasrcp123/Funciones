#include <iostream>

using namespace std;

int sum(const int array[],const int length){
    int sum=0;
    for(int i=0;i<length;sum+=array[i++]);
    cout<<"la suma es :"<<sum<<endl;
    return sum;
}
int prom(const int array[],const int length){
    int x;
    x=sum(array,length);
    int prom=0;
    prom=x/length;
    cout<<"el promedio es :"<<prom<<endl;
    return prom;

    }
void inv(int array[],const int length){
    int temp;
    for(int i=0,j=length-1;i<j;i++,j--){
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
    for(int i=0;i<length;i++){
        cout<<array[i];
    }
}
void ord(int array[],const int length){







}
int main(){
    int n;
    cout<<"ingresa N :";
    cin >>n;
    int arreglo[n];
    for(int i=0;i<n;i++)
        cin>>arreglo[i];
    cout<<"sum : "<<prom(arreglo,n)<<endl;

    inv (arreglo,n);


}




