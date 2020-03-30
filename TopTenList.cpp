//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
    _list.resize(10);
}

void TopTenList::display_forward()
{
    for (const auto& i : this->_list)
        std::cout << i.text << " " << i.url << std::endl;
}

void TopTenList::display_backward()
{
    for (auto i = this->_list.rbegin(); i != this->_list.rend(); i++)
        std::cout << i->text << " " << i->url << std::endl;
}

void TopTenList::set_at(int index, Hyperlink link)
{
    this->_list.at(index - 1) = link;
}

Hyperlink TopTenList::get(int index)
{
    return this->_list.at(index - 1);
}
