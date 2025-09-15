#include<iostream>
using namespace std;
class paisa{
public:
char choice;
float rupees,converter,dollar,yen,yuan;
void getdata(){
    cout<<"------------currancy converter--------------"<<endl;
    cout<<"Enter your choice:"<<endl;
    cout<<"A) dollar"<<endl;
    cout<<"B) japan"<<endl;
    cout<<"c) china"<<endl;
    cin>>choice;
if(choice=='A' || choice=='a'){
    cout<<"-----------dollar converter----------:"<<endl;
    cout<<"enter your choice:"<<endl;
     cout<<"       X)rupees to dollar"<<endl;
    cout<<"       Y)dollar to rupees"<<endl;
    cin>>choice;
    if(choice=='x'||choice=='X'){
                cout<<"indian currency to dollar converter:"<<endl;
cin>>rupees;
converter=rupees*0.011;
cout<<"total dollar is:"<<converter<<endl;
    }
    else if(choice=='y'|| choice=='Y'){
                   cout<<"dollar to indian rupees:"<<endl;
cin>>dollar;
converter=dollar*87.64;
cout<<"your total rupees:"<<converter<<endl;
    }
    else{
        cout<<"invalid choice:"<<endl;
    }
}else if(choice=='b'|| choice=='B'){
   cout<<"-----------yen converter----------:"<<endl;
    cout<<"enter your choice:"<<endl;
     cout<<"       X)rupees to yen"<<endl;
    cout<<"       Y)yen to rupees"<<endl;
    cin>>choice;
    if(choice=='x'|| choice=='X'){
        cout<<"enter your rupees:"<<endl;
        cin>>rupees;
        converter=rupees*1.6838;
        cout<<"your total yen is:"<<converter<<endl;

    }
    else if(choice=='x'||choice=='y'){
        cout<<"enter your yen:"<<endl;
        cin>>yen;
        converter=yen*0.59 ;
        cout<<"your total rupees is:"<<converter<<endl;
    }

}
else if(choice=='c' || choice=='C'){
cout<<"------------yuan converter----------------"<<endl;
cout<<"enter your choice:"<<endl;
     cout<<"       X)rupees to yuan"<<endl;
    cout<<"       Y)yuan to rupees"<<endl;
    cin>>choice;
        if(choice=='x'|| choice=='X'){
        cout<<"enter your rupees:"<<endl;
        cin>>rupees;
        converter=rupees*0.0816;
        cout<<"your total yuan is:"<<converter<<endl;

    }
    else if(choice=='y'||choice=='Y'){
        cout<<"enter your yuan:"<<endl;
        cin>>yuan;
        converter=yuan*12.25 ;
        cout<<"your total rupees is:"<<converter<<endl;
    }
}
else{
    cout<<"choice is invalid"<<endl;
}

}

};
int main(){
    paisa p;
    p.getdata();
    return 0;
}