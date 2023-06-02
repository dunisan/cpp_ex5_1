#pragma once 

#include <vector>
#include <string>

namespace ariel{
    class MagicalContainer {

    private:
        std::vector<int> elements;

    public:

        // default and copy constructors, distructor and assignment operator  
        MagicalContainer() = default;
        MagicalContainer(const MagicalContainer& other) : elements(other.elements) {}
        ~MagicalContainer() = default;
        MagicalContainer& operator=(const MagicalContainer& other) {
            if (this != &other) {
                elements = other.elements;
            }
            return *this;
        }

        // container functions
        void addElement(int element);
        void removeElement(int element);
        int size();



        class AscendingIterator {

            private:
                MagicalContainer &container;
                int position;

            public:
                // Default constructor, constructor, Copy constructor, Destructor, Assignment operator
                
                AscendingIterator():container(*(new MagicalContainer)), position(1){};
                AscendingIterator(MagicalContainer& cont) : container(cont), position(0) {}
                ~AscendingIterator() = default;
                AscendingIterator(AscendingIterator& other):container(other.container), position(1){};
                AscendingIterator& operator=(const AscendingIterator& other){return *this;};

                // operators- == , != , > , < , * , ++ 
                bool operator==(const AscendingIterator& other) const {
                    return false; 
                }
                bool operator!=(const AscendingIterator& other) const {
                    return false;
                }
                bool operator<(const AscendingIterator& other) const{
                    return false; 
                }
                bool operator>(const AscendingIterator& other) const{
                    return false; 
                }

                int operator*() const {
                    return 1;
                }

                AscendingIterator& operator++() {
                    return *this;
                }

                // Begin and end of iterator
                AscendingIterator begin() {
                    return *this; 
                }

                AscendingIterator end() {
                    
                    return *this;
                }
            };


        

        class PrimeIterator {

            private:
                MagicalContainer& container;
                int position;

            public:
                
                // Default constructor, constructor, Copy constructor, Destructor, Assignment operator
                PrimeIterator():container(*(new MagicalContainer())),position(1){};
                PrimeIterator(MagicalContainer& cont) : container(cont), position(0) {}
                PrimeIterator(const PrimeIterator& other):container(other.container),position(1){};
                ~PrimeIterator() = default;
                PrimeIterator& operator=(const PrimeIterator& other){return *this;}

                // operators- == , != , > , < , * , ++ 
                bool operator==(const PrimeIterator& other) const {
                    return false; 
                }

                bool operator!=(const PrimeIterator& other) const {
                    return false;
                }

                bool operator<(const PrimeIterator& other) const{
                    return false; 
                }

                bool operator>(const PrimeIterator& other) const{
                    return false; 
                }

                int operator*() const {
                    return 1;
                }

                PrimeIterator& operator++() {
                    return *this;
                }

                // Begin and end iterators
                PrimeIterator begin() {
                    return *this; 
                }

                PrimeIterator end() {
                    
                    return *this;
                }
            };



        class SideCrossIterator {

        private:
            MagicalContainer& container;
            int position;

        public:
            // Default constructor, constructor, Copy constructor, Destructor, Assignment operator
            SideCrossIterator():container(*(new MagicalContainer())), position(1){};
            SideCrossIterator(MagicalContainer& cont) : container(cont), position(0) {}
            SideCrossIterator(const SideCrossIterator& other):container(other.container), position(1){};
            ~SideCrossIterator() = default;
            SideCrossIterator& operator=(const SideCrossIterator& other) {return *this;};

            // operators- == , != , > , < , * , ++ 
            bool operator==(const SideCrossIterator& other) const {
                return false; 
            }

            bool operator!=(const SideCrossIterator& other) const {
                return false;
            }

            bool operator<(const SideCrossIterator& other) const{
                return false; 
            }

            bool operator>(const SideCrossIterator& other) const{
                return false; 
            }

            int operator*() const {
                return 1;
            }

            SideCrossIterator& operator++() {
                return *this;
            }

            // Begin adn end iterators 
            SideCrossIterator begin() {
                return *this; 
            }

            SideCrossIterator end() {
                
                return *this;
            }
        };

                
        

    
    };
}

