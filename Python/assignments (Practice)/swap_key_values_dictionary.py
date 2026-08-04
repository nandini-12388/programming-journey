d = {"name":"raaj", "colour": "pink", "car": "thar"}

swapped_items = {v:k for k, v in d.items()}
print(swapped_items)

# {'raaj': 'name', 'pink': 'colour', 'thar': 'car'}