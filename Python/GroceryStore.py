print("Wellcome to Grocery store!")

ItemsAtStore = {
    "apple": 3.4,
    "banana": 4.3,
    "oragne": 2.3,
    "mengo": 5.3,
}

print("Following items are availble at store:")
for item in ItemsAtStore:
    print("Item {} availble at price {}".format(item, ItemsAtStore[item]))


print("Select your item from store: Added three item name and quntity")

SelectedItem1 = input("Enter 1st item name : ")
QuntityItem1 = int(input("Enter 1st item quntity : "))

SelectedItem2 = input("Enter 1st item name : ")
QuntityItem2 = int(input("Enter 1st item quntity : "))

SelectedItem3 = input("Enter 1st item name : ")
QuntityItem3 = int(input("Enter 1st item quntity : "))

TotalAmountItem1 = QuntityItem1 * ItemsAtStore[SelectedItem1]
TotalAmountItem2 = QuntityItem2 * ItemsAtStore[SelectedItem2]
TotalAmountItem3 = QuntityItem3 * ItemsAtStore[SelectedItem3]
SubTotal = TotalAmountItem1 + TotalAmountItem2 + TotalAmountItem3
Tax = SubTotal * 0.0085
FinalTotal = float(SubTotal + Tax)
print("Final bill is :")
print(f"First is {SelectedItem1} and it's qunaltity is {QuntityItem1}")
print(f"First is {SelectedItem2} and it's qunaltity is {QuntityItem2}")
print(f"First is {SelectedItem3} and it's qunaltity is {QuntityItem3}")
print(f"Tax is {Tax:.4f}")
print(f"Total payble amount is {FinalTotal}")
