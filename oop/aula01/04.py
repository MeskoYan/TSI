class Employee:
    def __init__(self, name : str, sex : str, marital_status : str, salary : float):
        self.name = name
        self.sex = sex
        self.marital_status = marital_status
        self.salary = salary

    def sal_raise(self, percentage : float):
        self.salary += self.salary * (percentage/100)

    def show_earnings(self):
        print(f"{self.name}\n{self.sex}\n{self.marital_status}\n{self.salary}")

if __name__ == "__main__":
    eu = Employee("Yan","Male","Single",2000)
    eu.show_earnings()
    eu.sal_raise(10)
    eu.show_earnings()