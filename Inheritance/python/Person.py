class Person:
    def __init__(self, name, age):
        self.__name = name
        self.__age = age
    
    def getName(self):
        return self.__name

    def getAge(self):
        return self.__age
    
    def setName(self, name):
        self.__name = name
    
    def setAge(self, age):
        self.__age = age

    def __str__(self) -> str:
        return " Nama : " + self.__name + "\n Umur: " + str(self.__age)