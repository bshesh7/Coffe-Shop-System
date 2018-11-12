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
	void on_view_customer_all_click();        
	void on_create_coffee_click();   // Create a new coffee product
        void on_create_donut_click();    // Create a new donut product
	void on_create_customer_click();    // Create a new customer
	void on_help_click(); // Help menu
    private:
        Store _store;
        Gtk::Label *msg;                      // Status message display
        Gtk::MenuItem *menuitem_new_coffee;   // Create -> Coffee
        Gtk::MenuItem *menuitem_new_donut;
	Gtk::MenuItem *menuitem_new_customer;    // Create -> Donut
	
	
};
#endif 

