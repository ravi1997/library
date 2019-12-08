#include <cassert>
#include <sstream>
#include <stdexcept>

#include <library/version.hxx>
#include <library/rary.hxx>

int main ()
{
  using namespace std;
  using namespace rary;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
