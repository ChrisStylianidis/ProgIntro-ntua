#include<iostream>
using namespace std;
int main(){
    int x,sumpos=0,sumneg=0,counter=0;
    int numpos=0,numneg=0,min,max;
    int k=0;
    cin>>x;
    min=x;
    max=x;
    do{
        counter++;
        if(x>0){
            sumpos+=x;
            numpos++;
        }
        if(x<0){
            sumneg+=x;
            numneg++;
        }
        if(x>100){
            k++;
        }
        if(min>x){
            min=x;
        }
        if(max<x){
            max=x;
        }
    cin>>x;
    }while(x!=0);

    cout<<"There were "<<counter<<" number(s)"<<endl;
    cout<<"Positive numbers:"<<numpos<<endl;
    cout<<"Negative numbers:"<<numneg<<endl;
    cout<<"Sum of Positives:"<<sumpos<<endl;
    cout<<"Sum of Negatives:"<<sumneg<<endl;
    cout<<"Numbers greater than 100: "<<k<<endl;
    cout<<"Smallest number:"<<min<<endl;
    cout<<"Largest number:"<<max<<endl;

}