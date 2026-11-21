import sys
import math

n = 2001
is_prime = [True] * n

def prime():
    is_prime[0] = False
    is_prime[1] = False
    for i in range(2, n):
        if is_prime[i]:
            for j in range(i * i, n, i):
                is_prime[j] = False
    return

def solve():
    prime()
    data = iter(sys.stdin.read().split())

    t = int(next(data))

    for case in range(t):
        print(f"Case {case + 1}: ", end = "")
        s = str(next(data))
        l = len(s)
        counts = [0] * 128
        for i in range(l):
            c = s[i]
            counts[ord(c)] += 1
        f = False
        for i in range(128):
            if is_prime[counts[i]]:
                print(chr(i), end = "")
                f = True
        if not f:
            print("empty", end = "")
        print()
    return


if __name__ == "__main__":
    solve()    