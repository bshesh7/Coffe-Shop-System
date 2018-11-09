#ifndef MAINWIN_H
#define MAINWIN_H

#include <gtkmm.h>
#include "store.h"

class Mainwin : public Gtk::Window
{
    public:
        Mainwin();
        virtual ~Mainwin();
    protected:
        void on_quit_click();            // Exit the program
        void on_view_all_click();        // View all products
        void on_create_coffee_click();   // Create a new coffee product
        void on_create_donut_click();    // Create a new donut product
    private:
        Store _store;
        Gtk::Label *msg;                      // Status message display
        Gtk::MenuItem *menuitem_new_coffee;   // Create -> Coffee
        Gtk::MenuItem *menuitem_new_donut;    // Create -> Donut
};
#endif 

