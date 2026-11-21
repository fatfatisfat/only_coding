import sys

def solve():
    data = iter(sys.stdin.read().split())

    t = int(next(data))

    x = [1, 0, -1, 0, 1, -1, 1, -1]
    y = [0, 1, 0, -1, 1, 1, -1, -1]

    for case in range(t):
        n = int(next(data))
        m = int(next(data))
        d1 = int(next(data))
        d2 = int(next(data))

        grid = []
        for _ in range(n):
            grid.append(str(next(data)))

        arr = [[0] * m for _ in range(n)]

        for r in range(n):
            for c in range(m):
                if grid[r][c] == 'V':
                    for i in range(8):
                        if 0 <= r + x[i] < n and 0 <= c + y[i] < m:
                            if i < 4:
                                arr[r + x[i]][c + y[i]] = max(arr[r + x[i]][c + y[i]], d1)
                            else:
                                arr[r + x[i]][c + y[i]] = max(arr[r + x[i]][c + y[i]], d2)

        print(f"Airplane #{case + 1}:")
        for i in range(n):
            for j in range(m):
                if grid[i][j] == 'V':
                    print('V', end='')
                else:
                    print(arr[i][j], end='')
            print()
    return

if __name__ == "__main__":
    solve()



    

