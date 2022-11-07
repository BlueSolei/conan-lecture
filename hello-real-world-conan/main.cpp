// https://crowcpp.org

#include <crow.h> 
#include <iostream>

// Show them you are cross platform
#if defined(__clang__)
constexpr auto hello_message = "Hello Clang";
#elif defined(__GNUC__) || defined(__GNUG__)
constexpr auto hello_message = "Hello Gcc";
#elif defined(_MSC_VER)
constexpr auto hello_message = "Hello VS2022";
#endif

int main() {
  crow::SimpleApp app;

  CROW_ROUTE(app, "/")
  ([]() {  //
    return hello_message;
  });

  std::cout << "Server is listening on http://127.0.0.1:18080\n";
  app.port(18080).run();
}