class Client:
    def __init__(self, name : str, balance : float = 0):
        self.name = name
        self.balance = balance

    def withdraw(self, qtd : float):
        if self.balance > qtd:
            self.balance -= qtd
            print(f"Saque realizado\nNovo saldo: {self.balance}")
        else:
            print("Saldo insuficiente")

    def deposit(self, qtd : float):
        self.balance += qtd
        print(f"Deposito realizado\nNovo Saldo: {self.balance}")

if __name__ == "__main__":
    eu = Client("Yan", 9000)
    eu.withdraw(9001)
    eu.withdraw(100)
    eu.deposit(150)