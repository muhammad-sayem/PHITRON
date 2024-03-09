class Student:
    def __init__(self, name, current_class, id):
        self.name = name
        self.current_class = current_class
        self.id = id

    def __repr__(self) -> str:
        return f"Student name: {self.name}, Class: {self.current_class}, Student ID: {self.id}"
    
class Teacher:
    def __init__(self, name, subject, id):
        self.name = name
        self.subject = subject
        self.id = id

    def __repr__(self) -> str:
        return f"Teacher name: {self.name}, Subject: {self.subject}, Teacher ID: {self.id}"

class School:
    def __init__(self, school_name):
        self.school_name = school_name
        self.teachers = []
        self.students = []
    
    def add_tecaher(self, name, subject):
        teacher_id = len(self.teachers) + 1001

        teacher = Teacher(name, subject, teacher_id)
        self.teachers.append(teacher)
        # self.teachers.append(Teacher(name, subject, teacher_id))

    def enroll(self, name, fee):
        if fee < 6500:
            print("You are not able to enroll")
        else:
            student_id = len(self.students) + 1

            student = Student(name, 'C', student_id) 
            self.students.append(student)
            print(f"The student {name}, ID: {id} enrolled with 6500 and cash back {fee-6500} taka")

    def __repr__(self) -> str:
        print("Welcome to", self.school_name)
        print("-------- Our Teachers --------\n")
    
        for teacher in self.teachers:
            print(teacher)
        print("\n")

        for student in self.students:
            print(student)
        print()

        return "-------- THE END --------"


phitron = School("Phitron")

phitron.enroll("Rajib Hasan", 5500)
phitron.enroll("Fahim Islam", 7500)
phitron.enroll("Shajib Hossain", 8000)
phitron.enroll("Robin Rana", 6500)

phitron.add_tecaher("Rahat Khan Pathan", "DSA")
phitron.add_tecaher("Jhankar Mahbub", "Python")
phitron.add_tecaher("Apurba Saha", "CP")

print(phitron)
    
# arif = Student("Arif Ahmed", 9, 167)
# print(arif)

# faruk = Teacher("Faruk Hossain", "Math", 1234567)
# print(faruk)