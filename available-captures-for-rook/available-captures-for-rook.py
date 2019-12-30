class Solution(object):
def numRookCaptures(self, board):
    output = 0
    for i in range(0,len(board)):
        for j in range(0,len(board[i])):
            if board[i][j] == 'R':
                for r in range(i-1,-1,-1):
                    if board[r][j] == 'B':
                        break
                    if board[r][j] == 'p':
                        output += 1
                        break
                for r in range(i+1,len(board)):
                    if board[r][j] == 'B':
                        break
                    if board[r][j] == 'p':
                        output += 1
                        break
                for c in range(j-1,-1,-1):
                    if board[i][c] == 'B':
                        break
                    if board[i][c] == 'p':
                        output += 1
                        break
                for c in range(j+1,len(board[i])):
                    if board[i][c] == 'B':
                        break
                    if board[i][c] == 'p':
                        output += 1
                        break
    return output
                
                
    
