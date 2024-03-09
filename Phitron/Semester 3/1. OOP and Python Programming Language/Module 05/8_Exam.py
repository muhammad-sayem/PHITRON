class Exam:

    def __init__(self, student_name):
        self.student_name = student_name
        self.marks = 0

    def mid_marks(self, number):
        self.marks += number

    def final_marks(self, number):
        self.marks += number

    def other_marks(self, number):
        self.marks += number

    def total_marks(self):
        print(f"Total marks: {self.marks}")

    def result(self):
        if self.marks >= 40:
            print("Passed")
        else:
            print("Failed")

rakib = Exam("Rakibul Islam")

rakib.mid_marks(26)
rakib.mid_marks(30)
rakib.mid_marks(20)

rakib.total_marks()
rakib.result()
