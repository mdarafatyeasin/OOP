class Student:
    def Status(self, name):
        print(name)
        print("Hello student")

class Yeasin(Student):
    def __init__(self,roll):
        self.roll = roll

    def Status(self):
        print(self.roll)
        if self.roll <= 5:
            print("Good student")
        else:
            print("Need to improve")
    
obj = Yeasin(10)
obj.Status()

# polymorphism
# same method with different operations  