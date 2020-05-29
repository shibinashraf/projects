balance = 10000

def show_menu():
	print("1.Withdrawal")
	print("2.Deposit")
	print("3.Show Account Balance")
	print("4.Exit")
def withdrawal():
	amount = int(input("Enter the amount you want to deposit:"))
	if amount<= balance:
	   print(amount,"has been Deposited successfully!",amount)
	   print("Your new balance is:",balance+amount)
	   print("Thank you for using our service :)")
def deposit():
	amount = int(input("Enter the amount you want to withdraw:"))
	print(amount,"has been withdrawn")
	print("Your new balance is :", balance-amount)
	print("Thank you for using our service :)")
def show_balance():
	print("Your account balance is:",balance)
    

option = int(input("Enter your Choice:"))
while option != 4:
	if option == 1:
		withdrawal()
	elif option == 2:
		deposit()
	elif option == 3:
		show_balance()
		break
	else:
		print("Invalid Choice! Try Again")

