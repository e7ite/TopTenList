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
    std::cout<<"Languages TopTenList";
    if(_list.size() == 0 )
        std::cout<<" is empty.\n";
    else
        std::cout<<":\n";
    for (int i = 0; i < this->_list.size(); i++)
        std::cout << i + 1 << ": " 
            <<  this->_list[i].text << " " << this->_list[i].url << std::endl;
}

void TopTenList::display_backward()
{
    std::cout<<"Languages TopTenList";
    if(_list.size() == 0 )
        std::cout<<" is empty.\n";
    else
        std::cout<<":\n";
    for (int i = (signed)this->_list.size() - 1; i >= 0; i--)
        std::cout << i + 1 << ": "
            <<  this->_list[i].text << " " << this->_list[i].url << std::endl;
}

void TopTenList::set_at(int index, Hyperlink link)
{
    this->_list.at(index - 1) = link;
}

Hyperlink TopTenList::get(int index)
{
    return this->_list.at(index - 1);
}
