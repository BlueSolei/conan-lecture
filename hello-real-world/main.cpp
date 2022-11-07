#include <iostream>

#include "greet.h"

using namespace std::string_literals;

std::string to_json(std::string_view name, int age, color_e favorite_color, std::string_view greeting_msg) {
  return 
    "{ \n"s + 
    "  name: \"" + std::string(name) + "\",\n" + 
    "  age: " + std::to_string(age) + "\",\n" 
    "  favorite_color: \"" +  enum_to_string(favorite_color) + "\",\n"
    "  greeting_msg: \"" + std::string(greeting_msg) + "\"\n" + 
    "}\n";
}

int main(int argc, char* argv[])
{
  auto greeting_msg = greet("Shaul", 42, color_e::black);
  auto json = to_json("Shaul", 42, color_e::black, greeting_msg);
  std::cout << json;
  std::cout << "\n\n Validate Me: https://jsonformatter.curiousconcept.com\n";
  return 0;
}