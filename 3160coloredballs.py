
'''
Input: limit = 4, queries = [[1,4],[2,5],[1,3],[3,4]]
Output: [1,2,2,3]
[[0,1],[1,2],[2,2],[3,4],[4,5]]
create a dictionary for colors
create a dictionary for balls 

loop through the queires
    if the ball has an associated color
        decrease that color by one

    increase the color value by one


    filter all the colors with value of one in the dictionary 
    get the length
    add to the list
    
the time complexity is the queries * filter 
the space complexity is the number of colors and the number of balls
'''


class Solution:
    def queryResults(self, limit: int, queries: List[List[int]]) -> List[int]:
        ballsColors = {}
        colors = {}
        res = []
        distinctColors = 0
        for query in queries:
            ball= query[0]
            color = query[1]
            if ball in ballsColors:
               ballColor = ballsColors[ball]
               colors[ballColor] -= 1
               if colors[ballColor] == 0:
                  colors.pop(ballColor) 
                  distinctColors -=1

               ballsColors[ball] =  color
            else:
                ballsColors[ball] = color

            if color in colors:
               colors[color] += 1
            else:
               colors[color] = 1
               distinctColors += 1

            delColors = []
            res.append(distinctColors)

        return res

            


