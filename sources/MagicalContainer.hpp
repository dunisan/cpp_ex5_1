#pragma once 

#include <vector>
#include <string>

namespace ariel{
    class MagicalContainer {

    private:
        std::vector<int> elements;

    public:
        // Constructor
        MagicalContainer() = default;
        // Destructor
        ~MagicalContainer() = default;

        // Copy constructor
        MagicalContainer(const MagicalContainer& other) : elements(other.elements) {}

        // Assignment operator
        MagicalContainer& operator=(const MagicalContainer& other) {
            if (this != &other) {
                elements = other.elements;
            }
            return *this;
        }

        // Method to add an element to the container
        void addElement(int element);

        // Method to remove an element from the container
        void removeElement(int element);

        // Method to retrieve the size of the container
        int size();



        class AscendingIterator {

            private:
                MagicalContainer &container;
                int position;

            public:
                
                AscendingIterator(MagicalContainer& cont) : container(cont), position(0) {}
                
                // Default constructor
                AscendingIterator():container(*(new MagicalContainer)), position(1){};

                // Destructor
                ~AscendingIterator() = default;

                // Copy constructor
                AscendingIterator(AscendingIterator& other):container(other.container), position(1){};

                // Assignment operator
                AscendingIterator& operator=(const AscendingIterator& other){return *this;};

                // Equality comparison operator
                bool operator==(const AscendingIterator& other) const {
                    return false; 
                }

                // Inequality comparison operator
                bool operator!=(const AscendingIterator& other) const {
                    return false;
                }

                bool operator<(const AscendingIterator& other) const{
                    return false; 
                }

                bool operator>(const AscendingIterator& other) const{
                    return false; 
                }

                // Dereference operator
                int operator*() const {
                    return 1;
                }

                // Pre-increment operator
                AscendingIterator& operator++() {
                    return *this;
                }

                // Begin iterator
                AscendingIterator begin() {
                    return *this; 
                }

                    // End iterator
                AscendingIterator end() {
                    
                    return *this;
                }
            };


        

        class PrimeIterator {

            private:
                MagicalContainer& container;
                int position;

            public:
                
                PrimeIterator(MagicalContainer& cont) : container(cont), position(0) {}
                
                // Default constructor
                PrimeIterator():container(*(new MagicalContainer())),position(1){};

                // Destructor
                ~PrimeIterator() = default;

                // Copy constructor
                PrimeIterator(const PrimeIterator& other):container(other.container),position(1){};

                // Assignment operator
                PrimeIterator& operator=(const PrimeIterator& other){return *this;}

                // Equality comparison operator
                bool operator==(const PrimeIterator& other) const {
                    return false; 
                }

                // Inequality comparison operator
                bool operator!=(const PrimeIterator& other) const {
                    return false;
                }

                bool operator<(const PrimeIterator& other) const{
                    return false; 
                }

                bool operator>(const PrimeIterator& other) const{
                    return false; 
                }

                // Dereference operator
                int operator*() const {
                    return 1;
                }

                // Pre-increment operator
                PrimeIterator& operator++() {
                    return *this;
                }

                // Begin iterator
                PrimeIterator begin() {
                    return *this; 
                }

                    // End iterator
                PrimeIterator end() {
                    
                    return *this;
                }
            };



        class SideCrossIterator {

        private:
            MagicalContainer& container;
            int position;

        public:
            
            SideCrossIterator(MagicalContainer& cont) : container(cont), position(0) {}
            
            // Default constructor
            SideCrossIterator():container(*(new MagicalContainer())), position(1){};

            // Destructor
            ~SideCrossIterator() = default;

            // Copy constructor
            SideCrossIterator(const SideCrossIterator& other):container(other.container), position(1){};

            // Assignment operator
            SideCrossIterator& operator=(const SideCrossIterator& other) {return *this;};

            // Equality comparison operator
            bool operator==(const SideCrossIterator& other) const {
                return false; 
            }

            // Inequality comparison operator
            bool operator!=(const SideCrossIterator& other) const {
                return false;
            }

            bool operator<(const SideCrossIterator& other) const{
                return false; 
            }

            bool operator>(const SideCrossIterator& other) const{
                return false; 
            }

            // Dereference operator
            int operator*() const {
                return 1;
            }

            // Pre-increment operator
            SideCrossIterator& operator++() {
                return *this;
            }

            // Begin iterator
            SideCrossIterator begin() {
                return *this; 
            }

                // End iterator
            SideCrossIterator end() {
                
                return *this;
            }
        };

                
        

    
    };
}

