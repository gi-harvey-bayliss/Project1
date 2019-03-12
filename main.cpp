##include <iostream>

int main(){
int brackets = 0;

int sqBrackets = 0;

int crlyBrackets = 0;


const string = "({[]})";

bool is_valid(const string& input)}{
  int size = input.length();
  const char& currentCharacter;



  for (int i = 0; i < size; i++) {
      /* code */
      //iterate through the string  for each character
      //if its an open bracket, add to the ints. if closed remove
      currentCharacter = input.at(i);
      if (currentCharacter == "("){brackets++;}
      if (currentCharacter == ")"){brackets--;}
      if (currentCharacter == "["){sqBrackets++;}
      if (currentCharacter == "]"){sqBrackets--;}
      if (currentCharacter == "{"){crlyBrackets++;}
      if (currentCharacter == "}"){crlyBrackets--;}

      //if any of the ints are below 0 it means there was a closed bracket without an open one so we return false
      if(brackets<0 || sqBrackets<0 || crlyBrackets<0){return false;}
  }
  //check to see if all opened brackets have been closed, if so all ints will be 0
  if (brackets!=0 || sqBrackets!=0 || crlyBrackets!=0){return false;}
  return true;
}

std::cout << "/* message */" << '\n';





  return 0;
}
