class Parent:
    def parentPrint(self):
        print("this is parent class")


class Child(Parent):
    def childPrint(self):
        print("this is from child class")

obj = Child()
obj.parentPrint()