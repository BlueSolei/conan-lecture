#include <string>
#include <string_view>

enum class color_e { black, white, red, yellow, green };

/**
* stringify our enum
*/
std::string enum_to_string(color_e color);

/**
* \return a JSON with the person's life choises and a greeting
*/
std::string greet(std::string_view name, int age, color_e favorite_color);
