#include <string>

// Base class Product
class Product {
private:
    std::string name;
    std::string brand;
    double price;
    int quantity;
    std::string description;
    std::string size;
    std::string color;
    std::string category;
    std::string material;

public:
    // Setters
    void setName(const std::string& name) { this->name = name; }
    void setBrand(const std::string& brand) { this->brand = brand; }
    void setPrice(double price) { this->price = price; }
    void setQuantity(int quantity) { this->quantity = quantity; }
    void setDescription(const std::string& description) { this->description = description; }
    void setSize(const std::string& size) { this->size = size; }
    void setColor(const std::string& color) { this->color = color; }
    void setCategory(const std::string& category) { this->category = category; }
    void setMaterial(const std::string& material) { this->material = material; }

    // Getters
    std::string getName() const { return name; }
    std::string getBrand() const { return brand; }
    double getPrice() const { return price; }
    int getQuantity() const { return quantity; }
    std::string getDescription() const { return description; }
    std::string getSize() const { return size; }
    std::string getColor() const { return color; }
    std::string getCategory() const { return category; }
    std::string getMaterial() const { return material; }
};

// Derived class Clothing
class Clothing : public Product {
    // Additional attributes or methods for Clothing can be added here
};

// Derived class Electronics
class Electronics : public Product {
private:
    std::string model;
    std::string warranty;
    std::string technicalSpecifications;

public:
    // Setters for Electronics-specific attributes
    void setModel(const std::string& model) { this->model = model; }
    void setWarranty(const std::string& warranty) { this->warranty = warranty; }
    void setTechnicalSpecifications(const std::string& technicalSpecifications) {
        this->technicalSpecifications = technicalSpecifications;
    }

    // Getters for Electronics-specific attributes
    std::string getModel() const { return model; }
    std::string getWarranty() const { return warranty; }
    std::string getTechnicalSpecifications() const { return technicalSpecifications; }
};


