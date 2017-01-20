#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string get_word(string j, int xyz);
int main()
{
  ifstream dictionary;
  dictionary.open("diccionario.txt");
  bool find = false;
  int s = 0;
  string word;
  string mixed_word = "RLCOPY";
  int xyz = 0;
  string dict_word;
  
  if(dictionary.is_open())
  {
    cout << "si" << endl;
  }
  while(!find){
    getline(dictionary, dict_word);
    word = get_word(mixed_word, xyz);
    if(word == dict_word)
    {
      find = true;
      cout << word << endl;
      return 0;
    }
    xyz ++;
    s ++;
  }
  cout << "No se encuentra" << endl;
  return 0;
}

string get_word(string j, int xyz)
{
  string word;
  char a = 'a';
  for(int s = 0; s < j.length(); s++)
  {
    a = j[0] + s;
    cout << a << endl;
  }
  for(int s = 0; s < j.length(); s++)
  {
    word += j[s]+xyz;
  }
  if(word == "GARDEN")
  {
    cout << word << endl;
  }
  return word;
}