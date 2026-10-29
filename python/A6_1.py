def display_menu():
    print("""\nMenu:
1. Insert an element
2. Delete an element
3. Search for an element
4. Display the largest and smallest element
5. Display the list in reverse order
6. Exit""")

def insert_element(lst):
    try:
        val = float(input("Enter number to insert: ").strip())
    except ValueError:
        print("Invalid number.")
        return
    idx_str = input("Enter index to insert at (press Enter to append): ").strip()
    if idx_str == "":
        lst.append(val)
    else:
        try:
            idx = int(idx_str)
            if idx < 0:
                print("Negative index not allowed; appending.")
                lst.append(val)
            else:
                if idx >= len(lst):
                    lst.append(val)
                else:
                    lst.insert(idx, val)
        except ValueError:
            print("Invalid index; appending.")
            lst.append(val)
    print("List:", lst)

def delete_element(lst):
    if not lst:
        print("List is empty.")
        return
    mode = input("Delete by value or index? (v/i): ").strip().lower()
    if mode == "v":
        try:
            val = float(input("Enter value to delete (first occurrence): ").strip())
        except ValueError:
            print("Invalid number.")
            return
        try:
            lst.remove(val)
            print("Removed. List:", lst)
        except ValueError:
            print("Value not found.")
    elif mode == "i":
        try:
            idx = int(input("Enter index to delete: ").strip())
            lst.pop(idx)
            print("Removed. List:", lst)
        except (ValueError, IndexError):
            print("Invalid index.")
    else:
        print("Invalid choice.")

def search_element(lst):
    if not lst:
        print("List is empty.")
        return
    try:
        val = float(input("Enter value to search for: ").strip())
    except ValueError:
        print("Invalid number.")
        return
    positions = [i for i, x in enumerate(lst) if x == val]
    if positions:
        print(f"Found at index(es): {positions}")
    else:
        print("Not found.")

def display_min_max(lst):
    if not lst:
        print("List is empty.")
        return
    print("Largest:", max(lst))
    print("Smallest:", min(lst))

def display_reverse(lst):
    if not lst:
        print("List is empty.")
        return
    print("Reversed list:", list(reversed(lst)))

def main():
    numbers = []
    while True:
        display_menu()
        choice = input("Enter choice (1-6): ").strip()
        if choice == "1":
            insert_element(numbers)
        elif choice == "2":
            delete_element(numbers)
        elif choice == "3":
            search_element(numbers)
        elif choice == "4":
            display_min_max(numbers)
        elif choice == "5":
            display_reverse(numbers)
        elif choice == "6":
            print("Exiting.")
            break
        else:
            print("Invalid choice. Enter 1-6.")

if __name__ == "__main__":
    main()
