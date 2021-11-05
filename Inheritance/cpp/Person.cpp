#include <string>
class Person {
    protected:
        std::string name;
        int age;

    public:
        Person(std::string name, int age) {
            this->name = name;
            this->age = age;
        }
        std::string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
        void setName(std::string name) {
            this->name = name;
        }
        void setAge(int age) {
            this->age = age;
        }
};