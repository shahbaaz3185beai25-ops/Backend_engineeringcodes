#
class Person:
    def __init__(self, name):
        self.name = name

class Student(Person):
    def show(self):
        print("Name:", self.name)

s = Student("Rahul")
s.show()
#
class Student:
    def __init__(self,name):
        self.name=name
        print("Adding a student")
s1=Student("Virdi")
print(s1.name)
#
class Student:
    def __init__(self,name):
        self.name=name
    def hello(self):
        print("Hello World, from",self.name)
s1=Student("Virdi")
s1.hello()
#
class Student:
    college_name=" Chitkara University"
    def __init__(self,name,marks1,marks2,marks3):
        self.name=name
        self.marks1=marks1
        self.marks2=marks2
        self.marks3=marks3

    def get_name(self):
        print("My name is :",self.name)
    def get_marks(self):
        print("Maths:",self.marks1)
        print("IWT:",self.marks2)
        print("Python",self.marks3)
    def get_avg(self):
        print("Average scored:",(self.marks1+self.marks2+self.marks3)/3)
s1=Student("Virdi",8,2,2)
s1.get_name()
s1.get_marks()
s1.get_avg()
# Calculating Average using a for loop
class Student:
    def __init__(self,name,marks): # marks will be the list 
        self.name=name
        self.marks=marks
    def get_avg(self):
        sum=0
        
        for i in self.marks:
            sum+=i
        print("Average score :",sum/(len(self.marks)))
s1= Student("Virdi",[3,4,5])
print(s1.name)
print(s1.marks)
s1.get_avg()
#
class MyDate:
    def __init__(self, year, month, day):
        self.year = year
        self.month = month
        self.day = day

    @classmethod
    def from_string(cls, date_str):
        # date_str format: "YYYY-MM-DD"
        y, m, d = date_str.split("-")
        return cls(int(y), int(m), int(d))

    def show(self):
        print(f"{self.year:04d}-{self.month:02d}-{self.day:02d}")


# Test
d = MyDate.from_string("2025-12-31")
d.show()
#
class Connection:
    MAX_CONNECTIONS = 3
    active_connections = 0

    def __init__(self):
        if Connection.can_create():
            Connection.active_connections += 1
            self.created = True
            print("Connection created. Active:", Connection.active_connections)
        else:
            self.created = False
            print("Limit reached. Cannot create more connections.")

    @classmethod
    def can_create(cls):
        return cls.active_connections < cls.MAX_CONNECTIONS


# Test
c1 = Connection()
c2 = Connection()
c3 = Connection()
c4 = Connection()  # should show limit reached
#
class A:
    def __init__(self):
        print("A init")

class B(A):
    def __init__(self):
        A.__init__(self)
        print("B init")

class C(B):
    def __init__(self):
        B.__init__(self)
        print("C init")

c = C()
#
class A:
    def __init__(self, a):
        self.a = a

class B(A):
    def __init__(self, a, b):
        super().__init__(a)
        self.b = b

class C(B):
    def __init__(self, a, b, c):
        super().__init__(a, b)
        self.c = c

cobj = C(1, 2, 3)
print(cobj.a, cobj.b, cobj.c)
#
class Emp:
    def __init__(self,work):
        self.work=work
class Manager(Emp):
    def __init__(self,work,manager):
        super().__init__(work)
        self.manager=manager
class Leader(Manager):
    def __inti__(self,work,manager,leads):
        super().__init__(work,manager)
        self.leads=leads

o1=Leader(1,2)
print(o1.work,o1.manager,o1.leads)
#
class Employee:
    total_employees = 0

    def __init__(self, name):
        self.name = name
        Employee.total_employees += 1

    @classmethod
    def how_many(cls):
        return f"Total employees: {cls.total_employees}"


e1 = Employee("A")
e2 = Employee("B")
e3 = Employee("C")

print(Employee.how_many())
print(e2.how_many())

#
dict={'A':1,'B':-2,'C':3}
max_val=0
for k in dict:
    if dict[k]>max_val:
        max_val=dict[k]
print(max_val)    
#
dict={'A':1,'B':-2,'C':3,'D':9}
max_val=0
for k in dict:
    if dict[k]>max_val:
        max_val=dict[k]
print(max_val) 

#
pairs = [("math", 80), ("science", 90), ("english", 75)]
marks = {}

for p in pairs:
    subject = p[0]
    score = p[1]
    marks[subject] = score

print(marks)
#
# Define parent class
class Animal:
    def speak(self):
        print("Animal speaks")

# Define child class inheriting from Animal
class Dog(Animal):
    def speak(self):
        print("Dog barks")

# Create instances (objects)
a = Animal()
d = Dog()

# Call methods on objects
a.speak()   # Output: Animal speaks
d.speak()   # Output: Dog barks
#
# Q18
nums = [1, 2, 3, 4]
rev = []

for i in range(len(nums)-1, -1, -1):
    rev.append(nums[i])

print(rev)
#Super function


    
