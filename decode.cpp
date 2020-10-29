#include <iostream>
#include <cmath>

#include "caesar.h"

double findfreq(std::string str, char ch){
  int count = 0;
  double len = 0;
  for (int i=0; i<str.length(); i++){
    if (str[i] == ch){ //counts the total occurrence of a letter
      count ++;
    }
  }
  for (int i=0; i<str.length(); i++){
    if (isalpha(str[i])){  //counts the total letter in the string
      len++;
    }
  }
  return count/len; //return frequency in percentage
}

std::string decode (std::string str){
  char letter [26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  double engFreq [26] = {0.082,0.015,0.028,0.043,0.13,0.022,0.02,0.061,0.07,0.0015,0.0077,0.04,0.024,0.067,0.075,0.019,0.00095,0.06,0.063,0.091,0.028,0.0098,0.024,0.0015,0.02,0.00074};
  double strFreq [26];
  double distance [26];
  double sum = 0;
  
  for (int i = 0; i<26; i++){
    for (int j=0; j<26; j++){
      strFreq[j] = findfreq(str,letter[j]); //find the frequency of every alpabet for the string
    }
    for (int a=0; a<26; a++){
      sum += sqrt((strFreq[a]*strFreq[a])+(engFreq[a]*engFreq[a])); //find the distance between English letter frequency and the frequency in the string
    }
    distance[i] = sum; //store it in a array called distance
    sum = 0;
    str = encryptCaesar(str,1); //shift one 
  }

  double mini = distance[0];  //find the minimum distance in the distance array
  int index = 0; //the index indicates the number of shift that measured transition was 
  for (int i=0; i<26; i++){
    if (distance[i] < mini){
      mini = distance[i];
      index = i;
    }
  }
  return encryptCaesar(str,index); //return the most matched combination
  
}
