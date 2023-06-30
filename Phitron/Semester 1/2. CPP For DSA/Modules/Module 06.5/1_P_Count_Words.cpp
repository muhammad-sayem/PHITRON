#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;                 /// from Rahat Khan Pathaa vai ///
    getline(cin, str);

    int cnt = 0;
    bool inside_word = false;

    for(char ch: str){          /// shortcut loop ///
        if(isalpha(ch)){       /// isalpha(ch) diye check kore character ta Capital ba small alphabet kina. Jodi capital char hoy taile 2 return kore ar small char er jonno 1 return kore ar egula baad e kisu hoile 0 return kore //
            if(inside_word == false){       /// inside_word == false thaka mane bortomaan e puraton word e nai ///
                cnt++;
            }
            inside_word = true;
        }
    
        else{
            inside_word = false;        // Jokhon alphaber baad e onno kisu pabe tokhon false kore deya hocche //
        }
    }
    cout << cnt << endl;
    
    return 0;
}