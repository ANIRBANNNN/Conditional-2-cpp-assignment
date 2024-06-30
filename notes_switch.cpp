#include <iostream>
using namespace std;
int main() {

    int x,count_2000=0,count_500=0,count_200=0,count_100=0,count_50=0,count_20=0,count_10=0;
    cout<<"Enter your amount"<<endl;
    cin>>x;
    switch((x>=2000)){
        case 1:
        x-=2000;
        count_2000+=1;
        cout<<"Notes of 2000 is:"<<count_2000<<endl;
    }
    switch((x>=500)){
        case 1:
        x-=500;
        count_500+=1;
        cout<<"Notes of 500 is:"<<count_500<<endl;
    
    }
    switch((x>=200)){
        case 1:
        x-=200;
        count_200+=1;
        cout<<"Notes of 200 is:"<<count_200<<endl;
    
    }
     switch((x>=100)){
        case 1:
        x-=100;
        count_100+=1;
        cout<<"Notes of 100 is:"<<count_100<<endl;
    
    }
     switch((x>=50)){
        case 1:
        x-=50;
        count_50+=1;
        cout<<"Notes of 50 is:"<<count_50<<endl;
    
    }
     switch((x>=20)){
        case 1:
        x-=20;
        count_20+=1;
        cout<<"Notes of 20 is:"<<count_20<<endl;
    
    }
     switch((x>=10)){
        case 1:
        x-=10;
        count_10+=1;
        cout<<"Notes of 10 is:"<<count_10<<endl;
    
    }


    return 0;
}