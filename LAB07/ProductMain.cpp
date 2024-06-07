#include <iostream>
#include "ProductInventory.h"

// Get user input for a product
void inputProductDetails(Product& product) {
    std::string inputStr;
    double inputDouble;
    int inputInt;

    std::cout << "Enter product name: ";
    std::getline(std::cin, inputStr);
    product.setName(inputStr);

    std::cout << "Enter brand: ";
    std::getline(std::cin, inputStr);
    product.setBrand(inputStr);

    std::cout << "Enter price: ";
    std::cin >> inputDouble;
    product.setPrice(inputDouble);

    std::cout << "Enter quantity: ";
    std::cin >> inputInt;
    product.setQuantity(inputInt);
    std::cin.ignore(); 

    std::cout << "Enter description: ";
    std::getline(std::cin, inputStr);
    product.setDescription(inputStr);

    std::cout << "Enter size: ";
    std::getline(std::cin, inputStr);
    product.setSize(inputStr);

    std::cout << "Enter color: ";
    std::getline(std::cin, inputStr);
    product.setColor(inputStr);

    std::cout << "Enter category: ";
    std::getline(std::cin, inputStr);
    product.setCategory(inputStr);

    std::cout << "Enter material: ";
    std::getline(std::cin, inputStr);
    product.setMaterial(inputStr);
}

// Get user input for an electronic product
void inputElectronicDetails(Electronics& electronicItem) {
    inputProductDetails(electronicItem);

    std::string inputStr;

    std::cout << "Enter model: ";
    std::getline(std::cin, inputStr);
    electronicItem.setModel(inputStr);

    std::cout << "Enter warranty: ";
    std::getline(std::cin, inputStr);
    electronicItem.setWarranty(inputStr);

    std::cout << "Enter technical specifications: ";
    std::getline(std::cin, inputStr);
    electronicItem.setTechnicalSpecifications(inputStr);
}

// Display product details
void displayProductDetails(const Product& product) {
    std::cout << "Name: " << product.getName() << "\n";
    std::cout << "Brand: " << product.getBrand() << "\n";
    std::cout << "Price: $" << product.getPrice() << "\n";
    std::cout << "Quantity: " << product.getQuantity() << "\n";
    std::cout << "Description: " << product.getDescription() << "\n";
    std::cout << "Size: " << product.getSize() << "\n";
    std::cout << "Color: " << product.getColor() << "\n";
    std::cout << "Category: " << product.getCategory() << "\n";
    std::cout << "Material: " << product.getMaterial() << "\n";
}

// Display electronic details
void displayElectronicDetails(const Electronics& electronicItem) {
    displayProductDetails(electronicItem);
    std::cout << "Model: " << electronicItem.getModel() << "\n";
    std::cout << "Warranty: " << electronicItem.getWarranty() << "\n";
    std::cout << "Technical Specifications: " << electronicItem.getTechnicalSpecifications() << "\n";
}

int main() {
    // Instances of Clothing and Electronics
    Clothing clothingItem;
    Electronics electronicItem;

    // Input details 
    std::cout << "Enter details for a clothing item:\n";
    inputProductDetails(clothingItem);

    // Input details 
    std::cout << "\nEnter details for an electronics item:\n";
    inputElectronicDetails(electronicItem);

    // Display details 
    std::cout << "\nClothing Item:\n";
    displayProductDetails(clothingItem);

    // Display details 
    std::cout << "\nElectronics Item:\n";
    displayElectronicDetails(electronicItem);

    return 0;
}
