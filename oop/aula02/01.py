from datetime import date
order_num = 0

class Client:
    def __init__(self, name : str, cpf : str, email : str):
        self.name = name
        self.cpf = cpf
        self.email = email

class Product:
    def __init__(self, name : str, price : float, qty : float):
        self.name = name
        self.price = price
        self.qty = qty

class Order:
    def __init__(self, order_num : int, client : Client, date : date, total : float):
        self.num = order_num
        self.client = client
        self.date = date
        self.total = total

    def show_order(self):
        print(f"Order {self.num}\nTotal: ${self.total}")


if __name__ == "__main__":
    testCli = Client("Yan", "05760319094","yanmesko@gmail.com")
    testProd = Product("Moto",15000, 1)
    testOrder = Order(order_num + 1, testCli, date.today(), testProd.price)
    order_num+=1
    testOrder.show_order()