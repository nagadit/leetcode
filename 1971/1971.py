def validPath(n, edges, source, destination):
    visited = [False] * n
    graph = {i:[] for i in range(n)}
    for i in edges:
        graph[i[0]].append(i[1])
        graph[i[1]].append(i[0])
    def find_path(fr, visited):
        visited[fr] = True
        for i in graph[fr]:
            if visited[i] == False:
                find_path(i, visited)

    find_path(source, visited)
    if visited[destination] == True:
            return True
    return False

if __name__ == "__main__":
    print(validPath(6, [[0,1],[0,2],[3,5],[5,4],[4,3]], 0 ,5))