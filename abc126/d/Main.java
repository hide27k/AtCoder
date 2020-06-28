import java.util.*;

public class Main {
    static List<int[]>[] graph;
    static int[] color;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // Init graph data structure.
        graph = new List[n];
        color = new int[n];
        for (int i = 0; i < n; i++) {
            graph[i] = new ArrayList<>();
        }

        // Init graph
        for (int i = 0; i < n - 1; i++) {
            // Change to 0 index start.
            int v = sc.nextInt() - 1;
            int u = sc.nextInt() - 1;
            int w = sc.nextInt();

            graph[v].add(new int[] { u, w });
            graph[u].add(new int[] { v, w });
        }

        // DFS: the color of the first vertex is 0.
        dfs(0, -1, 0);

        for (int i : color) {
            System.out.println(i);
        }
    }

    public static void dfs(int cu, int pa, int col) {
        color[cu] = col;
        for (int[] p : graph[cu]) {
            // No need to check parent node since it is already painted.
            if (p[0] == pa)
                continue;
            // Paint depends on the weignt.
            if (p[1] % 2 == 0) {
                dfs(p[0], cu, col);
            } else {
                dfs(p[0], cu, 1 - col);
            }
        }
    }
}