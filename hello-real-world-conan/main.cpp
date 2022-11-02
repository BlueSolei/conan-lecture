// https://crowcpp.org

#include <crow.h> 

int main() {
  crow::SimpleApp app;

  CROW_ROUTE(app, "/")
  ([]() {  //
    return "Hello world, because why not?";
  });

  // http://127.0.0.1:18080/
  app.port(18080).run();
}