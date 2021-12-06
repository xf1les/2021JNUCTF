import random

s = "gotta_sweep_sweep_sweep_gotta_sweep_sweep_sweep_gotta_sweep_sweep_sweep"

ss = ''

for c in s:
    if c.isalpha():
        if random.randint(0, 1):
            ss += c.upper()
        else:
            ss += c.lower()
    else:
        ss += c

print(ss)
