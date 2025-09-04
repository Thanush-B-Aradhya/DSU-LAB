import java.util.Arrays;

public class SimplifiedLSR
{
    static int inf = 9999;

    public static void dijkstra(int[][] graph, int src) 
    {
        int n = graph.length;
        int[] dist = new int[n];
        boolean[] visited = new boolean[n];    
        Arrays.fill(dist, inf);
        dist[src] = 0;
        for (int i = 0; i < n - 1; i++) 
        {
            int u = minDistance(dist, visited);
            if (u == -1) break; // No reachable vertex left
            visited[u] = true;
            for (int v = 0; v < n; v++) 
            {
                if (!visited[v] && graph[u][v] != inf && dist[u] != inf && dist[u] + graph[u][v] < dist[v]) 
                    dist[v] = dist[u] + graph[u][v];
            }
        }
        // Print shortest distances from src
        System.out.println("Shortest distances from node " + src + ":");
        for (int i = 0; i < n; i++) {
            if (dist[i] == inf)
                System.out.print("INF ");
            else
                System.out.print(dist[i] + " ");
        }
        System.out.println();
    }

    static int minDistance(int[] dist, boolean[] visited) 
    {
        int min = inf, min_index = -1;
        for (int i = 0; i < dist.length; i++) 
        {
            if (!visited[i] && dist[i] <= min) 
            {
                min = dist[i];
                min_index = i;
            }
        }
        return min_index;
    }

    public static void main(String[] args) 
    {
        int[][] graph = 
        {
            {0, 1, inf, 1},
            {2, 0, 3, 2},
            {inf, 3, 0, 1},
            {1, 2, 1, 0}
        };
        int n = graph.length;
        for (int i = 0; i < n; i++)
            dijkstra(graph, i);
    }
}