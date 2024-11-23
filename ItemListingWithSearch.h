#ifndef ITEMLISTINGWITHSEARCH_H
#define ITEMLISTINGWITHSEARCH_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <limits>

using namespace std;

class ItemListing {
private:
    const string DATA_FILE;  // File to store item data
    struct Item {
        string name;
        string description;
        double rentalPrice;
        bool available;
    };
    
    vector<Item> items;  // Vector to store items
    void loadItemsFromFile();  // Load items from the text file
    void saveItemsToFile();  // Save items to the text file

public:
    ItemListing();  // Constructor to initialize DATA_FILE
    void displayItems();  // Display all items
    void addItem();  // Add a new item
    void removeItem();  // Remove an item
    void borrowItem();  // Borrow an item
    void searchItems();  // Search items by name
};

#endif
