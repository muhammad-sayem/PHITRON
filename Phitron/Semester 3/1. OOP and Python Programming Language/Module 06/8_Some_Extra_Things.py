class Book:
    def __init__(self, book_name):
        self.book_name = book_name 

    def read(self):
        raise NotImplementedError

class Physics(Book):
    def __init__(self, book_name, chapters):
        self.chapters = chapters
        super().__init__(book_name)

    def read(self):
        print("Rading Physics Book")

topon = Physics("Physics Book", 12)
# print(topon.book_name)
# print(topon.chapters)
# topon.read()

print(issubclass(Physics, Book))
print(isinstance(topon, Physics))