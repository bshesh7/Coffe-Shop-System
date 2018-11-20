#include "mainwin.h"
#include "java.h"
#include "store.h"
#include <sstream>
#include <iostream>
#include <ostream>
// /////////////////////////
// Create a new java product

void Mainwin::on_new_order_click() { // Create a new coffee product
   
    std::string name;
    double price, cost;

    Gtk::Dialog *dialog = new Gtk::Dialog{"Create Java", *this};
	int size = _store.number_of_products();
   	_store.add_productstr(size);

    
// Darkness
    Gtk::HBox b_darkness;
	
                Gtk::Label l_darkness{"Products:"};
                l_darkness.set_width_chars(15);
                b_darkness.pack_start(l_darkness, Gtk::PACK_SHRINK);

                Gtk::ComboBoxText c_darkness;
                c_darkness.set_size_request(160);

		for(int i =0;i<2;i++){
		for(auto s: Store::PTS) c_darkness.append(s);
		b_darkness.pack_start(c_darkness, Gtk::PACK_SHRINK);
		dialog->get_vbox()->pack_start(b_darkness,Gtk::PACK_SHRINK);
		}
                
		
		b_darkness.pack_start(c_darkness, Gtk::PACK_SHRINK);
                dialog->get_vbox()->pack_start(b_darkness, Gtk::PACK_SHRINK);
    // Show dialog
    dialog->add_button("Cancel", 0);
    dialog->add_button("Next", 1);
    dialog->show_all();

    int result;
    bool fail = true;  // set to true if any data is invalid

    while (fail) {
        fail = false;  // optimist!
        result = dialog->run();
        if (result != 1) {delete dialog; return;}

        
        //name = e_name.get_text();
        //if (name.size() == 0) {
          //  e_name.set_text("### Invalid ###");
            //fail = true;
        //}
    }

    

    delete dialog;

    // Add shots
    dialog = new Gtk::Dialog("Add Shots", *this);

    Gtk::ComboBoxText c_shots;
    c_shots.set_size_request(160);
    for (auto s: shot_to_string) c_shots.append(s);
    dialog->get_vbox()->pack_start(c_shots, Gtk::PACK_SHRINK);

    Gtk::Label l_shots;
    dialog->get_vbox()->pack_start(l_shots, Gtk::PACK_SHRINK);

    // Add buttons
    dialog->add_button("Cancel", 0);
    dialog->add_button("Create", 1);
    dialog->add_button("Add", 2);
    dialog->show_all();

   

    
    delete dialog;   
}
