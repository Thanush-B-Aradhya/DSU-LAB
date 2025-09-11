
import java.util.Scanner;

public class Prog3 {

    public static void bellmanFord(int[][] graph, int V, int E, int src) {
        int dist[] = new int[V];

        for (int i = 0; i < V; i++) 
            dist[i] = Integer.MAX_VALUE;
        
        dist[src] = 0;

        for (int i = 1; i < V; i++) 
        {
            for (int j = 0; j < E; j++) 
            {
                int u = graph[j][0];
                int v = graph[j][1];
                int weight = graph[j][2];
                if (dist[u] != Integer.MAX_VALUE && dist[u] + weight < dist[v]) 
                {
                    dist[v] = dist[u] + weight;
                }
            }
        }

        for (int j = 0; j < E; j++) 
        {
            int u = graph[j][0];
            int v = graph[j][1];
            int weight = graph[j][2];
            if (dist[u] != Integer.MAX_VALUE && dist[u] + weight < dist[v]) 
            {
                System.out.println("Graph contains negative weight cycle");
                return;
            }
        }
        printSolution(dist, V);
    }

    public static void printSolution(int[] dist, int V) 
    {
        System.out.println("Vertex\t\tDistance from Source");
        for (int i = 0; i < V; i++) 
        {
            System.out.println(i + "\t  " + dist[i]);
        }
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of vertices: ");
        int V = input.nextInt();
        System.out.print("Enter the number of edges: ");
        int E = input.nextInt();

        int[][] graph = new int[E][3];
        System.out.println("Enter the edges with source, destination, and weight:");
        for (int i = 0; i < E; i++) {
            System.out.print("Edge " + (i + 1) + ": ");
            graph[i][0] = input.nextInt();
            graph[i][1] = input.nextInt();
            graph[i][2] = input.nextInt();
        }
        System.out.print("Enter the source vertex: ");
        int src = input.nextInt();
        bellmanFord(graph, V, E, src);
        input.close();
    }
}
