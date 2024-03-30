from collections import deque

def last_stone_and_winner(stones):
    q = deque(stones)
    player = 0  # 0 for Aman, 1 for Akshat
    while len(q) > 1:
        # Aman's turn
        if player == 0:
            q.append(q.popleft())  # Move 1
            q.popleft()            # Move 2
        # Akshat's turn
        else:
            q.append(q.popleft())  # Move 1
            q.append(q.popleft())  # Move 1
            q.popleft()            # Move 2
        player = 1 - player  # Switch player
    print(player, q[0])

T = int(input())
for _ in range(T):
    N = int(input())
    stones = list(map(int, input().split()))
    last_stone_and_winner(stones)
