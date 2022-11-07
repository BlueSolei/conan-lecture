#include "greet.h"

using namespace std::string_literals;

std::string enum_to_string(color_e color) {
  using namespace std::string_view_literals;
  switch(color)
  {
    case color_e::black: return "black";
    case color_e::white: return "white";
    case color_e::red: return "red";
    case color_e::yellow: return "yellow";
    case color_e::green: return "green";
    default: return "<unknown>";
  }
}

std::string greet(std::string_view name, int age, color_e favorite_color) {
  auto greeting_msg = "Hello "s + std::string(name) + " :-)\nYour age is " + std::to_string(age) +
         " and your favorite color is " + enum_to_string(favorite_color) + ".";
  return greeting_msg;
}