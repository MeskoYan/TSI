class Book:
    def __init__(self, isbn : int, name : str, summary : str):
        self.isbn = isbn
        self.name = name
        self.summary = summary

    def showSummary(self):
        print(self.summary)

if __name__ == "__main__":
    livro = Book(1, "Noites Brancas", "Esse livro é muito bom")
    livro.showSummary()