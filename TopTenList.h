//Manages a list of top ten hyperlinks
#ifndef TOPTENLIST_H
#define TOPTENLIST_H
#include <iostream>
#include <string>
#include <vector>
#include "Hyperlink.h"
#include "IDirectionable.h"

using std::string;
using std::vector;

// We are promising to implement the functions in the Interface IDirectionable
class TopTenList : public IDirectionable
{
  private:
    vector<Hyperlink> _list;

  public:
    TopTenList();

    // Implement these two functions
    void display_forward();
    void display_backward();
    void set_at(int index, Hyperlink link);
    Hyperlink get(int index);
};

#endif
